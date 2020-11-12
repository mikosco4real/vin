#include <gtest/gtest.h>

int addAB(int A, int B);
int subtractAB(int A, int B);
int multiplyAB(int A, int B);
int divideAB(int A, int B);
int functionAB(int A, int B);

//Assert test for each function (3 tests pass, 2 tests fail)
TEST(TestCalculator,testAddition) {
	int result = addAB(5, 10);
	ASSERT_EQ(result, 15);
}

TEST(TestCalculator, testSubtraction) {
	int result = subtractAB(15, 10);
	ASSERT_EQ(result, 5);
}

TEST(TestCalculator, testMultiply) {
	int result = multiplyAB(2, 3);
	ASSERT_EQ(result, 6);
}

TEST(TestCalculator, testDivision) {
	int result = divideAB(10, 2);
	ASSERT_EQ(result, 3);
}

TEST(TestCalculator, testFunction) {
	int result = functionAB(2, 4);
	ASSERT_EQ(result, 67);
}