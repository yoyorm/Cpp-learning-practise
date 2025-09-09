#include<iostream>
#include<fstream>
using namespace std;



//对象，继承和引用
//ofstream 继承于 ostream ，所以可以传入ofstream对象
void file_out(ostream& fl, int x, int y);
int main()
{
	ofstream file;
	const char * op = "output.txt";
	file.open(op);
	if (!file.is_open())
	{
		cout << "Error !";
		return(EXIT_FAILURE);
	}
	int x, y;
	cout << "Enter two number:\n";
	cin >> x;
	cin >> y;
	file_out(cout,x,y);
	file_out(file, x, y);
}

void file_out(ostream &fl ,int x,int y)
{
	fl<<"The sum is"<< x + y;
}
