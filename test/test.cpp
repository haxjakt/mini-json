//
// Created by haxjakt on 21.01.2023.
//
#include <gtest/gtest.h>
#include <library.h>

TEST(test, test_1) {
    ASSERT_EQ(test(), 42);
}

TEST(test, test_2) {
    ASSERT_EQ(test_2(), 'E');
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}