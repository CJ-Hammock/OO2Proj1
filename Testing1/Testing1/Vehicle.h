#include <string>

#pragma once
using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(string, string);

	//not overridden
	void setName(string);
	string getName();
	void setColor(string);
	string getColor();
	string getType();
	int getTravel();
	
	//gets overidden
	void AddDestination();


protected:
	string Name;
	int TravelTime;
	string Color;
	string Type ;

};

class Car : public Vehicle
{
public:
	//default constructor
	Car();

	Car(string, string);

	//gets overidden
	void AddDestination();

};

class GasCar : public Car
{
public:
	//default constructor
	GasCar();

	GasCar(string, string);

	//gets overidden
	void AddDestination();
};

class ElectricCar : public Car
{
public:
	//default constructor
	ElectricCar();

	ElectricCar(string, string);

	//gets overidden
	void AddDestination();
};


class Boat : public Vehicle
{
public:
	//default constructor
	Boat();

	//name, color, number passengers
	Boat(string, string, int);

	//gets overidden
	void AddDestination();

	//additional functions

	int getPassengers();
	void removePassengers(int);
	void addPassengers(int);

private:
	int Passengers;

};