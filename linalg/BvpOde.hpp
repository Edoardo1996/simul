#pragma once

#include <string>
#include "Matrix.hpp"   
#include "Vector.hpp"
#include "LinSys.hpp"
#include "FiniteDiffGrid.hpp"   
#include "SecondOrderOde.hpp"
#include "BoundaryConditions.hpp"

class BvpOde
{
private:
    // Only allow instance to be crated from a PDE, boundary
    // conditions, and nu,ber of nodes in the mesh
    // by making the copy constructor private
    BvpOde(const BvpOde& otherBvpOde);

    // Number of nodes in the grid and pointer to a grid
    int mNumNodes;
    FiniteDifferenceGrid* mpGrid;

    // Pointer to instance of an ODE
    SecondOrderOde* mpOde;

    // Pointer to an instance of boundary conditions
    BoundaryConditions* mpBconds;

    // Vector for solution
    Vector* mpSolVec;

    // Right-hand side Vector
    Vector* mpRhsVec;

    // Matrix for linerar system
    Matrix* mpLhsMat;

    // Linear system that arises
    LinearSystem* mpLinearSystem;

    // Allow user to specify the ouput file or
    // use a default name
    std::string mFilename;

    // Methods for setting up linear system and solving it
    void PopulateMatrix();
    void PopulateVector();
    void ApplyBoundaryConditions();

public:
    // Sole constructor
    BvpOde(SecondOrderOde* pOde, BoundaryConditions* pBcs, int mNumNodes);
    ~BvpOde();

    void SetFileName(const std::string& name)
    {
        mFilename = name;
    }
    void Solve();
    void WriteSolutionFile();
};
