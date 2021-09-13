#include<iostream>
using namespace std;
class person
{

public:
	string name;
	int age;
	int code;


	void printdata(string s,int x)
	{
		cout << "welcome " << s << endl;
			cout<< " your age is " << x << endl;
	}
};
void main()
{
	person p;
	cout << "please enter your name " << endl;
	cin >> p.name;
	cout << "please enter your age" << endl;
	cin >> p.age;
	cout << "please enter your code" << endl;
	cin >> p.code;

	p.printdata(p.name, p.age);
	cout << "your name is " << p.name << endl;
	cout << "your age is " << p.age << endl;
	cout << "your code is " << p.code << endl;
	

}