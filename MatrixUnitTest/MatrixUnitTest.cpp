// MatrixUnitTest.cpp : Defines the entry point for the console application.
//
#include "Matrix.h"
#include "gtest/gtest.h"

TEST(testMatrix, simpleTest) {
	Matrix A = Matrix(1, 2);
	EXPECT_EQ(1,A.numCols);
}

//int main(int ac, char*av[])
//{
//	testing::InitGoogleTest(&ac, av);
//	return RUN_ALL_TESTS();
//}

GTEST_API_ int main(int argc, char **argv) {
	printf("Running main() from gtest_main.cc\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
