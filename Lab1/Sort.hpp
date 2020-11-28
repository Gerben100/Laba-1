#pragma once
#include "LinkedListSequence.hpp"
#include "ArraySequence.hpp"
#include "Sequence.hpp"
#include "LinkedList.hpp"
#include <ctime>


template <typename T>
class ISorter
{
public:
    virtual void Sort(Sequence<T>* input, bool (*comp)(const T& first,const T& second)) = 0;
};

template <typename T>
bool comp(const T& first, const T& second)
{
    return first >= second;
}

template <typename T>
class BubbleSorter : ISorter<T>
{
public:
    void Sort(Sequence<T>* sequence, bool (*comp)(const T& first,const T& second)) override
    {
        int size = sequence->GetLength();
        int start = clock();
        T pivot;

        for (int i = 0; i < size-1; i++)
        {
            for (int j = 0; j < size-1; j++)
            {
                if (comp(sequence->Get(j), sequence->Get(j+1)))
                {
                    pivot = sequence->Get(j);
                    sequence->Set(j, sequence->Get(j+1));
                    sequence->Set(j+1, pivot);
                }
            }
        }

        int end = clock();
        std::cout << "Time of sorting: " << (end - start) / (double)CLOCKS_PER_SEC << std::endl;
    }
};

template <typename T>
class QuickSorter : ISorter<T>
{
private:
    void QuickSorterHelper(Sequence<T>* sequence, int left, int right, bool (*comp)(const T& first,const T& second))
    {
        T pivot;
        int l_hold = left;
        int r_hold = right;
        pivot = sequence->Get(left);
        while (left < right)
        {
            while ((comp(sequence->Get(right),pivot)) && (left < right))
                right--;
            if (left != right)
            {
                sequence->Set(left,sequence->Get(right));
                left++;
            }
            while ((!comp(sequence->Get(left),pivot)) && (left < right))
                left++;
            if (left != right)
            {
                sequence->Set(right,sequence->Get(left));
                right--;
            }
        }
        sequence->Set(left,pivot);
        pivot = left;
        left = l_hold;
        right = r_hold;
        if (left < pivot)
            QuickSorterHelper(sequence, left, pivot - 1,comp);
        if (right > pivot)
            QuickSorterHelper(sequence, pivot + 1, right,comp);
    }
public:
    void Sort(Sequence<T>* sequence, bool (*comp)(const T& first,const T& second)) override
    {
        int start = clock();
        this->QuickSorterHelper(sequence, 0, sequence->GetLength() - 1, comp);
        int end = clock();
        std::cout << "Time of sorting: " << (end - start) / (double)CLOCKS_PER_SEC << std::endl;
    }
};


template <typename T>
class ShakerSorter : ISorter<T>
{
public:
        void Sort(Sequence<T>* sequence, bool (*comp)(const T& first,const T& second)) override
        {
            int size = sequence->GetLength();
            int start = clock();

            int left=1;
            int right=size-1;
            T pivot;


        while (left<=right)
        {
            for (int i = right; i >= left; i--)
            {
                if (comp(sequence->Get(i-1), sequence->Get(i)))
                {
                    pivot = sequence->Get(i-1);
                    sequence->Set(i-1, sequence->Get(i));
                    sequence->Set(i, pivot);
                }
            }
            left++;

            for (int i = left; i <= right; i++)
            {
                if (comp(sequence->Get(i-1), sequence->Get(i)))
                {
                    pivot = sequence->Get(i-1);
                    sequence->Set(i-1, sequence->Get(i));
                    sequence->Set(i, pivot);
                }
            }
            right--;
        }


        int end = clock();
        std::cout << "Time of sorting: " << (end - start) / (double)CLOCKS_PER_SEC << std::endl;
    }
};

template <typename T>
class MergeSorter : ISorter<T>
{
private:
    void Merge(Sequence<T>* seq, int low, int mid, int high, bool (*comp)(const T& first,const T& second))
    {
        T* temp = new T[high + 1];
        int i = low;
        int j = mid + 1;
        int k = 0;

        while (i <= mid && j <= high)
        {
            if (comp(seq->Get(j), seq->Get(i))) {
                temp[k++] = seq->Get(i++);
            }
            else {
                temp[k++] = seq->Get(j++);
            }
        }
        while (i <= mid)
            temp[k++] = seq->Get(i++);
        while (j <= high)
            temp[k++] = seq->Get(j++);
        k--;
        while (k >= 0)
        {
            seq->Set(k + low, temp[k]);
            k--;
        }
    }

    void MergeSorterHelper(Sequence<T>* sequence, int low, int high, bool (*comp)(const T& first,const T& second))
    {
        int mid;

        if (low < high)
        {
            mid = (low + high) / 2;
            MergeSorterHelper(sequence, low, mid, comp);
            MergeSorterHelper(sequence, mid + 1, high, comp);
            Merge(sequence, low, mid, high, comp);
        }
    }

public:
    void Sort(Sequence<T>* sequence, bool (*comp)(const T& first,const T& second)) override
    {
        int startTime = clock();
        this->MergeSorterHelper(sequence, 0, sequence->GetLength() - 1, comp);
        int endTime = clock();
        std::cout << "Time of Mergesorting: " << (endTime - startTime) / (double)CLOCKS_PER_SEC << std::endl;
    }
};

