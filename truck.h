#pragma once
#include "vehicle.h"


class Truck : public Vehicle
{
private: 
	int size;

public:
	Truck();
	Truck(const char * make, const char * model, const char * color, int year, int mileage, int size);
	Truck(const Truck& other);
	Truck& operator=(const Truck& other);
	~Truck();
	void setSize(int size);
	int getSize() const;
	void details() const;
};