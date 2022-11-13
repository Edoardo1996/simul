#include <cassert>
#include "BoundaryConditions.hpp"

BoundaryConditions::BoundaryConditions()
{
   mLhsBcIsDirichlet = false;
   mRhsBcIsDirichlet = false;
   mLhsBcIsNeumann = false;
   mRhsBcIsNeumann = false;
}

void BoundaryConditions::SetLhsDirichletBc(double lhsVale)
{
   assert(!mLhsBcIsNeumann);
   mLhsBcIsDirichlet = true;
   mLhsBcValue = mLhsBcValue;
}

void BoundaryConditions::SetRhsDirichletBc(double rhsValue)
{
   assert(!mRhsBcIsNeumann);
   mRhsBcIsDirichlet = true;
   mRhsBcValue = rhsValue;
}

void BoundaryConditions::SetLhsNeumannBc(double lhsDerivValue)
{
   assert(!mLhsBcIsDirichlet);
   mLhsBcIsNeumann = true;
   mLhsBcValue = lhsDerivValue;
}

void BoundaryConditions::
    SetRhsNeumannBc(double rhsDerivValue)
{
   assert(!mRhsBcIsDirichlet);
   mRhsBcIsNeumann = true;
   mRhsBcValue = rhsDerivValue;
}
