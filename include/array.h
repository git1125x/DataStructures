#pragma once
#include <cstddef> 
#include <stdexcept>

template <typename T>
class arrayIterator
{
private:
    T* ptr;
public:
    arrayIterator(T* dataPtr):ptr(dataPtr){}

    //Prefix increment operator
    arrayIterator& operator++(){
        ++ptr;
        return *this;
    }

    //Postfix operator
    arrayIterator operator++(int){
        arrayIterator tmp = *this;
        ++ptr;
        return tmp;
    }

    //Dereference operator
    T& operator*() const {
        return *ptr;
    }

    // Equality operator
    bool operator==(const arrayIterator& other) const {
        return ptr == other.ptr;
    }

    // Inequality operator
    bool operator!=(const arrayIterator& other) const {
        return ptr != other.ptr;
    }
};

template <typename T, std::size_t S>
class array{
private:
    T data[S];
public:
    array(){}
    ~array(){}
    T& operator[](std::size_t index)
    {
        if(index >= S)
        {
            throw std::out_of_range("Index out of range");
    
        }
        return data[index];
    }
    std::size_t size() const {return S;}
    T back() const
    {
        return data[S-1];
    }
    void fill(T value)
    {
        for(int i = 0; i < S; i++)
        {
            data[i] = value;
        }
    }
    arrayIterator<T> begin(){
        return arrayIterator<T>(data);
    }
    arrayIterator<T> end(){
        return arrayIterator<T>(data + S);
    }
};