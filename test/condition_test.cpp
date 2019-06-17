#include <gtest/gtest.h>

#include <iostream>

TEST(ConditionTest, iftest) {
    int a = 1;
    if (a > 0) {
        std::cout << true;
    }
}

TEST(ConditionTest, secondtest) {
    std::cout << "Second";
}

TEST(ConditionTest, initiliazer_if) {
    if (int a = 0; a < 10) {
        std::cout << "good";
    }
}