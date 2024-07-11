#include <gtest/gtest.h>

// Basic Assertion demo
TEST(HelloTest, StringAssertion)
{
    EXPECT_STRNE("hello", "dave");
}

// Basic Assertion demo
TEST(HelloTest, NumberAssertion)
{
    EXPECT_EQ(7*6, 42);
}
