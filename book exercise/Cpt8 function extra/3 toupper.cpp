#include<iostream>
#include<string>
using namespace std;

//ʹ�ö�������ã���Сд��ĸת��Ϊ��д
void upper(string& x);
int main()
{
	cout << "Enter a string (q to quit):";
	string input;
	getline(cin, input);
	
	while (input != "q")
	{
		upper(input);
		cout << "Enter a string (q to quit):";
		getline(cin, input);
	}
	return 0;
}
void upper(string & x)
{
	int size = x.size();
	for (int i = 0; i < size; i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] -= 32;
		}
	}
	cout << x<<endl;
}