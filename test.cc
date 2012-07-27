#include <gtest/gtest.h>
#include "roman.h"

class ToRoman : public testing::Test
{
public:
  Roman r;
};

TEST_F(ToRoman,ConvertOne)
{
  ASSERT_EQ("I",r.to(1));
}
TEST_F(ToRoman,ConvertTwo)
{
  ASSERT_EQ("II",r.to(2));
}
TEST_F(ToRoman,ConvertThree)
{
  ASSERT_EQ("III",r.to(3));
}
TEST_F(ToRoman,ConvertFour)
{
  ASSERT_EQ("IV",r.to(4));
}
TEST_F(ToRoman,ConvertFive)
{
  ASSERT_EQ("V",r.to(5));
}
TEST_F(ToRoman,ConvertSix)
{
  ASSERT_EQ("VI",r.to(6));
}
TEST_F(ToRoman,ConvertNine)
{
  ASSERT_EQ("IX",r.to(9));
}
TEST_F(ToRoman,ConvertTen)
{
  ASSERT_EQ("X",r.to(10));
}
TEST_F(ToRoman,ConvertForty)
{
  ASSERT_EQ("XL",r.to(40));
}
TEST_F(ToRoman,ConvertFifty)
{
  ASSERT_EQ("L",r.to(50));
}
TEST_F(ToRoman,ConvertNinety)
{
  ASSERT_EQ("XC",r.to(90));
}
TEST_F(ToRoman,ConvertHundred)
{
  ASSERT_EQ("C",r.to(100));
}
TEST_F(ToRoman,ConvertFiveHundred)
{
  ASSERT_EQ("D",r.to(500));
}
TEST_F(ToRoman,ConvertFourHundred)
{
  ASSERT_EQ("CD",r.to(400));
}
TEST_F(ToRoman,ConvertThousand)
{
  ASSERT_EQ("M",r.to(1000));
}
TEST_F(ToRoman,ConvertNineHundred)
{
  ASSERT_EQ("CM",r.to(900));
}
TEST_F(ToRoman,ConvertNineteenSixtyEight)
{
  ASSERT_EQ("MCMLXVIII",r.to(1968));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
