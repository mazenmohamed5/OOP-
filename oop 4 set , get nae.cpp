#include<iostream>
using namespace std;
class person
{
	int ssn;
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
	//default
	person()
	{

	}
	//distructor
	~person()
	{

	}
	void setssn(int i)
	{

		if (i > 100)
		{
			ssn = i;
		}
		else
		{
			cout<<"invalid num please try again"<<endl;
		}
	}
	int getssn()
	{
		return ssn;
	}

	void printdata(string s, int x)
	{
		cout << "welcome " << s << endl;
		cout << " your age is " << x << endl;
	}

};
void main()
{
	int s;
	cout << "please enter num" << endl;
	cin >> s;
	person p;
	p.setssn(s);
	cout << p.getssn() << endl;


}