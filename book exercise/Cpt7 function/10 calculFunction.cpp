#include<iostream>
using namespace std;

bool state = true;
const int SIZE = 2;
double add(double x, double y);
double multiply(double x, double y);
double calculate(double, double, double(*func[SIZE])(double, double), int);
int main()
{
	char tip [2][10] = { "ADD","MULTI" };
	double(*example[SIZE])(double, double);
	example[0] = add; example[1] = multiply;
	while(state == true)
	{
		int temp[2];
		cout << "\nEnter two number:\n";
		for (int i = 0; i < 2; i++)
		{
			if (cin >> temp[i]) {}
			else { state = false; }
			
		}
		if (state != true)
		{
			cout << "Error ! system off...";
			break;
		}
		for (int i = 0; i < SIZE; i++)
		{
			cout << tip[i] << "= \t";
			cout << calculate(temp[0],temp[1],example,i)<<endl;
		}
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}
double multiply(double x, double y)
{
	return x * y;
}

double calculate(double x,double y,double(*func[SIZE])(double,double),int choice)
{
	return(func[choice](x, y));
}