#include<iostream>
#include<fstream>
using namespace std;



//���󣬼̳к�����
//ofstream �̳��� ostream �����Կ��Դ���ofstream����
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
