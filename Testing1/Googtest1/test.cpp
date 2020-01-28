#include "pch.h"

#include "../Testing1/ChangeNum.cpp"
#include "../Testing1/Vehicle.cpp"

TEST(BuildVehicleTest, GetVehicleInit) {
	string testN = "veh1";
	string testC = "brown";

	Vehicle V(testN, testC);
	ASSERT_EQ(testN, V.getName());
	ASSERT_EQ(testC, V.getColor()); 
	ASSERT_EQ("Vehicle", V.getType());
	ASSERT_EQ(999, V.getTravel());
	V.AddDestination();
	ASSERT_EQ(1000, V.getTravel());

}

TEST(BuildCarTest, GetCarInit) {
	string testN = "car1";
	string testC = "red";

	Car C1(testN, testC);
	ASSERT_EQ(testN, C1.getName());
	ASSERT_EQ(testC, C1.getColor());
	ASSERT_EQ("Car Vehicle", C1.getType());
	ASSERT_EQ(5, C1.getTravel());
	C1.AddDestination();
	ASSERT_EQ(10, C1.getTravel());

}

TEST(BuildGasCarTest, GetGasCar) {
	string testN = "car1";
	string testC = "red";

	GasCar GC1(testN, testC);
	ASSERT_EQ(testN, GC1.getName());
	ASSERT_EQ(testC, GC1.getColor());
	ASSERT_EQ("Gas Car Vehicle", GC1.getType());
	ASSERT_EQ(3, GC1.getTravel());
	GC1.AddDestination();
	ASSERT_EQ(7, GC1.getTravel());
}

TEST(BuildElectricCarTest, GetElectricCar) {
	string testN = "car3";
	string testC = "purple";

	ElectricCar EC1(testN, testC);
	ASSERT_EQ(testN, EC1.getName());
	ASSERT_EQ(testC, EC1.getColor());
	ASSERT_EQ("Electric Car Vehicle", EC1.getType());
	ASSERT_EQ(4, EC1.getTravel());
	EC1.AddDestination();
	ASSERT_EQ(8, EC1.getTravel());
	EC1.AddDestination();
	ASSERT_EQ(16, EC1.getTravel());
	EC1.AddDestination();
	ASSERT_EQ(37, EC1.getTravel());
}

TEST(BuildBoatTest, GetBoatInit) {
	string testN = "Maria";
	string testC = "Black";

	Boat B1(testN, testC, 10);

	ASSERT_EQ("S.S. Maria", B1.getName());
	ASSERT_EQ(testC, B1.getColor());
	ASSERT_EQ("Boat Vehicle", B1.getType());
	ASSERT_EQ(8, B1.getTravel());
	B1.AddDestination();
	ASSERT_EQ(16, B1.getTravel());
	B1.AddDestination();
	ASSERT_EQ(24, B1.getTravel());
	
}

TEST(BuildBoatTest, ChangeBoatPassengers) {
	string testN = "Maria";
	string testC = "Black";
	int pass = 10;

	Boat B2(testN, testC, pass);

	ASSERT_EQ(pass, B2.getPassengers());
	B2.addPassengers(5);
	ASSERT_EQ(15, B2.getPassengers());
	B2.removePassengers(3);
	ASSERT_EQ(12, B2.getPassengers());
	B2.removePassengers(16);
	ASSERT_EQ(12, B2.getPassengers());

}








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