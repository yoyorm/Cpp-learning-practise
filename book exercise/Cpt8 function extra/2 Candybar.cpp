#include<iostream>
#include<cstring>
using namespace std;


//��дһ��candybar�ṹ������������Ա��������ֵȥ���ýṹ��Ա
//ͨ�����ú������ݽṹ���ı����ʾ����ֵ

struct Candybar
{
	char*name;
	double weight;
	int calory;
};

char namedf[20] = "default";
char namedf2[20] = "none";
void display(const Candybar&);
void set(Candybar& x, char* ch, double weight, int calory);
int main()
{
	Candybar temp;
	char name1[20];
	
	double weight1 = 2.85;
	int calory1 = 350;
	cout << "Enter the name,weight and calory:\n";
	cout << "Enter none when name is default.\n";
	cin>>name1;
	if (name1 == "")
	{
		display(temp);
		return 0;
	}
	if (cin >> weight1)
	{
		cin >> calory1;
	}
	else
	{
		return(EXIT_FAILURE);
	}
	set(temp, name1, weight1, calory1);
	display(temp);

	return 0;
}

void display(const Candybar& x)
{
	cout << "Name: \t" << x.name<<endl;
	cout << "weight: \t" << x.weight << endl;
	cout << "calory: \t" << x.calory << endl;
}
void set(Candybar& x, char* ch, double weight, int calory)
{
	if (strcmp(ch,namedf2)==0)
	{
		x.name = namedf;
	}
	else
	{
		x.name = ch;
	}
	
	x.weight = weight;
	x.calory = calory;
}