#include<iostream>
#include<string>
using namespace std;
//polymorphism
// to achieve polymorphism must have a pointer and virtual in the function
class polygon
{
public:
	int h, w;
	void setvalues(int x, int y)
	{
		h = x;
		w = y;
	}
	virtual int area()
	{
		return 0;
	}
};
class rectangle : public polygon
{
public:
	int area()
	{
		return h * w;
	}
};
void main()
{
	rectangle rect;
	polygon *p1;
	p1 = &rect;
	p1->setvalues(5, 5);
	cout << "the area = ";
	cout << p1->area(); //25
}
