set (Headers
    BoundaryConditions.hpp
    BvpOde.hpp
    FiniteDiffGrid.hpp
    LinSys.hpp
    Matrix.hpp
    Node.hpp
    SecondOrderOde.hpp
    Vector.hpp
)

set (Sources
    BoundaryConditions.cpp
    BvpOde.cpp
    FiniteDiffGrid.cpp
    LinSys.cpp
    Matrix.cpp
    Vector.cpp
)

add_library(linalg ${Headers} ${Sources})