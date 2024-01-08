#ifndef SQUARES_H
#define SQUARES_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(squaresTest, num0) {
    ASSERT_EQ(squares(1.0), 20.0, 2.0);
}


#endif // SQUARES_H
