#include "fraction.h"
#include <gtest/gtest.h>
namespace {
TEST(Fraction,Empty_constructor)
{
Fraction P1;
EXPECT_EQ(0,F1.isSimplest());
}
TEST(Fraction,Parameter_constructor)
{
Fraction P1(3,4);
Fraction P2(2,3);
Fraction P3;
P3=P1+P2;
EXPECT_EQ(0,P3.isSimplest());
}
TEST(Fraction,constructor)
{
Fraction P1(1,10);
EXPECT_EQ(0,P1.isSimplest());
}
}
