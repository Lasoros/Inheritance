/*
Thomas Wimer
4/25/2021
Inheritance
Langley
CIS.1202.NR1
*/

#include "Vehicle_C.h"
#include "Car_C.h"
#include "Truck_C.h"

void Display_Vehicles(Vehicle_C& obj);
void Vehicle(string manu, string dateBuilt);
void Car(int numDoors, string manu, string dateBuilt);
void Truck(int towCap, string mn, string date);

int main()
{

	Vehicle_C vehicle;
	Car_C car;
	Truck_C truck;

	string dateV, dateC, dateT;
	string date;
	string maunfacturer;
	int numD, towCap;

	
	cout << "\nVehicle Program" << endl << endl;

	cout << "\nVehicle";
	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	vehicle.Set_Manu(maunfacturer);

	cout << "\nEnter the year built . . .";
	getline(cin, date);

	vehicle.Set_Built(date);

	Display_Vehicles(vehicle);
	cout << endl << endl;

	cout << "\nCar";
	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	car.Set_Manu(maunfacturer);

	cout << "\nEnter the year built . . .";
	getline(cin, dateC);

	car.Set_Built(dateC);

	cout << "\nEnter the number of doors . . .";
	cin >> numD;

	car.Set_Doors(numD);

	Display_Vehicles(car);
	cout << endl << endl;

	cout << "\nTruck";
	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	truck.Set_Manu(maunfacturer);

	cout << "\nEnter the year built . . .";
	getline(cin, dateT);

	truck.Set_Built(dateT);

	cout << "\nEnter the towing capacity . . .";
	cin >> towCap;

	truck.Set_Towing(towCap);

	Display_Vehicles(truck);
	cout << endl << endl;


	cout << endl << endl;
	system("pause");
	return 0;
}

void Vehicle(string manu, string dateBuilt)
{

	Vehicle_C vehicle;
	string date;
	string maunfacturer;


	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	vehicle.Set_Manu(maunfacturer);

	cout << "\nVehicle";
	cout << "\nEnter the year built . . .";
	getline(cin, date);

	vehicle.Set_Built(date);
}

void Car(int numD, string mn, string date)
{
	Car_C car;
	string dateC;
	string maunfacturer;


	cout << "\nCar";
	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	car.Set_Manu(maunfacturer);

	cout << "\nEnter the year built . . .";
	getline(cin, dateC);
	
	car.Set_Built(dateC);

	cout << "\nEnter the number of doors . . .";
	cin >> numD;

	car.Set_Doors(numD);

}

void Truck(int towCap, string mn, string date)
{

	Truck_C truck;
	string dateT;
	string maunfacturer;

	cout << "\nTruck";
	cout << "\nEnter the maunfacturer . . .";
	getline(cin, maunfacturer);

	truck.Set_Manu(maunfacturer);

	cout << "\nEnter the year built . . .";
	getline(cin, dateT);

	truck.Set_Built(dateT);

	cout << "\nEnter the towing capacity . . .";
	cin >> towCap;

	truck.Set_Towing(towCap);

}

void Display_Vehicles(Vehicle_C& obj)
{
	obj.Display_Info();
}