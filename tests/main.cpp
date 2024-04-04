#include "tst_test1.h"
#include "../app/quadratic_equation_solver.h" // Путь к заголовочному файлу quadratic_equation_solver.h

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
