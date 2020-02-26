#include <iostream>
#include "vehicle.h"
#include "motorcycle.h"

using namespace std;

Motorcycle::Motorcycle() : Vehicle()
{
	type = nullptr;
}

Motorcycle::Motorcycle(const char * make, const char * model, const char * color, int year, int mileage,const char * type) : 
	Vehicle(make, model, color, year, mileage), type(nullptr)
{
	setType(type);
}

Motorcycle::Motorcycle(const Motorcycle & other) : Vehicle(other)
{
	setType(other.type);
}

Motorcycle & Motorcycle::operator=(const Motorcycle & other)
{
	if (this != &other)
	{
		Vehicle::operator=(other);
		setType(other.type);
	}
	return *this;
}

Motorcycle::~Motorcycle()
{
	delete[] type;
}

void Motorcycle::setType(const char * type)
{
	delete[] this->type;
	this->type = nullptr;
	if (type)
	{
		this->type = new char[strlen(type) + 1];
		strcpy_s(this->type, strlen(type) + 1, type);
	}
}

char * Motorcycle::getType() const
{
	return type;
}

void Motorcycle::details() const
{
	cout << "Motorcycle : " << endl;
	cout << getMake() << endl;
	cout << getModel() << endl;
	cout << getColor() << endl;
	cout << getYear() << endl;
	cout << getMileage() << endl;
	cout << getType() << endl;
}
