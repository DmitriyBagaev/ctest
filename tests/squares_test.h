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

TEST(squaresTest, OneRoot) {
result = squares(1, -2, 1, &root1, &root2);
ASSERT_EQ(result, 1);
}

TEST(squaresTest, TwoRoots) {
result = squares(1, -3, 2, &root1, &root2);
ASSERT_EQ(result, 2);
}

TEST(squaresTest, NoRoots) {
result = squares(1, 0, 1, &root1, &root2);
ASSERT_EQ(result, 0);
}

TEST(squaresTest, NotSquare) {
result = squares(0, 2, 1, &root1, &root2);
ASSERT_EQ(result, -1);
}

#endif // SQUARES_H
