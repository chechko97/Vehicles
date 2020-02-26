#include <iostream>
#include "vehicle.h"
#include "car.h"

using namespace std;

Car::Car() : Vehicle() {};

Car::Car(const char * make, const char * model, const char * color, int year, int mileage) : Vehicle(make, model, color, year, mileage) {};

Car::Car(const Car & other) : Vehicle(other) {};

Car & Car::operator=(const Car & other) 
{
	if (this != &other) 
	{
		Vehicle::operator=(other);
	}
	return *this;
}

Car::~Car() {};

void Car::details() const
{
	cout << "Car : " << endl;
	cout << getMake() << endl;
	cout << getModel() << endl;
	cout << getColor() << endl;
	cout << getYear() << endl;
	cout << getMileage() << endl;
}



