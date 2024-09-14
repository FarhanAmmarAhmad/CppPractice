#include <iostream>
using namespace std;

class Number
{
	public:
		int x;

	Number (int num) : x(num) {}

	Number operator+(const Number &numA)
	{
		return Number(this->x + numA.x);
	}
	Number operator-(const Number &numA)
	{
		return Number(this->x - numA.x);
	}
	Number operator/(const Number &numA)
	{
		return Number(this->x / numA.x);
	}
};

int main(int argc, char const **argv)
{
	Number objA(10);
	Number objB(3);

	Number objC = objA + objB;
	Number objD = objA - objB;
	Number objE = objA / objB;

	cout << "The value of objC is " << objC.x << endl;
	cout << "The value of objD is " << objD.x << endl;
	cout << "The value of objE is " << objE.x << endl;
	return 0;
}
