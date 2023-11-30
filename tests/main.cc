#include <gtest/gtest.h>

#include "my_lib.h"

TEST(FactorialTest, FactorialsAreComputed)
{
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(10), 3628800);
}

TEST(PrinterTest, TestPrintHelloWorld)
{
    EXPECT_EQ(print_hello_world(), 1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
