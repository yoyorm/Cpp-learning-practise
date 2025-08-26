#include<iostream>
#include<cctype>
using namespace std;

//创建一个10元素的数组，遇到非数字输入停止，计算多少数字大于数组的平均数。
//int main()
//{
//	const int size = 10;
//	cout << "Enter your number in a line:\n";
//	double donation[size];
//	int i=0;
//	int count=0;
//	double total = 0;
//	while (i<10 && cin >> donation[i])
//	{
//		total += donation[i];
//		i++;
//	}
//	for (int j = 0; j < size; j++)
//	{
//		if (donation[j] > (total / i) )
//			count++;
//	}
//	cout << "Ave = " << total / i << endl;
//	cout << count << " numbers are bigger than Ave.";
//	return 0;
//}