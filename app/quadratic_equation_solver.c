#include <math.h>

// Функция для вычисления корней квадратного уравнения
// ax^2 + bx + c = 0
// Возвращает количество корней (0, 1 или 2)
int solveQuadraticEquation(double a, double b, double c, double *root1, double *root2) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        return 2; // два корня
    } else if (discriminant == 0) {
        *root1 = -b / (2 * a);
        *root2 = *root1;
        return 1; // один корень
    } else {
        return 0; // нет действительных корней
    }
}
