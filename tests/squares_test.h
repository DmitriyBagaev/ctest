#ifndef SQUARES_H
#define SQUARES_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(squaresTest, OneRoot) {
    ASSERT_EQ(squares(1.0, -2.0, 1.0);
}
TEST(squaresTest, TwoRoots) {
    ASSERT_EQ(squares(1.0, -3.0, 2.0);
}
TEST(squaresTest, NoRoots) {
    ASSERT_EQ(squares(1.0, 0.0, 1.0);
}

#endif // SQUARES_H
