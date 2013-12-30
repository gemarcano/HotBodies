#include <iostream>
#include <gtest/gtest.h>
#include <DoubleTextParser.hpp>
#include <DoubleTextParserFactory.hpp>
#include <memory>

TEST(CHECKDOUBLETEXTPARSER, TEST0)
{
	DoubleTextParserFactory factory("simpleData.txt");
	std::unique_ptr<Parser> parser(factory.createParser());
	std::unique_ptr<Matrix<int_fast32_t>> pResult = parser->parse();
	EXPECT_EQ(200, (*pResult)(0,0));
}

TEST(CHECKDOUBLETEXTPARSER, TEST1)
{
	DoubleTextParserFactory factory("simpleData2.txt");
	std::unique_ptr<Parser> parser(factory.createParser());
	std::unique_ptr<Matrix<int_fast32_t>> pResult = parser->parse();
	EXPECT_EQ(10000,(*pResult)(0,0));
}

int main (int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
