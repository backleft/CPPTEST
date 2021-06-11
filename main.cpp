#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class TEST {
public:
	float add(float x, float y)
	{
		return x + y;
	}
	float sub(float x, float y)
	{
		return x - y;
	}
	float mul(float x, float y)
	{
		return x * y;
	}
	float divi(float x, float y)
	{
		return x / y;
	}
	float squared(float Chris)
	{
		return Chris * Chris;
	}

};

int main()
{
	float x = 0.0;
	float y = 0.0;
	char operation;
	TEST T;
	cout << "Enter an operation: ";
	cin >> operation;
	cout << endl;
	cout << "Enter first number: ";
	cin >> x;
	cout << endl;
	cout << "Enter second number: ";
	cin >> y;
	cout << endl;

	switch(operation)
	{
		case '+':
			cout << T.add(x,y) << endl;
			break;
		case '-':
			cout << T.sub(x,y) << endl;
			break;
		case '*':
			cout << T.mul(x,y) << endl;
			break;
		case '/':
			cout << T.divi(x,y) << endl;
			break;
		default:
			break;
	}

	return 0;



}
