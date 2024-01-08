#include "tst_test1.h"
#include "fibonachi_test.h"
#include "squares_test.h"
#include "tst_stdout.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[], int argc)
{
    ::testing::InitGoogleTest(&argc, argv, argc);
    return RUN_ALL_TESTS();
}
