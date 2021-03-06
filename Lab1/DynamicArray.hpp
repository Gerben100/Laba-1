#pragma once
#include <string>

template <class T>
class DynamicArray
{
private:
    T* items;
    bool* itemsCheck;
    int size;

public:
    DynamicArray(T* items, int count)
    {
        this->items = new T[count];

        for (int i = 0; i < count; i++)
        {
            this->items[i] = items[i];
        }

        this->size = count;
        this->itemsCheck = new bool[count];

        for (int i = 0; i < size; i++)
        {
            this->itemsCheck[i] = true;
        }
    }

    DynamicArray(int size)
    {
        this->items = new T[size];
        this->itemsCheck = new bool[size];

        for (int i = 0; i < size; i++)
        {
            this->itemsCheck[i] = false;
        }

        this->size = size;
    }

    DynamicArray(const DynamicArray<T>& array)
    {
        this->size = array.size;

        this->items = new T[array.size];
        this->itemsCheck = new bool[array.size];

        for (int i = 0; i < array.size; i++)
        {
            this->items[i] = array.items[i];
            this->itemsCheck[i] = array.itemsCheck[i];
        }
    }

    T Get(const int index) const
    {
        return this->items[index];
    }

    void Set (int index, T value)
    {
        this->items[index] = value;
        this->itemsCheck[index] = true;
    }

    int GetSize()
    {
        return this->size;
    }

    void Resize(int newSize)
    {
        if (newSize >= this->size)
        {
            T* itemsOfNewArray = new T[newSize];

            for (int i = 0; i < newSize; i++)
            {
                itemsOfNewArray[i] = *this->items;
            }

            delete[] this->items;

            this->items = itemsOfNewArray;
            this->size = newSize;
        }
        else
        {
            T* itemsOfNewArray = new T[newSize];

            for (int i = 0; i < this->size; i++)
            {
                itemsOfNewArray[i] = this->items[i];
                this->itemsCheck[i] = true;
            }

            for (int i = this->size; i < newSize ; i++)
            {
                this->itemsCheck[i] = false;
            }

            delete[] this->items;

            this->items = itemsOfNewArray;
            this->size = newSize;
        }
    }
};
