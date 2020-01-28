#include "Vehicle.h"
#include <iostream>
//using namespace std;

//vehicle class info


Vehicle::Vehicle()
{
	Type = "Vehicle";
}

Vehicle::Vehicle(string name, string color)
{
	Name = name;
	Color = color;
	TravelTime = 999;
	Type = "Vehicle";
}

string Vehicle :: getName()
{
	return(Name);
}

void Vehicle::setName(string n)
{
	Name = n;
}

void Vehicle::AddDestination()
{
	TravelTime = TravelTime + 1 ;
}
void Vehicle::setColor(string c)
{
	Color = c;
}

string Vehicle:: getColor()
{
	return Color;
}

string Vehicle:: getType()
{
	return Type;
}
int Vehicle:: getTravel()
{
	return TravelTime;
}


Car::Car()
{
	Type = "Car " + Type;
}

Car::Car(string n, string c)
{
	Name = n;
	Color = c;
	TravelTime = 5;
	Type = "Car " + Type;
}

void Car:: AddDestination()
{
	TravelTime = TravelTime + TravelTime;
}




GasCar::GasCar()
{
	Type = "Gas " + Type;
}

GasCar::GasCar(string n, string c)
{
	Name = n;
	Color = c;
	TravelTime = 3;
	Type = "Gas " + Type;
}

void GasCar::AddDestination()
{
	TravelTime = TravelTime + TravelTime + 1;
}