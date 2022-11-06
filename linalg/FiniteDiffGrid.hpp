#pragma once

#include <vector>
#include "Node.hpp" 

class FiniteDifferenceGrid
{
public:
    // The boundary value class is able to access the modes
    friend class BvpOde;
private:
    std::vector<Node> mNodes;
public:
    FiniteDifferenceGrid(int numNodes, double xMin, double xMax);
};