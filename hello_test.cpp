#include <gtest/gtest.h>
#include "solution.h"
using namespace std;

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}
TEST(HelloTest, BasicPals) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
    EXPECT_EQ(Solution::isPalindrome(121), true);
    EXPECT_EQ(Solution::isPalindrome(123), false);
}
