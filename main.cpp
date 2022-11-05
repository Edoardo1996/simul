#include <iostream>
#include "Vector.hpp"
#include "Matrix.hpp"


int main()
{ 
    Vector v(3);
    Matrix m(2, 2);
    v[0] = 1;
    std::cout << v << std::endl;
    std::cout << m << std::endl;
    return 0;
}