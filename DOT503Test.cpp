#include <gtest/gtest.h>

int addAB(int A, int B);
int subtractAB(int A, int B);
int multiplyAB(int A, int B);
int divideAB(int A, int B);
int functionAB(int A, int B);

TEST(calculator,testAddition) {
	int result = addAB(5, 10);
	ASSERT_EQ(result, 15);
}

TEST(calculator, testSubtraction) {
	int result = subtractAB(15, 10);
	ASSERT_EQ(result, 5);
}

TEST(calculator, testMultiply) {
	int result = multiplyAB(2, 3);
	ASSERT_EQ(result, 6);
}

TEST(calculator, testDivision) {
	int result = divideAB(10, 2);
	ASSERT_EQ(result, 3);
}

TEST(calculator, testFunction) {
	int result = functionAB(2, 4);
	ASSERT_EQ(result, 67);
}