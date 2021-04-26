#include "Vehicle_C.h"

Vehicle_C::Vehicle_C()
{
	manu = "";
	dateBuilt = "";

}

Vehicle_C::Vehicle_C(string mn, string date)
{

	manu = mn;
	dateBuilt = date;

}

string Vehicle_C::Get_Manu() const
{
	return manu;
}

string Vehicle_C::Get_Built() const
{
	return dateBuilt;
}

void Vehicle_C::Set_Manu(string mn)
{
	manu = mn;
}

void Vehicle_C::Set_Built(string date)
{
	dateBuilt = date;
}

void Vehicle_C::Display_Info() const
{
	cout << "\nVehicle manufacturer is " << manu;
	cout << "\nnVehicle build date is " << dateBuilt;
}