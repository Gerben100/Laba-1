#pragma once
#include <iostream>

template <class T>
class Sequence
{
public:
    virtual int GetLength() = 0;
    virtual T GetFirst() = 0;
    virtual T GetLast() = 0;
    virtual T Get(const int i) = 0;
    virtual void Set(int index, T value) = 0;
    virtual Sequence<T>* GetSubSequence(const int start, const int end) = 0;
    virtual void Append(T value) = 0;
    virtual void Prepend(T value) = 0;
    virtual void InsertAt(T value, const int index) = 0;
    virtual Sequence<T>* Concat(Sequence<T>* other) = 0;
    virtual ~Sequence(){}
};