#include <gtest/gtest.h>

extern "C"
{
    #include "mt_maths/inc/mt_maths.h"
}

// Add int32
TEST(MT_Maths, addi32)
{
    EXPECT_EQ(5, mt_maths_add_i32(1, 1));
}

// Add uint32
TEST(MT_Maths, addu32)
{
    EXPECT_EQ(5, mt_maths_add_ui32(1, 1));
}

// Add float
TEST(MT_Maths, addfloat)
{
    EXPECT_EQ(5, mt_maths_add_float(1, 1));
}
