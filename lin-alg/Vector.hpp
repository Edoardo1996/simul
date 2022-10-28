#pragma once

class Vector {
private:
    double* mData; // Data of vector
    int mSize; // Size of vector
public:

    Vector(int size); // Constructor
    Vector(const Vector& otherVector); // Copy Constructor
    ~Vector(); // Destructor

    int GetSize() const;
    double& Vector::operator[](int i);

};