#include<iostream>
using namespace std;
class mother
{
public:
	mother()

	{
		cout << "default constructor of mother" << endl;
	}
	mother(int a)
	{
		cout << "user define constructor of mother" << endl;
	}

};
class son : public mother
{
public:
	son(int a)
	{
		cout << "user define constructor of son" << endl;
	}
};

void main()
{
	son ahmed(5);
}