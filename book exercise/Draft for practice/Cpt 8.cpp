#include<iostream>
#include<fstream>
using namespace std;



//���󣬼̳к�����
//ofstream �̳��� ostream �����Կ��Դ���ofstream����
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





//ʹ�ú��������أ���ȡ�ַ��������ֵ�ǰ��λ
//char* cutch(const char ch[], int pos);
//int cutch(int num, int pos);
//const int Arsize = 50;
//int main()
//{
//	char sample[Arsize];
//	int cut_pos = 1;
//	int choice = 0;
//	int number;
//	cout << "Choose:\n1)number\t2)string\n";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:{
//		cout << "Enter a number:";
//		cin >> number;
//		cout << "Enter the number to cut:";
//		cin >> cut_pos;
//		if (cut_pos <= 0)
//			return -1;
//		cout << "\n" << cutch(number, cut_pos);
//		break;
//	}
//	case 2: {
//		cout << "Enter a sentence:";
//		cin >> sample;
//		cout << "Enter the number to cut:";
//		cin >> cut_pos;
//		if (cut_pos <= 0)
//			return -1;
//		char* result = cutch(sample, cut_pos);
//		cout << "\n" << cutch(sample, cut_pos);
//		delete[] result;
//		break;
//	}
//	}
//	
//
//	return 0;
//}
//
//char* cutch(const char ch[], int pos = 1)
//{
//	
//	char* tempp = new char[pos+1];
//	for (int i = 0; i < pos; i++)
//	{
//		tempp[i] = ch[i];
//	}
//	tempp[pos] = '\0';
//	
//	return tempp;
//}
//
//int cutch(int num, int pos = 1)
//{
//	int num2 = num;
//	int size = 1;
//	while ((num /= 10) >= 1)
//	{
//		size++;
//	}
//	if (pos > size)
//		return num2;
//	else
//	{
//		for (int i = size; i > pos; i--)
//		{
//			num2 /= 10;
//			
//		}
//		return num2;
//	}
//}


//����ģ��Ĵ���
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	
	int x = 12, y = 9;
	cout << "Origin: " << "\nx = " << x << "\ty = " << y << endl;
	Swap(x, y);
	cout << "After swap: " << "\nx = " << x << "\ty = " << y<<endl;
	double i = 5.5, j = 8.2;
	cout << "Origin: " << "\ni = " << i << "\tj = " << j << endl;
	Swap(i, j);
	cout << "After swap: " << "\ni = " << i << "\tj = " << j << endl;
}