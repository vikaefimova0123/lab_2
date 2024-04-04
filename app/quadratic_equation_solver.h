#ifndef QUADRATIC_EQUATION_SOLVER_H
#define QUADRATIC_EQUATION_SOLVER_H

// Функция для вычисления корней квадратного уравнения
// ax^2 + bx + c = 0
// Возвращает количество корней (0, 1 или 2)
int solveQuadraticEquation(double a, double b, double c, double *root1, double *root2);

#endif // QUADRATIC_EQUATION_SOLVER_H
