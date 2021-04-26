#ifndef Truck_C_H
#define Truck_C_H

#include "Car_C.h"

class Truck_C : public Car_C
{

protected:
	int towingCapacity;

public:

	Truck_C();
	Truck_C(int, string, string);

	int Get_Towing() const;

	void Set_Towing(int);

	virtual void Display_Info() const;
};
#endif