#include <gtest/gtest.h>

extern "C"
{
    #include "marcus_maths/inc/marcus_maths.h"
}

// Add int32
TEST(marcus_maths, addi32)
{
    EXPECT_EQ(5, marcus_maths_add_i32(1, 1));
}

// Add uint32
TEST(marcus_maths, addu32)
{
    EXPECT_EQ(5, marcus_maths_add_ui32(1, 1));
}

// Add float
TEST(marcus_maths, addfloat)
{
    EXPECT_EQ(5, marcus_maths_add_float(1, 1));
}
