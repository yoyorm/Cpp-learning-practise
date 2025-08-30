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
char* buildstr(char ch, int times);
int main()
{
	char ch;
	cout << "Enter a char: ";
	cin >> ch;
	int times;
	cout << "Enter times: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << endl << ps;
	delete[] ps;
	ps = buildstr('+', times/2);
	cout << ps << "-DONE-" << ps;
	delete[] ps;
	return 0;
}

char* buildstr(char ch,int times)
{
	char* temp = new char[times + 1];
	//为指针开辟内存，方便后续指针传递返回出去
	int i = 0;
	for (i; i < times; i++)
	{
		temp[i] = ch;
	}
	temp[times] = '\0';
	cout << endl;
	return(temp);
}