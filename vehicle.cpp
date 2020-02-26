#include <iostream>
#include "vehicle.h"

using namespace std;


void Vehicle::erase()
{
	delete[] make;
	delete[] model;
	delete[] color;
}

void Vehicle::copyMake(const char * make)
{
	this->make = new char[strlen(make) + 1];
	strcpy_s(this->make, strlen(make) + 1, make);
}

void Vehicle::copyModel(const char * model)
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}

void Vehicle::copyColor(const char * color)
{
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

Vehicle::Vehicle()
{
	make = nullptr;
	model = nullptr;
	color = nullptr;
	year = 0;
	mileage = 0;
}

Vehicle::Vehicle(const char * make, const char * model, const char * color, int year, int mileage) : make(nullptr), model(nullptr), color(nullptr)
{
	setMake(make);
	setModel(model);
	setColor(color);
	setYear(year);
	setMileage(mileage);
}

Vehicle::Vehicle(const Vehicle & other)
{
	setMake(other.make);
	setModel(other.model);
	setColor(other.color);
	setYear(other.year);
	setMileage(other.mileage);
}

Vehicle & Vehicle::operator=(const Vehicle & other)
{
	if (this != &other)
	{
		setMake(other.make);
		setModel(other.model);
		setColor(other.color);
		setYear(other.year);
		setMileage(other.mileage);
	}
	return *this;
}

Vehicle::~Vehicle()
{
	erase();
}

char * Vehicle::getMake() const
{
	return make;
}

char * Vehicle::getModel() const
{
	return model;
}

char * Vehicle::getColor() const
{
	return color;
}

int Vehicle::getYear() const
{
	return year;
}

int Vehicle::getMileage() const
{
	return mileage;
}

void Vehicle::setMake(const char * make)
{
	delete[] this->make;
	this->make = nullptr;
	
	if (make)
	{
		copyMake(make);
	}
}

void Vehicle::setModel(const char * model)
{
	delete[] this->model;
	this->model = nullptr;
	if (model)
	{
		copyModel(model);
	}
}

void Vehicle::setColor(const char * color)
{
	delete[] this->color;
	this->color = nullptr;
	if (color)
	{
		copyColor(color);
	}	
}

void Vehicle::setYear(int year)
{
	this->year = year;
}

void Vehicle::setMileage(int mileage)
{
	this->mileage = mileage;
}


