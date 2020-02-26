#include <iostream>
#include "vehicle.h"
#include "truck.h"

using namespace std;

Truck::Truck() : Vehicle(), size(0) {};

Truck::Truck(const char * make, const char * model, const char * color, int year, int mileage, int size) : Vehicle(make, model, color, year, mileage), size(size) {};

Truck::Truck(const Truck & other) : Vehicle(other), size(other.size) {};

Truck & Truck::operator=(const Truck & other)
{
	if (this != &other)
	{
		Vehicle::operator=(other);
		this->size = other.size;
	}
	return *this;
}

Truck::~Truck() {};

void Truck::setSize(int size)
{
	this->size = size;
}

int Truck::getSize() const
{
	return size;
}

void Truck::details() const
{
	cout << "Truck : " << endl;
	cout << getMake() << endl;
	cout << getModel() << endl;
	cout << getColor() << endl;
	cout << getYear() << endl;
	cout << getMileage() << endl;
	cout << getSize() << endl;
}

