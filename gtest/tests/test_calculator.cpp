// tests/test_calculator.cpp
#include <gtest/gtest.h>
#include "Calculator.h"

TEST(CalculatorTest, Addition) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
}

TEST(CalculatorTest, Subtraction) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(3, 5), -2);
    EXPECT_EQ(calc.subtract(0, 0), 0);
}

TEST(CalculatorTest, Multiplication) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 3), 0);
}

TEST(CalculatorTest, Division) {
    Calculator calc;
    EXPECT_EQ(calc.divide(6, 3), 2);
    EXPECT_EQ(calc.divide(-6, 3), -2);

    // Test for division by zero
    EXPECT_THROW(calc.divide(6, 0), std::invalid_argument);
}

// Custom main function (usually not necessary)
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
