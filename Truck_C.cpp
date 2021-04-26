#include "Truck_C.h"

Truck_C::Truck_C() : Car_C()
{
	towingCapacity = 0;
}

Truck_C::Truck_C(int towCap, string mn, string date) : Car_C(numDoors, mn, date)
{
	towingCapacity = towCap;
}

int Truck_C::Get_Towing() const
{
	return towingCapacity;
}

void Truck_C::Set_Towing(int towCap)
{
	towingCapacity = towCap;
}

void Truck_C::Display_Info() const
{
	cout << "\nCar manufacturer is " << manu;
	cout << "\nCar build date is " << dateBuilt;
	cout << "\nThe number of doors are " << numDoors;
	cout << "\nThe towing capacity is " << towingCapacity;
}