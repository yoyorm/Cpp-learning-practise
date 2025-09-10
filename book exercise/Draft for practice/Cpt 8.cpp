#include<iostream>
#include<fstream>
using namespace std;



//对象，继承和引用
//ofstream 继承于 ostream ，所以可以传入ofstream对象
//void file_out(ostream& fl, int x, int y);
//int main()
//{
//	ofstream file;
//	const char * op = "output.txt";
//	file.open(op);
//	if (!file.is_open())
//	{
//		cout << "Error !";
//		return(EXIT_FAILURE);
//	}
//	int x, y;
//	cout << "Enter two number:\n";
//	cin >> x;
//	cin >> y;
//	file_out(cout,x,y);
//	file_out(file, x, y);
//}
//
//void file_out(ostream &fl ,int x,int y)
//{
//	fl<<"The sum is"<< x + y;
//}



char* cutch(const char ch[], int pos);
const int Arsize = 50;
int main()
{
	char sample[Arsize];
	int cut_pos = 1;
	cout << "Enter a sentence:";
	cin >> sample;
	cout << "Enter the number to cut:";
	cin >> cut_pos;
	if (cut_pos <= 0)
		return -1;
	char* result;
	result=cutch(sample, cut_pos);
	cout << "\n" << result;
	delete[] result;

	return 0;
}

char* cutch(const char ch[], int pos = 1)
{
	
	char* tempp = new char[pos+1];
	for (int i = 0; i < pos; i++)
	{
		tempp[i] = ch[i];
	}
	tempp[pos] = '\0';
	
	return tempp;
}
