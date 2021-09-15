#include<iostream>
using namespace std;
class polygon
{
public:
	int h, w;

	void setvalues(int a, int b)
	{
		h = a;
		w = b;
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
public:
	int area()
	{
		return (h + w) / 2;
	}
};

void main()
{
	int x, y;
	cout << "enter 2 numbers" << endl;
	cin >> x >> y;
	rectangle rect;
	rect.setvalues(x, y);
	cout << "the area of rectangle" << endl;
	cout << rect.area()<<endl;
	triangle tr;
	tr.setvalues(x, y);
	cout << "the area of triangle" << endl;
	cout << tr.area() << endl;
}