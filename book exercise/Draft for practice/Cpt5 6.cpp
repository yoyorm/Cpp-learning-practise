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
//int main()
//{
//	char x;
//	x=cin.get();
//	while (x!=EOF)
//	{
//		cout << x;
//		x = cin.get();
//
//	}
//	cout << "DONE.";
//	return 0;
//}
//EOF ����������ı�־��������ctrl+z �س���ʾEOF

using namespace std;

//switch ���
//void speak()
//{
//	cout << "Enter 1-5 to choose:\n"
//		"1)great	2)normal\n"
//		"3)bad	4)terrible\n";
//}
//int main()
//{
//	int num = 0;
//	while (num != 5)
//	{
//		speak();
//		cin >> num;
//		switch (num)
//		{
//		case 1:cout << "great\n"; break;
//		case 2:cout << "normal\n"; break;
//		case 3:cout << "bad\n"; break;
//		case 4:cout << "terrible\n"; break;
//		case 5:break;
//		default:cout << "Its not a choice.\n";
//		}
//	}
//	cout << "Done...";
//	return 0;
//}



//cin �ж���������ƥ��
//int main()
//{
//	const int Max = 5;
//	int fish[Max] = {0,0,0,0,0};
//	int i =0;
//	int num = 0;
//	double total=0;
//	cout << "Fish #1: ";
//	while (i < Max && cin >> fish[i])
//	{
//		total += fish[i];
//		i++;
//		if (i <+ Max)
//		{
//			cout << "Fish #" << i + 1 << ": ";
//		}
//		cin.clear();
//		
//	}
//	cout << "fish:\t";
//	for (int n = 0; n < i; n++)
//	{
//		cout << "\t" << fish[n];
//	}
//	double ave = total / (i);
//	cout<<endl << "Ave = " << ave;
//	return 0;
//}




//��óɼ�������ƽ��ֵ������������ʹ�����Ҫ����������,��󽫳ɼ������һ��������text�ļ���
#include<fstream>
//int main()
//{
//	const int size = 5;
//	double grade[size];
//	int i = 0;
//	ofstream outFile;
//	outFile.open("temp.txt");
//	while (i < size)
//	{
//		
//		cout << "Grade #" << i + 1 << " :";
//		if (cin >> grade[i])
//		{
//			i++;
//		}
//		else
//		{
//			cout << "Please enter the right num!\n";
//			cin.clear();
//			cin.ignore(numeric_limits<streamsize>::max(),'\n');
//			//while(getchar()!='\n')
//			//{continue;}
//
//		}
//	}
//	cout << endl;
//	double total = 0;
//	for (int j = 0; j < size; j++)
//	{
//		cout << "Grade #" << j + 1 << " " << grade[j]<<endl;
//		outFile << "Grade #" << j + 1 << " " << grade[j] << endl;
//		total += grade[j];
//	}
//	cout << "Ave = " << total /i ;
//	outFile << "Ave = " << total / i;
//	outFile.close();
//	return 0;
//}





//��ȡ�û�ָ�����ļ����һ�ȡ����
int main()
{
	const int SIZE = 60;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter the name of the data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename<<" !"<<endl;
		cout << "Program terminating...\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum=0;
	int count=0;
	inFile >> value;
	while (inFile.good())
	{
		
	
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
	{
		cout << "End of file reached. \n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated for unknown reason.\n";
	}

	if (count == 0)
	{
		cout << "No data processed. ";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
	return 0;

}
