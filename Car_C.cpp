#include "Car_C.h"

Car_C::Car_C() :Vehicle_C()
{
	numDoors = 0; //dont think I need this at all just following the code done in class, Used to keep track of static const
}

Car_C::Car_C(int numD) : Vehicle_C()
{
	numDoors = numD;
}

Car_C::Car_C(int numD, string mn, string date) : Vehicle_C(mn, date)
{
	numDoors = numD;
}

int Car_C::Get_Doors() const
{
	return numDoors;
}

void Car_C::Display_Info() const
{
	cout << "\nCar manufacturer is " << manu;
	cout << "\nCar build date is " << dateBuilt;
	cout << "\nThe number of doors are " << numDoors;

}