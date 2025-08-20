#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//FOR 循环的使用 计算阶乘
int main()
{
	
	long result = 1;
	cout << "0! = " << result << endl;
	for (int i = 1; i <= 10; i++)
	{
		result = result*i;
		cout << i << "! = " << result<<endl;
	};

}
