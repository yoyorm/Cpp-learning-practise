#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int size = 0;
	cout << "Enter a number: ";
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		cout << endl;
		for (int n = i; n < size; n++)
		{
			cout << ".";
		}
		for (int m=size-i;m<size;m++)
		{
			cout << "*";
		}
	}
	return 0;
}