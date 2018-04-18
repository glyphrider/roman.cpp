#include <gtest/gtest.h>
#include "roman.h"

class ToRoman : public testing::Test
{
public:
  Roman r;
};

TEST_F(ToRoman,ConvertOne)
{
  ASSERT_EQ("I",r.to_s(1));
}
TEST_F(ToRoman,ConvertTwo)
{
  ASSERT_EQ("II",r.to_s(2));
}
TEST_F(ToRoman,ConvertThree)
{
  ASSERT_EQ("III",r.to_s(3));
}
TEST_F(ToRoman,ConvertFour)
{
  ASSERT_EQ("IV",r.to_s(4));
}
TEST_F(ToRoman,ConvertFive)
{
  ASSERT_EQ("V",r.to_s(5));
}
TEST_F(ToRoman,ConvertSix)
{
  ASSERT_EQ("VI",r.to_s(6));
}
TEST_F(ToRoman,ConvertNine)
{
  ASSERT_EQ("IX",r.to_s(9));
}
TEST_F(ToRoman,ConvertTen)
{
  ASSERT_EQ("X",r.to_s(10));
}
TEST_F(ToRoman,ConvertForty)
{
  ASSERT_EQ("XL",r.to_s(40));
}
TEST_F(ToRoman,ConvertFifty)
{
  ASSERT_EQ("L",r.to_s(50));
}
TEST_F(ToRoman,ConvertNinety)
{
  ASSERT_EQ("XC",r.to_s(90));
}
TEST_F(ToRoman,ConvertHundred)
{
  ASSERT_EQ("C",r.to_s(100));
}
TEST_F(ToRoman,ConvertFiveHundred)
{
  ASSERT_EQ("D",r.to_s(500));
}
TEST_F(ToRoman,ConvertFourHundred)
{
  ASSERT_EQ("CD",r.to_s(400));
}
TEST_F(ToRoman,ConvertThousand)
{
  ASSERT_EQ("M",r.to_s(1000));
}
TEST_F(ToRoman,ConvertNineHundred)
{
  ASSERT_EQ("CM",r.to_s(900));
}
TEST_F(ToRoman,ConvertNineteenSixtyEight)
{
  ASSERT_EQ("MCMLXVIII",r.to_s(1968));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
