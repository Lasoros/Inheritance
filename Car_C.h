#ifndef Car_C_H
#define Car_C_H

#include "Vehicle_C.h" //allows pulling from the parent class to car class

class Car_C : public Vehicle_C
{

protected:
	int numDoors;

public:

	Car_C();
	Car_C(int);
	Car_C(int, string, string);

	int Get_Doors() const;

	void Set_Doors(int);

	virtual void Display_Info() const;

};
#endif
