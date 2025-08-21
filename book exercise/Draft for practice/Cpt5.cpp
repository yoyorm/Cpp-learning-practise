#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//for 循环使用 计算阶乘
//int main()
//{
//	
//	long result = 1;
//	cout << "0! = " << result << endl;
//	for (int i = 1; i <= 10; i++)
//	{
//		result = result*i;
//		cout << i << "! = " << result<<endl;
//	};
//
//}



//for 累加
//int main()
//{
//	int result=0;
//	for (int i=1; i <= 5;i++)
//	{
//		int x;
//		cout << "Enter value" << i << ": ";
//		cin >> x;
//		result += x;
//	};
//	result /= 5;
//	cout << "Ave = " << result;
//	return  0;
//
//}


//for 交换顺序
//int main()
//{
//	string name;
//	cout << "请输入单词: ";
//	char temp;
//	getline(cin,name);
//	for (int i = 0, j = name.size()-1; i<j;i++, j--)
//	{
//		temp=name[i];
//		name[i] = name[j];
//		name[j] = temp;
//	};
//	cout << "输出为： " << name;
//	return 0;
//
//}



//while 循环的使用
//逐个打印 字符串的ASC码
//int main()
//{
//	string name;
//	cout << "Enter your name: ";
//	getline(cin, name);
//	const int size = name.size();
//	int i = 1;
//	while (i < size+1)
//	{
//		cout << name[i-1] << " : " << (int)name[i-1]<<endl;
//		i++;
//	}
//}



//实现等待指令
//int main()
//{
//	#include<ctime>
//	int x;
//	cout << "Enter the time to delay: ";
//	cin >> x;
//	clock_t time = x * CLOCKS_PER_SEC;
//	cout << " Start! ";
//	clock_t start = clock();
//	int point = 0;
//	while (clock() - start <= time)
//	{
//	};
//	cout <<endl <<"done!";
//	return 0;
//
//
//	
//}


//检测文件尾
//int main()
//{
//	string text{};
//	char x;
//	cout << "Enter a word: ";
//	cin.get(x);
//	while (x != '#')
//	{
//		text += x;
//		cin.get(x);
//		
//	}
//	cout << text;
//}
int main()
{
	char x;
	x=cin.get();
	while (x!=EOF)
	{
		cout << x;
		x = cin.get();

	}
	cout << "DONE.";
	return 0;
}
//EOF 是输入结束的标志，输入中ctrl+z 回车表示EOF
