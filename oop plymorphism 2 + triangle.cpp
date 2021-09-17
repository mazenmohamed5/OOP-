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
class triangle : public polygon
{
	int area()
	{
		return (0.5*w)*h;
	}
};
void main()
{
	rectangle rect;
	triangle t;
	polygon* p1;
	p1 = &rect;
	p1->setvalues(5, 5);
	cout << "the area of rectangle = ";
	cout << p1->area() << endl; //25
	p1 = &t;
	p1->setvalues(5, 5);
	cout << "the area of triangle = ";
	cout << p1->area(); //12

}