#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//for ѭ��ʹ�� ����׳�
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



//for �ۼ�
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


//for ����˳��
//int main()
//{
//	string name;
//	cout << "�����뵥��: ";
//	char temp;
//	getline(cin,name);
//	for (int i = 0, j = name.size()-1; i<j;i++, j--)
//	{
//		temp=name[i];
//		name[i] = name[j];
//		name[j] = temp;
//	};
//	cout << "���Ϊ�� " << name;
//	return 0;
//
//}



//while ѭ����ʹ��
//�����ӡ �ַ�����ASC��
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



//ʵ�ֵȴ�ָ��
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


//����ļ�β
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
//EOF ����������ı�־��������ctrl+z �س���ʾEOF
