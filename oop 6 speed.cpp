#include<iostream>
using namespace std;

class vehicle
{
public :
	int time;
	float distance;
	
	int speed(float a, int b)
	{
		return a /b;
	}
};
class metro : public vehicle
{
public  :
	int model;
};
class car : public vehicle
{
public :
	int numofpassengers;
};
void  main()
{
	int x, y;
	car ca;
	metro me;

	if (me.speed(20,5) > ca.speed(10, 5))
	{
		cout << "the metro is faster than car" << endl;
	}
	else
	{
		cout << "the car is faster than metro" << endl;
	}


}