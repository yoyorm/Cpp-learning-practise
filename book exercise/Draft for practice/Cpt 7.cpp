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
//	//Ϊָ�뿪���ڴ棬�������ָ�봫�ݷ��س�ȥ
//	int i = 0;
//	for (i; i < times; i++)
//	{
//		temp[i] = ch;
//	}
//	temp[times] = '\0';
//	cout << endl;
//	return(temp);
//}




//����ʱ
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




//���ͼ�����õݹ�
//|                                                               |
//|                               |                               |
//|               |               |               |               |
//|       |       |       |       |       |       |       |       |
//|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
//| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void subdivide(char ch[], int first, int end, int times);
const int len = 66;
const int times = 6;
int main()
{
	char ruler[len];
	ruler[len - 1] = '\0';
	ruler[0] = ruler[len - 2] = '|';
	

	for (int i = 1; i < len - 2; i++)
	{
		ruler[i] = ' ';
	}
	cout << ruler<<endl;
	for (int i=1; i <= times; i++)
	{
		subdivide(ruler, 0, len - 2,i);
		cout << ruler<<endl;
		for (int k = 1; k < len - 2; k++)
		{
			ruler[k] = ' ';
		}
	}
	return 0;
}

void subdivide(char ch[],int first,int end,int times)
{
	if (times == 0)
		return;
	int middle = (first + end) / 2;
	ch[middle] = '|';
	subdivide(ch, first, middle,times-1);
	subdivide(ch, middle, end,times-1);	
}


