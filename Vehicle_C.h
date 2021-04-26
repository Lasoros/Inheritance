#ifndef Vehicle_C_H
#define Vehicle_C_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Vehicle_C
{
protected:
	string manu;
	string dateBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, string);

	string Get_Manu() const;
	string Get_Built() const;

	void Set_Manu(string);
	void Set_Built(string);

	virtual void Display_Info() const;

};
#endif