#include<iostream>
using namespace std;
//x,y初始100元
//x 单利10% ；y复利5%,看看多少年后y超越x

//int main()
//{
//	double rate1 = 0.1;
//	double rate2 = 0.05 ;
//	double x = 100, y = 100;
//	double x_s = rate1 * x;
//	int year = 0;
//	while (y <= x)
//	{
//		x += x_s;
//		y *= 1 + rate2;
//		year++;
//	}
//	cout << "after "<<year<<" years"<<" y>x!\n";
//	cout << "x = " << x << "\t" << "y = " << y;
//	return 0;
//}



//对每个月的销售额求和并且打印
//int main()
//{
//	const int size = 12;
//	int sales[12];
//	char month[12][5] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec" };
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter " << month[i] << " 's sales : ";
//		cin >> sales[i];
//	}
//	int result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		result += sales[i];
//	}
//	cout << "The whole sales = " << result;
//	return 0;
//}