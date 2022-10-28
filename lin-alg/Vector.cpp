#include <cmath>
#include <iostream>
#include <cassert>
#include "Vector.hpp"

// Constructor
Vector::Vector(int size)
{
    assert(size > 0 );
    mSize = size;
    mData = new double [mSize];
    for (int i=0; i<mSize; i++)
    {
        mData[i] = 0.0;
    }
}

// Copy constructor
Vector::Vector(const Vector& otherVector)
{
    mSize = otherVector.GetSize();
    mData = new double [mSize];
    for (int i=0; i<mSize; i++)
    {
        mData[i] = otherVector.mData[i];
    }
}

// Destructor
Vector::~Vector()
{
    delete[] mData;
}

// Get size of a vector
int Vector::GetSize() const
{
    return mSize;
}

// Overloading square bracket operator
double& Vector::operator[](int i)
{
    assert(i > -1);
    assert(i < mSize);
    return mData[i];
} 

