#ifndef SQUARES_H
#define SQUARES_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

extern int squares(double a, double b, double c, double *root1, double *root2);

class squaresTest : public ::testing::Test {
protected:
    double root1, root2;
    int result;
};

TEST_F(squaresTest, OneRoot) {
result = squares(1, -2, 1, &root1, &root2);
ASSERT_EQ(result, 1);
ASSERT_EQ(1 * root1 * root1 - 2 * root1 + 1, 0, 0)
}

TEST_F(squaresTest, TwoRoots) {
result = squares(1, -3, 2, &root1, &root2);
ASSERT_EQ(result, 2);
ASSERT_EQ(1 * root1 * root1 - 3 * root1 + 1, 0, 0)
ASSERT_EQ(1 * root2 * root2 - 3 * root2 + 1, 0, 0)
}

TEST_F(squaresTest, NoRoots) {
result = squares(1, 0, 1, &root1, &root2);
ASSERT_EQ(result, 0);
}

TEST_F(squaresTest, NotSquare) {
result = squares(0, 2, 1, &root1, &root2);
ASSERT_EQ(result, -1);
}

#endif // SQUARES_H
