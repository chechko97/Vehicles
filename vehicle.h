#pragma once

class Vehicle
{
private:
	char* make;
	char* model;
	char* color;
	int year;
	int mileage;
	void erase();
	void copyMake(const char* make);
	void copyModel(const char* model);
	void copyColor(const char* color);

public:
	Vehicle();
	Vehicle(const char* make, const char* model, const char* color, int year, int mileage);
	Vehicle(const Vehicle& other);
	Vehicle& operator=(const Vehicle& other);
	virtual ~Vehicle();
	char* getMake() const;
	char* getModel() const;
	char* getColor() const;
	int getYear() const;
	int getMileage() const;
	void setMake(const char* make);
	void setModel(const char* model);
	void setColor(const char* color);
	void setYear(int year);
	void setMileage(int mileage);
	void virtual details() const = 0;
};