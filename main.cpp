#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include "motorcycle.h"

using namespace std;

int main()
{
	Motorcycle motorcycle;
	motorcycle.setColor("green");
	motorcycle.setMake("honda");
	motorcycle.setMileage(1000);
	motorcycle.setModel("jazz");
	motorcycle.setType("scooter");
	motorcycle.setYear(2010);
	motorcycle.details();
	cout << endl;

	Truck truck("Mercedes", "Actros", "blue", 2012, 500000, 5);
	truck.details();
	cout << endl;
	
	Car car("BMW", "M5", "black", 2018, 100);
	car.details();
	cout << endl;

	system("pause");
	return 0;
}