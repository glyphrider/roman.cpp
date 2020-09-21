#include <gtest/gtest.h>
#include "roman.h"

class ToRoman : public testing::Test
{
public:
  Roman r;
};

class FromRoman : public testing::Test
{
public:
  Roman r;
};


TEST_F(ToRoman,Convert1)
{
	ASSERT_EQ("I",r.to_s(1));
}

TEST_F(ToRoman,Convert2)
{
	ASSERT_EQ("II",r.to_s(2));
}

TEST_F(ToRoman,Convert3)
{
	ASSERT_EQ("III",r.to_s(3));
}

TEST_F(ToRoman,Convert4)
{
	ASSERT_EQ("IV",r.to_s(4));
}

TEST_F(ToRoman,Convert5)
{
	ASSERT_EQ("V",r.to_s(5));
}

TEST_F(ToRoman,Convert6)
{
	ASSERT_EQ("VI",r.to_s(6));
}

TEST_F(ToRoman,Convert7)
{
	ASSERT_EQ("VII",r.to_s(7));
}

TEST_F(ToRoman,Convert8)
{
	ASSERT_EQ("VIII",r.to_s(8));
}

TEST_F(ToRoman,Convert9)
{
	ASSERT_EQ("IX",r.to_s(9));
}

TEST_F(ToRoman,Convert10)
{
	ASSERT_EQ("X",r.to_s(10));
}

TEST_F(ToRoman,Convert11)
{
	ASSERT_EQ("XI",r.to_s(11));
}

TEST_F(ToRoman,Convert14)
{
	ASSERT_EQ("XIV",r.to_s(14));
}

TEST_F(ToRoman,Convert15)
{
	ASSERT_EQ("XV",r.to_s(15));
}

TEST_F(ToRoman,Convert16)
{
	ASSERT_EQ("XVI",r.to_s(16));
}

TEST_F(ToRoman,Convert19)
{
	ASSERT_EQ("XIX",r.to_s(19));
}

TEST_F(ToRoman,Convert20)
{
	ASSERT_EQ("XX",r.to_s(20));
}

TEST_F(ToRoman,Convert21)
{
	ASSERT_EQ("XXI",r.to_s(21));
}

TEST_F(ToRoman,Convert39)
{
	ASSERT_EQ("XXXIX",r.to_s(39));
}

TEST_F(ToRoman,Convert40)
{
	ASSERT_EQ("XL",r.to_s(40));
}

TEST_F(ToRoman,Convert41)
{
	ASSERT_EQ("XLI",r.to_s(41));
}

TEST_F(ToRoman,Convert42)
{
	ASSERT_EQ("XLII",r.to_s(42));
}

TEST_F(ToRoman,Convert43)
{
	ASSERT_EQ("XLIII",r.to_s(43));
}

TEST_F(ToRoman,Convert44)
{
	ASSERT_EQ("XLIV",r.to_s(44));
}

TEST_F(ToRoman,Convert45)
{
	ASSERT_EQ("XLV",r.to_s(45));
}

TEST_F(ToRoman,Convert46)
{
	ASSERT_EQ("XLVI",r.to_s(46));
}

TEST_F(ToRoman,Convert47)
{
	ASSERT_EQ("XLVII",r.to_s(47));
}

TEST_F(ToRoman,Convert48)
{
	ASSERT_EQ("XLVIII",r.to_s(48));
}

TEST_F(ToRoman,Convert49)
{
	ASSERT_EQ("XLIX",r.to_s(49));
}

TEST_F(ToRoman,Convert50)
{
	ASSERT_EQ("L",r.to_s(50));
}

TEST_F(ToRoman,Convert89)
{
	ASSERT_EQ("LXXXIX",r.to_s(89));
}

TEST_F(ToRoman,Convert90)
{
	ASSERT_EQ("XC",r.to_s(90));
}

TEST_F(ToRoman,Convert91)
{
	ASSERT_EQ("XCI",r.to_s(91));
}

TEST_F(ToRoman,Convert99)
{
	ASSERT_EQ("XCIX",r.to_s(99));
}

TEST_F(ToRoman,Convert100)
{
	ASSERT_EQ("C",r.to_s(100));
}

TEST_F(ToRoman,Convert101)
{
	ASSERT_EQ("CI",r.to_s(101));
}

TEST_F(ToRoman,Convert200)
{
	ASSERT_EQ("CC",r.to_s(200));
}

TEST_F(ToRoman,Convert399)
{
	ASSERT_EQ("CCCXCIX",r.to_s(399));
}

TEST_F(ToRoman,Convert400)
{
	ASSERT_EQ("CD",r.to_s(400));
}

TEST_F(ToRoman,Convert401)
{
	ASSERT_EQ("CDI",r.to_s(401));
}

TEST_F(ToRoman,Convert499)
{
	ASSERT_EQ("CDXCIX",r.to_s(499));
}

TEST_F(ToRoman,Convert500)
{
	ASSERT_EQ("D",r.to_s(500));
}

TEST_F(ToRoman,Convert501)
{
	ASSERT_EQ("DI",r.to_s(501));
}

TEST_F(ToRoman,Convert899)
{
	ASSERT_EQ("DCCCXCIX",r.to_s(899));
}

TEST_F(ToRoman,Convert900)
{
	ASSERT_EQ("CM",r.to_s(900));
}

TEST_F(ToRoman,Convert999)
{
	ASSERT_EQ("CMXCIX",r.to_s(999));
}

TEST_F(ToRoman,Convert1000)
{
	ASSERT_EQ("M",r.to_s(1000));
}

TEST_F(ToRoman,Convert1001)
{
	ASSERT_EQ("MI",r.to_s(1001));
}

TEST_F(ToRoman,Convert1968)
{
	ASSERT_EQ("MCMLXVIII",r.to_s(1968));
}


TEST_F(FromRoman,Convert1)
{
	ASSERT_EQ(1,r.to_i("I"));
}

TEST_F(FromRoman,Convert2)
{
	ASSERT_EQ(2,r.to_i("II"));
}

TEST_F(FromRoman,Convert3)
{
	ASSERT_EQ(3,r.to_i("III"));
}

TEST_F(FromRoman,Convert4)
{
	ASSERT_EQ(4,r.to_i("IV"));
}

TEST_F(FromRoman,Convert5)
{
	ASSERT_EQ(5,r.to_i("V"));
}

TEST_F(FromRoman,Convert6)
{
	ASSERT_EQ(6,r.to_i("VI"));
}

TEST_F(FromRoman,Convert7)
{
	ASSERT_EQ(7,r.to_i("VII"));
}

TEST_F(FromRoman,Convert8)
{
	ASSERT_EQ(8,r.to_i("VIII"));
}

TEST_F(FromRoman,Convert9)
{
	ASSERT_EQ(9,r.to_i("IX"));
}

TEST_F(FromRoman,Convert10)
{
	ASSERT_EQ(10,r.to_i("X"));
}

TEST_F(FromRoman,Convert11)
{
	ASSERT_EQ(11,r.to_i("XI"));
}

TEST_F(FromRoman,Convert14)
{
	ASSERT_EQ(14,r.to_i("XIV"));
}

TEST_F(FromRoman,Convert15)
{
	ASSERT_EQ(15,r.to_i("XV"));
}

TEST_F(FromRoman,Convert16)
{
	ASSERT_EQ(16,r.to_i("XVI"));
}

TEST_F(FromRoman,Convert19)
{
	ASSERT_EQ(19,r.to_i("XIX"));
}

TEST_F(FromRoman,Convert20)
{
	ASSERT_EQ(20,r.to_i("XX"));
}

TEST_F(FromRoman,Convert21)
{
	ASSERT_EQ(21,r.to_i("XXI"));
}

TEST_F(FromRoman,Convert39)
{
	ASSERT_EQ(39,r.to_i("XXXIX"));
}

TEST_F(FromRoman,Convert40)
{
	ASSERT_EQ(40,r.to_i("XL"));
}

TEST_F(FromRoman,Convert41)
{
	ASSERT_EQ(41,r.to_i("XLI"));
}

TEST_F(FromRoman,Convert42)
{
	ASSERT_EQ(42,r.to_i("XLII"));
}

TEST_F(FromRoman,Convert43)
{
	ASSERT_EQ(43,r.to_i("XLIII"));
}

TEST_F(FromRoman,Convert44)
{
	ASSERT_EQ(44,r.to_i("XLIV"));
}

TEST_F(FromRoman,Convert45)
{
	ASSERT_EQ(45,r.to_i("XLV"));
}

TEST_F(FromRoman,Convert46)
{
	ASSERT_EQ(46,r.to_i("XLVI"));
}

TEST_F(FromRoman,Convert47)
{
	ASSERT_EQ(47,r.to_i("XLVII"));
}

TEST_F(FromRoman,Convert48)
{
	ASSERT_EQ(48,r.to_i("XLVIII"));
}

TEST_F(FromRoman,Convert49)
{
	ASSERT_EQ(49,r.to_i("XLIX"));
}

TEST_F(FromRoman,Convert50)
{
	ASSERT_EQ(50,r.to_i("L"));
}

TEST_F(FromRoman,Convert89)
{
	ASSERT_EQ(89,r.to_i("LXXXIX"));
}

TEST_F(FromRoman,Convert90)
{
	ASSERT_EQ(90,r.to_i("XC"));
}

TEST_F(FromRoman,Convert91)
{
	ASSERT_EQ(91,r.to_i("XCI"));
}

TEST_F(FromRoman,Convert99)
{
	ASSERT_EQ(99,r.to_i("XCIX"));
}

TEST_F(FromRoman,Convert100)
{
	ASSERT_EQ(100,r.to_i("C"));
}

TEST_F(FromRoman,Convert101)
{
	ASSERT_EQ(101,r.to_i("CI"));
}

TEST_F(FromRoman,Convert200)
{
	ASSERT_EQ(200,r.to_i("CC"));
}

TEST_F(FromRoman,Convert399)
{
	ASSERT_EQ(399,r.to_i("CCCXCIX"));
}

TEST_F(FromRoman,Convert400)
{
	ASSERT_EQ(400,r.to_i("CD"));
}

TEST_F(FromRoman,Convert401)
{
	ASSERT_EQ(401,r.to_i("CDI"));
}

TEST_F(FromRoman,Convert499)
{
	ASSERT_EQ(499,r.to_i("CDXCIX"));
}

TEST_F(FromRoman,Convert500)
{
	ASSERT_EQ(500,r.to_i("D"));
}

TEST_F(FromRoman,Convert501)
{
	ASSERT_EQ(501,r.to_i("DI"));
}

TEST_F(FromRoman,Convert899)
{
	ASSERT_EQ(899,r.to_i("DCCCXCIX"));
}

TEST_F(FromRoman,Convert900)
{
	ASSERT_EQ(900,r.to_i("CM"));
}

TEST_F(FromRoman,Convert999)
{
	ASSERT_EQ(999,r.to_i("CMXCIX"));
}

TEST_F(FromRoman,Convert1000)
{
	ASSERT_EQ(1000,r.to_i("M"));
}

TEST_F(FromRoman,Convert1001)
{
	ASSERT_EQ(1001,r.to_i("MI"));
}

TEST_F(FromRoman,Convert1968)
{
	ASSERT_EQ(1968,r.to_i("MCMLXVIII"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
