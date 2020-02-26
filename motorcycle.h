#pragma once
#include "vehicle.h"


class Motorcycle : public Vehicle
{
private:
	char* type;

public:
	Motorcycle();
	Motorcycle(const char * make, const char * model, const char * color, int year, int mileage,const char* type);
	Motorcycle(const Motorcycle& other);
	Motorcycle& operator=(const Motorcycle& other);
	~Motorcycle();
	void setType(const char* type);
	char* getType() const;
	void details() const;
};