#include<iostream>;
using namespace std;
inline void printstring(const string& x);
int main()
{
	string temp;
	int times = 0;
	cout << "Enter your words: ";
	cin >> temp;
	cout << temp<<endl;
	cin.clear();
	if (cin >> times && times != 0)
	{
		for (int i = 1; i < times; i++)
		{
			printstring(temp);
		}
	}
}

void printstring(const string &x)
{
	cout << x<<endl;
}