#pragma once

class BoundaryConditions
{
public:
    // The boundary value class is able to
    // access the properties (coefficients, knowns etc.)
    // of the differential equation
    friend class BvpOde;
private:
   bool mLhsBcIsDirichlet;
   bool mRhsBcIsDirichlet;
   bool mLhsBcIsNeumann;
   bool mRhsBcIsNeumann;
   double mLhsBcValue;
   double mRhsBcValue;
public:
    BoundaryConditions(); 
    void SetLhsDirichletBc(double lhsValue);
    void SetRhsDirichletBc(double rhsValue);
    void SetLhsNeumannBc(double lhsDerivValue);
    void SetRhsNeumannBc(double rhsDerivValue);
};