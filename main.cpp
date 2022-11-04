#include <iostream>
#include "Vector.hpp"

int main()
{ 
    Vector v(3);
    v[0] = 1;
    std::cout << v << std::endl;
    return 0;
}