#include<iostream>
#include<cctype>
using namespace std;


//遇到@字符停止输入，英文大小写互相转换
// 
//int main()
//{
//	char temp;
//	string content;
//	cout << "Enter a sentence:\n";
//	cin.get(temp);
//	while (temp != '@'&& temp!='\n')
//	{
//		content += temp;
//		cin.get(temp);
//	}
//	for (int i = 0; i < content.size(); i++)
//	{
//		if (islower(content[i]))
//		{
//			content[i] -= 32;
//		}
//		else if (isupper(content[i]))
//		{
//			content[i] += 32;
//		}
//	}
//	cout << content;
//	return 0;
//}
