#include <iostream>
#include "Vector.hpp"
#include "Matrix.hpp"


int main()
{ 
    Matrix square(5,5);
    Matrix nonsquare(7, 13);

    std::cout << square.GetNumCols() << std::endl;
    Vector vec(25);

    std::cout << vec.CalculateNorm() << std::endl;
    std::cout << vec.GetSize() << std::endl;

    Vector v(12);
    std::cout << v.GetSize() << std::endl;

    return 0;
}