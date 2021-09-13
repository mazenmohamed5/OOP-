#include<iostream>
using namespace std;
class person
{

public:
	string name;
	int age;
	int code;
	//user define constructor
	person(int y, int z)
	{
		age = y;
		code = z;

	}
	person()
	{

	}

	void printdata(string s, int x)
	{
		cout << "welcome " << s << endl;
		cout << " your age is " << x << endl;
	}
};
void main()
{
	person p1(20, 4200061);
	cout << p1.age << endl;
	person p;
	cout << "please enter your name " << endl;
	cin >> p.name;
	cout << "please enter your age" << endl;
	cin >> p.age;
	cout << "please enter your code" << endl;
	cin >> p.code;
	p.printdata(p.name, p.age);


}