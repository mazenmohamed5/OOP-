#include<iostream> 
#include<string>
using namespace std;
class calculation
{
public:
	int num1, num2;
	int sum(int x, int y)
	{
		return x + y;
	}
	float sum(int x, int y, int z)
	{
		return x + y + z;
	}
	void sum(float x, int y, int z)
	{
		cout << x + y + z;
	}
};

void main()
{
	calculation cal;
	cout << "the sum = "<<cal.sum(5, 10, 20);
}