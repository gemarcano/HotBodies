#include <iostream>
#include <gtest/gtest.h>
#include <DoubleTextParser.hpp>
#include <memory>

TEST(CHECKDOUBLETEXTPARSER, TEST0)
{
	DoubleTextParser parser("simpleData.txt");
	std::unique_ptr<Matrix<int_fast32_t>> pResult = parser.parse();
	EXPECT_EQ((*pResult)(0,0),200);
}

int main (int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
