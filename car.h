#pragma once
#include "vehicle.h"



class Car : public Vehicle
{
public:
	Car();
	Car(const char* make, const char* model, const char* color, int year, int mileage);
	Car(const Car& other);
	Car& operator=(const Car& other);
	~Car();
	void details() const;
};