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
    ASSERT_EQ(squares(1), 1);
}
TEST(squaresTest, TwoRoots) {
    ASSERT_EQ(squares(2), 2);
}
TEST(squaresTest, NoRoots) {
    ASSERT_EQ(squares(0), 0);
}
TEST(squaresTest, NotSquare) {
ASSERT_EQ(squares(-1), -1);
}

#endif // SQUARES_H
