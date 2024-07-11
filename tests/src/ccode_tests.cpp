#include <gtest/gtest.h>

extern "C"
{
    #include "test_me.h"
}

// Return Zero Test
TEST(TestMe_Tests, ReturnZero)
{
    EXPECT_EQ(0, ret_zero());
}

// Return One Test
TEST(TestMe_Tests, ReturnOne)
{
    EXPECT_EQ(1, ret_one());
}

// Return Int Test
TEST(TestMe_Tests, ReturnInt)
{
    int value = 39;
    EXPECT_EQ(value, ret_int(value));
}
