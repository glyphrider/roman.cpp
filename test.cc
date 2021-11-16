#include <gtest/gtest.h>
#include "roman.h"
#include <string>
#include <tuple>

//
// Provide the Roman class (class under test) as a member of the test suite class
class RomanSuite : public testing::TestWithParam<std::tuple<int, std::string>> {
public:
  Roman r;
};

//
// A parameterized test to evaluate the arabic to roman path
//
TEST_P(RomanSuite,ToRoman)
{
  int arabic;
  std::string roman;
  std::tie(arabic,roman) = GetParam();
  ASSERT_EQ(roman,r.to_s(arabic));
}

//
// A parameterized test to evaluate the roman to arabic path
//
TEST_P(RomanSuite,ToArabic)
{
  int arabic;
  std::string roman;
  std::tie(arabic,roman) = GetParam();
  ASSERT_EQ(arabic,r.to_i(roman));
}

//
// The *standard* 48 test cases from our javascript implementation
// This results in 96 tests (2x because of to and from)
//
INSTANTIATE_TEST_SUITE_P(StockTestCases,RomanSuite,testing::Values(
	std::tuple<int,std::string>(0,""), // this is a questionable test
	std::tuple<int,std::string>(1,"I"),
	std::tuple<int,std::string>(2, "II"),
	std::tuple<int,std::string>(3, "III"),
	std::tuple<int,std::string>(4, "IV"),
	std::tuple<int,std::string>(5, "V"),
	std::tuple<int,std::string>(6, "VI"),
	std::tuple<int,std::string>(7, "VII"),
	std::tuple<int,std::string>(8, "VIII"),
	std::tuple<int,std::string>(9, "IX"),
	std::tuple<int,std::string>(10, "X"),
	std::tuple<int,std::string>(11, "XI"),
	std::tuple<int,std::string>(14, "XIV"),
	std::tuple<int,std::string>(15, "XV"),
	std::tuple<int,std::string>(16, "XVI"),
	std::tuple<int,std::string>(19, "XIX"),
	std::tuple<int,std::string>(20, "XX"),
	std::tuple<int,std::string>(21, "XXI"),
	std::tuple<int,std::string>(39, "XXXIX"),
	std::tuple<int,std::string>(40, "XL"),
	std::tuple<int,std::string>(41, "XLI"),
	std::tuple<int,std::string>(42, "XLII"),
	std::tuple<int,std::string>(43, "XLIII"),
	std::tuple<int,std::string>(44, "XLIV"),
	std::tuple<int,std::string>(45, "XLV"),
	std::tuple<int,std::string>(46, "XLVI"),
	std::tuple<int,std::string>(47, "XLVII"),
	std::tuple<int,std::string>(48, "XLVIII"),
	std::tuple<int,std::string>(49, "XLIX"),
	std::tuple<int,std::string>(50, "L"),
	std::tuple<int,std::string>(89, "LXXXIX"),
	std::tuple<int,std::string>(90, "XC"),
	std::tuple<int,std::string>(91, "XCI"),
	std::tuple<int,std::string>(99, "XCIX"),
	std::tuple<int,std::string>(100, "C"),
	std::tuple<int,std::string>(101, "CI"),
	std::tuple<int,std::string>(200, "CC"),
	std::tuple<int,std::string>(399, "CCCXCIX"),
	std::tuple<int,std::string>(400, "CD"),
	std::tuple<int,std::string>(401, "CDI"),
	std::tuple<int,std::string>(499, "CDXCIX"),
	std::tuple<int,std::string>(500, "D"),
	std::tuple<int,std::string>(501, "DI"),
	std::tuple<int,std::string>(899, "DCCCXCIX"),
	std::tuple<int,std::string>(900, "CM"),
	std::tuple<int,std::string>(999, "CMXCIX"),
	std::tuple<int,std::string>(1000, "M"),
	std::tuple<int,std::string>(1001, "MI"),
	std::tuple<int,std::string>(1968, "MCMLXVIII")
));

TEST_F(RomanSuite, TestInvalidRomanString)
{
	try {
		r.to_i("IM");
		FAIL() << "Test case should throw exception";
	} catch(...) {
		// we don't really care what is thrown,
		// but we do want _something_ to be thrown.
		// if we start to care, then we change this test!
		// what should we do with invalid input???
	}
}

TEST_F(RomanSuite, TestInvalidArabicNumber)
{
	try {
		r.to_s(-1);
		FAIL() << "Test case should throw exception";
	} catch(...) {
		// we don't really care what is thrown,
		// but we do want _something_ to be thrown.
		// if we start to care, then we change this test!
		// what should we do with invalid input???
	}
}

//
// GoogleTest boilerplate launch
//
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
