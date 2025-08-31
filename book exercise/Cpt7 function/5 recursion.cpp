#include<iostream>
using namespace std;

//定义一个递归函数，返回用户输出参数的阶乘
int multiply(int x, int add);

int main()
{
	cout << "Enter a int number( >=0 ): ";
	int num;
	int result = 0;
	while(cin >> num && num>=0)
	{
		int total=1;
		result = multiply(num,total);
		
		cout << num << "! = " << result<<endl<<endl;
	}
	
}

int multiply(int x,int add)
{
	if(x>1)
	{
		add *= x;
		multiply(x - 1,add);
	}
	else
	{
		return(add);
	}
}