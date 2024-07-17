#include <gtest/gtest.h>

extern "C"
{
    #include "marcus_maths/inc/marcus_maths.h"
}

// Add int32
TEST(marcus_maths, addi32)
{
    EXPECT_EQ(5, marcus_maths_add_i32(1, -1));
}

// Add uint32
TEST(marcus_maths, addu32)
{
    EXPECT_EQ(5, marcus_maths_add_ui32(1, 2));
}

// Add float
TEST(marcus_maths, addfloat)
{
    EXPECT_EQ(5, marcus_maths_add_float(1, 3));
}

// Multiply int32
TEST(marcus_maths, multi32)
{
    EXPECT_EQ(5, marcus_maths_mult_i32(2, 1));
}

// Multiply uint32
TEST(marcus_maths, multu32)
{
    EXPECT_EQ(5, marcus_maths_mult_ui32(2, 2));
}

// Multiply float
TEST(marcus_maths, multfloat)
{
    EXPECT_EQ(5, marcus_maths_mult_float(2.0, -3.0));
}
