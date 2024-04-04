#include "gtest/gtest.h"
extern "C" {
#include "quadratic_equation_solver.h"
}
TEST(QuadraticEquationSolverTest, TwoRealRoots) {
    double a = 1.0;
    double b = -3.0;
    double c = 2.0;
    double root1, root2;
    int numRoots = solveQuadraticEquation(a, b, c, &root1, &root2);
    EXPECT_EQ(numRoots, 2);
    EXPECT_DOUBLE_EQ(root1, 2.0);
    EXPECT_DOUBLE_EQ(root2, 1.0);
}

TEST(QuadraticEquationSolverTest, OneRealRoot) {
    double a = 1.0;
    double b = -2.0;
    double c = 1.0;
    double root1, root2;
    int numRoots = solveQuadraticEquation(a, b, c, &root1, &root2);
    EXPECT_EQ(numRoots, 1);
    EXPECT_DOUBLE_EQ(root1, 1.0);
    EXPECT_DOUBLE_EQ(root2, 1.0); // root2 должен быть равен root1, если только у уравнения нет двух корней
}

TEST(QuadraticEquationSolverTest, NoRealRoots) {
    double a = 1.0;
    double b = 2.0;
    double c = 3.0;
    double root1, root2;
    int numRoots = solveQuadraticEquation(a, b, c, &root1, &root2);
    EXPECT_EQ(numRoots, 0);
}
