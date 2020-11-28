#pragma once
#include <iostream>
#include "LinkedList.hpp"
#include "LinkedListSequence.hpp"
#include "DynamicArray.hpp"
#include "ArraySequence.hpp"
#include "Sequence.hpp"
#include "Sort.hpp"

bool comp(const int& first, const int& second)
{
    return first > second;
}

class SorterTest {
public:
    SorterTest() {
        TestBubbleSort();
        std::cout << std::endl;

        TestQuickSort();
        std::cout << std::endl;

        TestShakerSort();
        std::cout << std::endl;


    }

private:

    bool SequenceTest(int *verification, Sequence<int> *Sequence) {
        bool result = true;
        for (int i = 0; i < Sequence->GetLength(); i++) {
            if (*(verification + i) != Sequence->Get(i)) {
                result = false;
            }
        }
        return result;
    }

    void TestBubbleSort() {
        int initial[5] = {5, 4, 3, 2, 1};
        int verification[5] = {1, 2, 3, 4, 5};

        ArraySequence<int> *Sequence = new ArraySequence<int>(initial, 5);
        BubbleSorter<int> *Sorter = new BubbleSorter<int>();
        Sorter->Sort(Sequence, comp);

        if (SequenceTest(verification, Sequence)) {
            std::cout << "Test passed: BubbleSorter";
        } else {
            std::cout << "Test failed: BubbleSorter";
        }
    }

    void TestQuickSort() {
        int initial[5] = {5, 4, 3, 2, 1};
        int verification[5] = {1, 2, 3, 4, 5};

        ArraySequence<int> *Sequence = new ArraySequence<int>(initial, 5);
        QuickSorter<int> *Sorter = new QuickSorter<int>();
        Sorter->Sort(Sequence, comp);

        if (SequenceTest(verification, Sequence)) {
            std::cout << "Test passed: QuickSorter";
        } else {
            std::cout << "Test failed: QuickBubbleSorter";
        }
    }

    void TestShakerSort() {
        int initial[5] = {5, 4, 3, 2, 1};
        int verification[5] = {1, 2, 3, 4, 5};

        ArraySequence<int> *Sequence = new ArraySequence<int>(initial, 5);
        ShakerSorter<int> *Sorter = new ShakerSorter<int>();
        Sorter->Sort(Sequence, comp);

        if (SequenceTest(verification, Sequence)) {
            std::cout << "Test passed: ShakerSorter";
        } else {
            std::cout << "Test failed: ShakerBubbleSorter";
        }
    }
};

void Tests()
{
    std::cout << "Tests are starting" << std::endl;

    new SorterTest();
    std::cout << std::endl;

}