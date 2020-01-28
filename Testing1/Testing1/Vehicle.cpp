#include "Vehicle.h"

//using namespace std;

//vehicle class info


Vehicle::Vehicle()
{}

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