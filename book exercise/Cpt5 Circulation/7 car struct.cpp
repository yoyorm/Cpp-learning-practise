#include<iostream>
#include<string>
#include<vector>
using namespace std;
// ���һ��car�ṹ���洢���ƺ�������ݣ�new����̬����ռ����ڴ洢��
struct car { string name; int year; };
int main()
{
	cout << "How many cars do your wish to catalog? \n";
	int times;
	cin>>times;
	cin.get();
	vector<car*> Temp(times);
	for (int i = 0; i < times; i++)
	{
		car* temp = new car;
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		getline(cin,temp->name);
		cout << "Please enter the year made: ";
		cin >> temp->year;
		Temp[i] = temp;
		cin.get();
	}
	cout << "Here is your collection\n";
	for (int i = 0; i < times; i++)
	{
		cout << Temp[i]->year << "\t" << Temp[i]->name<<endl;
	}
	cout << endl;
	for (int i=0;i<times;i++)
	{
		delete Temp[i];
	}
	return 0;
}