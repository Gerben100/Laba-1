#include <iostream>
#include "LinkedList.hpp"
#include "LinkedListSequence.hpp"
#include "DynamicArray.hpp"
#include "ArraySequence.hpp"
#include "Sort.hpp"
#include "Tests.hpp"


void MenuSort()
{
    std::cout << "How do you want to sort?" << std::endl;
    std::cout << "Sorting by bubble -> 1" << std::endl;
    std::cout << "Sorting by quick -> 2" << std::endl;
    std::cout << "Sorting by shaker -> 3" << std::endl;
    std::cout << "Sorting by merge -> 4" << std::endl;
    std::cout << "Exit -> 0" << std::endl;
}

void MenuType()
{
    std::cout << "How do you want to sort?" << std::endl;
    std::cout << "Int -> 1" << std::endl;
    std::cout << "Float -> 2" << std::endl;
    std::cout << "Exit -> 0" << std::endl;
}

void MenuStruct()
{
    std::cout << "How do you want to sort?" << std::endl;
    std::cout << "List -> 1" << std::endl;
    std::cout << "Array -> 2" << std::endl;
    std::cout << "Exit -> 0" << std::endl;
}

void BubbleSortIntArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    ArraySequence<int>* Sequence = new ArraySequence<int>(values, quantity);
    BubbleSorter<int>* Sorter = new BubbleSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void BubbleSortFloatArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    ArraySequence<float>* Sequence = new ArraySequence<float>(values, quantity);
    BubbleSorter<float>* Sorter = new BubbleSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void BubbleSortIntList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    LinkedListSequence<int>* Sequence = new LinkedListSequence<int>(values, quantity);
    BubbleSorter<int>* Sorter = new BubbleSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void BubbleSortFloatList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    LinkedListSequence<float>* Sequence = new LinkedListSequence<float>(values, quantity);
    BubbleSorter<float>* Sorter = new BubbleSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void QuickSortIntList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    LinkedListSequence<int>* Sequence = new LinkedListSequence<int>(values, quantity);
    QuickSorter<int>* Sorter = new QuickSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void QuickSortFloatList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    LinkedListSequence<float>* Sequence = new LinkedListSequence<float>(values, quantity);
    QuickSorter<float>* Sorter = new QuickSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void QuickSortIntArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    ArraySequence<int>* Sequence = new ArraySequence<int>(values, quantity);
    QuickSorter<int>* Sorter = new QuickSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void QuickSortFloatArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    ArraySequence<float>* Sequence = new ArraySequence<float>(values, quantity);
    QuickSorter<float>* Sorter = new QuickSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void ShakerSortIntList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    LinkedListSequence<int>* Sequence = new LinkedListSequence<int>(values, quantity);
    ShakerSorter<int>* Sorter = new ShakerSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void ShakerSortFloatList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    LinkedListSequence<float>* Sequence = new LinkedListSequence<float>(values, quantity);
    ShakerSorter<float>* Sorter = new ShakerSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void ShakerSortIntArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    ArraySequence<int>* Sequence = new ArraySequence<int>(values, quantity);
    ShakerSorter<int>* Sorter = new ShakerSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void ShakerSortFloatArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    float* values = new float[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
        values[i]=values[i]/100;
    }

    ArraySequence<float>* Sequence = new ArraySequence<float>(values, quantity);
    ShakerSorter<float>* Sorter = new ShakerSorter<float>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}

void MergeSortIntList()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    LinkedListSequence<int>* Sequence = new LinkedListSequence<int>(values, quantity);
    MergeSorter<int>* Sorter = new MergeSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}


void MergeSortIntArray()
{
    int quantity;
    std::cout << "Enter the quantity of items" << std::endl;
    std::cin >> quantity;

    int* values = new int[quantity];
    srand(time(nullptr));
    for (int i = 0; i < quantity; i++)
    {
        values[i] = rand();
    }

    ArraySequence<int>* Sequence = new ArraySequence<int>(values, quantity);
    MergeSorter<int>* Sorter = new MergeSorter<int>();

    std::cout << "Before sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

    Sorter->Sort(Sequence, comp);
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    Sequence->Print();
    std::cout << std::endl;

}


int QuickInt()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            QuickSortIntList();
            return 1;
        case 2:
            QuickSortIntArray();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int QuickFloat()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            QuickSortFloatList();
            return 0;
        case 2:
            QuickSortFloatArray();
            return 0;
        case 0:
            return 1;
        default:
            std::cout << "Error" << std::endl;
            return 1;
    }
}

int TypeQuick()
{
    int Type;
    MenuType();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            QuickInt();
            return 1;
        case 2:
            QuickFloat();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}



int BubleInt()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            BubbleSortIntList();
            return 1;
        case 2:
            BubbleSortIntArray();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int BubleFloat()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            BubbleSortFloatList();
            return 1;
        case 2:
            BubbleSortFloatArray();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int TypeBuble()
{
    int Type;
    MenuType();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            BubleInt();
            return 1;
        case 2:
            BubleFloat();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int ShakerInt()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            ShakerSortIntList();
            return 1;
        case 2:
            ShakerSortIntArray();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int ShakerFloat()
{
    int Type;
    MenuStruct();
    std::cin >> Type;

    switch (Type)
    {
        case 1:
            ShakerSortFloatList();
            return 1;
        case 2:
            ShakerSortFloatArray();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int TypeShaker()
{
    int Type;
    MenuType();
    std::cin>>Type;

    switch (Type)
    {
        case 1:
            ShakerInt();
            return 1;
        case 2:
            ShakerFloat();
            return 1;
        case 0:
            return 0;
        default:
            std::cout << "Error" << std::endl;
            return 0;
    }
}

int main() {

    std::cout << "Run tests? -> 1, else -> 0" << std::endl;
    int pointer;
    std::cin >> pointer;

    switch (pointer)
    {
        case 1:
            Tests();
        case 0:
            break;
        default:
            std::cout << "Error" << std::endl;
            break;
    }


    MenuSort();

    int TypeSort;
    std::cin>> TypeSort;

    do {
        switch (TypeSort) {
            case 1:
                TypeSort=TypeBuble();
                break;
            case 2:
                TypeSort=TypeQuick();
                break;
            case 3:
                TypeSort=TypeShaker();
                break;
            case 4:
                MergeSortIntList();
                break;
            case 0:
                break;
            default:
                std::cout <<"Error" << std::endl;
                break;

        }
    }
    while (TypeSort!=0);
}


