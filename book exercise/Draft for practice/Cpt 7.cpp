#include<iostream>
using namespace std;

//函数与c风格字符串
//计算单词中字母重复的次数
//unsigned int c_in_str(const char* str, char ch);
//int main()
//{
//	char mmm[15] = "minimum";
//	const  char* wail = "ululate";
//	unsigned int ms= c_in_str(mmm, 'm');
//	cout << "There are " << ms << " m in the minimum";
//	return 0;
//}
//
//unsigned int c_in_str(const char* str, char ch)
////使用const来避免修改数据。字符串本质是地址，所以用char*类型
//{
//	unsigned int count = 0;
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			count++;
//		}
//		str++;
//	}
//	return(count);
//}




//返回c风格字符串的函数
//将问题转化为返回char类型的指针（记得末尾加上\0）
//char* buildstr(char ch, int times);
//int main()
//{
//	char ch;
//	cout << "Enter a char: ";
//	cin >> ch;
//	int times;
//	cout << "Enter times: ";
//	cin >> times;
//	char* ps = buildstr(ch, times);
//	cout << endl << ps;
//	delete[] ps;
//	ps = buildstr('+', times/2);
//	cout << ps << "-DONE-" << ps;
//	delete[] ps;
//	return 0;
//}
//
//char* buildstr(char ch,int times)
//{
//	char* temp = new char[times + 1];
//	//为指针开辟内存，方便后续指针传递返回出去
//	int i = 0;
//	for (i; i < times; i++)
//	{
//		temp[i] = ch;
//	}
//	temp[times] = '\0';
//	cout << endl;
//	return(temp);
//}




//倒计时
//void countdown(int n);
//int main()
//{
//	countdown(4);
//	return 0;
//}
//void countdown(int n)
//{
//	cout << "count down...." << n << endl;
//	if (n > 0)
//	{
//		n--;
//		countdown(n);
//		cout << n << endl;
//	}
//}




//输出图像：如用递归
//|                                                               |
//|                               |                               |
//|               |               |               |               |
//|       |       |       |       |       |       |       |       |
//|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
//| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

//void subdivide(char ch[], int first, int end, int times);
//const int len = 66;
//const int times = 6;
//int main()
//{
//	char ruler[len];
//	ruler[len - 1] = '\0';
//	ruler[0] = ruler[len - 2] = '|';
//	
//
//	for (int i = 1; i < len - 2; i++)
//	{
//		ruler[i] = ' ';
//	}
//	cout << ruler<<endl;
//	for (int i=1; i <= times; i++)
//	{
//		subdivide(ruler, 0, len - 2,i);
//		cout << ruler<<endl;
//		for (int k = 1; k < len - 2; k++)
//		{
//			ruler[k] = ' ';
//		}
//	}
//	return 0;
//}
//
//void subdivide(char ch[],int first,int end,int times)
//{
//	if (times == 0)
//		return;
//	int middle = (first + end) / 2;
//	ch[middle] = '|';
//	subdivide(ch, first, middle,times-1);
//	subdivide(ch, middle, end,times-1);	
//}





//使用函数指针，可以在函数形参中加入函数指针，从而在函数中使用其他函数
void estimate(int x, double(*pf)(int));
double betsy(int x);
double pam(int x);
int main()
{
	int code;
	cout << "How many line of code do you need?\n";
	cin >> code;
	cout << "Here' Betsy's estimate:\n";
	estimate(code, betsy);
	cout << "Here' Pam's estimate:\n";
	estimate(code, pam);
	return 0;
}

double betsy(int x)
{
	return x * 0.05;
}
double pam(int x)
{
	return x * 0.03+0.0004*x*x;
}

void estimate(int x,double(*pf)(int))
{
	cout << x << "lines of code will take ";
	cout << (*pf)(x) << " hours.\n";
}