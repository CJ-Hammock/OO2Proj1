#include "pch.h"

#include "../Testing1/ChangeNum.cpp"


TEST(ChangeNumTest, DoublePositive) {
	ASSERT_EQ(2, DoubleNum(1));
	ASSERT_EQ(8, DoubleNum(4));
	ASSERT_EQ(6, DoubleNum(3));
	ASSERT_EQ(74, DoubleNum(37));
}

TEST(ChangeNumTest, DoubleNegative) {
	ASSERT_EQ(-2, DoubleNum(-1));
	ASSERT_EQ(-8, DoubleNum(-4));
	ASSERT_EQ(-6, DoubleNum(-3));
	ASSERT_EQ(-74, DoubleNum(-37));
}

TEST(ChangeNumTest, IncrementUp) {
	ASSERT_EQ(1, IncrementUp(0));
	ASSERT_EQ(-22, IncrementUp(-23));
	ASSERT_EQ(0, IncrementUp(-1));
	ASSERT_EQ(688, IncrementUp(687));
}

TEST(ChangeNumTest, DecrementDown) {
	ASSERT_EQ(-1, DecrementDown(0));
	ASSERT_EQ(5, DecrementDown(6));
	ASSERT_EQ(0, DecrementDown(1));
	ASSERT_EQ(-995, DecrementDown(-994));
}

TEST(ChangeNumTest, Product) {
	ASSERT_EQ(0, Product(0,15));
	ASSERT_EQ(12, Product(4,3));
	ASSERT_EQ(-8, Product(-8,1));
	ASSERT_EQ(-36, Product(6,-6));
	ASSERT_EQ(15, Product(-3, -5));
}

TEST(ChangeNumTest, Sum) {
	ASSERT_EQ(0, Sum(0,0));
	ASSERT_EQ(59, Sum(8,51));
	ASSERT_EQ(37, Sum(-3,40));
	ASSERT_EQ(-68, Sum(8,-76));
	ASSERT_EQ(-5, Sum(-2, -3));
	ASSERT_EQ(-3, Sum(-3, 0));
}