#include<iostream>
#include<string>
#include<vector>
using namespace std;
// 设计一个car结构，存储名称和生产年份，new来动态分配空间用于存储；
//struct car { string name; int year; };
//int main()
//{
//	cout << "How many cars do your wish to catalog? \n";
//	int times;
//	cin>>times;
//	cin.get();
//	vector<car*> Temp(times);//创建一个指针数组用于存储得到的值
//	for (int i = 0; i < times; i++)
//	{
//		car* temp = new car;//创建临时指针，分配空间
//		cout << "Car #" << i + 1 << ":\n";
//		cout << "Please enter the make: ";
//		getline(cin,temp->name);
//		cout << "Please enter the year made: ";
//		cin >> temp->year;
//		Temp[i] = temp;
//		cin.get();
//	}
// //打印 得到的信息
//	cout << "Here is your collection\n";
//	for (int i = 0; i < times; i++)
//	{
//		cout << Temp[i]->year << "\t" << Temp[i]->name<<endl;
//	}
//	cout << endl;
// //删除手动分配的内存
//	for (int i=0;i<times;i++)
//	{
//		delete Temp[i];
//	}
//	return 0;
//}