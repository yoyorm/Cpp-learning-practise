#include<iostream>
using namespace std;

//������c����ַ���
//���㵥������ĸ�ظ��Ĵ���
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
////ʹ��const�������޸����ݡ��ַ��������ǵ�ַ��������char*����
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




//����c����ַ����ĺ���
//������ת��Ϊ����char���͵�ָ�루�ǵ�ĩβ����\0��
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
	//Ϊָ�뿪���ڴ棬�������ָ�봫�ݷ��س�ȥ
	int i = 0;
	for (i; i < times; i++)
	{
		temp[i] = ch;
	}
	temp[times] = '\0';
	cout << endl;
	return(temp);
}