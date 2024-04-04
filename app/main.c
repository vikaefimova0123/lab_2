#include <stdio.h>
#include "quadratic_equation_solver.h"

int main() {
    printf("Hello World!\n");

    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Ошибка ввода. Пожалуйста, введите три числа.\n");
        return 1; // Возврат ненулевого значения обычно указывает на ошибку
    }

    double root1, root2;
    int numRoots = solveQuadraticEquation(a, b, c, &root1, &root2);

    if (numRoots == 2) {
        printf("Корни уравнения: %.2lf и %.2lf\n", root1, root2);
    } else if (numRoots == 1) {
        printf("Уравнение имеет один корень: %.2lf\n", root1);
    } else {
        printf("Уравнение не имеет действительных корней.\n");
    }

    return 0;
}
