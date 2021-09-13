#include<iostream>
using namespace std;
class rectangle
{
	int h, w;
	int area;
public:

	//default
	rectangle()
	{

	}
	//destructor
	~rectangle()
	{

	}
	void setvalue(int x, int y)
	{
		if (x > 0 && y > 0)
		{
			h = x;
			w = y;
		}
	}

	void area(int m , int n)
	{
		area = m * n;
		cout << "the area = " << area << endl;
		//return m*n;
	}

};
void main()
{
	int x, y;
	cout << "please enter 2 numbers" << endl;
	cin >> x;
	cin >> y;
	rectangle r;
	r.setvalue(x, y);

}