#include<iostream>
using namespace std;
//Ҫ���û���������10���߶���ɼ���������ǰֹͣ��
//��һ����ʾ�ɼ��������ƽ���ɼ�����3�����麯�����������룬��ʾ�����

const int SIZE = 10;
int input(int array[], int size);
void display(int array[], int size);
void output(int array[], int size);


int main()
{
	int grade[SIZE];
	int count;
	count = input(grade, SIZE);
	display(grade, count);
	output(grade, count);
	return 0;
}

int input(int array[], int size)
{
	cout << "Enter your grade in a line within blank.\n";
	cout << "Or enter other char to end the system.\n";
	int count = 0;
	while (count<SIZE && cin >> array[count])
	{
		count++;
		
	}
	return (count);
}

void display(int array[], int count)
{
	cout << "Your grades are: ";
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << "\t";
	}

}

void output(int array[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout<<"\nThe ave = "<<total / size;
}