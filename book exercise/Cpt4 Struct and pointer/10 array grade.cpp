#include<iostream>
#include<array>
using namespace std;
struct Run { char name[15]; array<float, 3> grade; };

int main()
{
	Run example;
	cout << "��ӭ����100�׳ɼ�¼��ϵͳ��\n";
	cout << "������������֣�\n";
	cin.getline(example.name,15);
	cout << "��������ܲ��ɼ�1�� \n";
	cin >> example.grade[0];
	cout << "��������ܲ��ɼ�2�� \n";
	cin >> example.grade[1];
	cout << "��������ܲ��ɼ�3�� \n";
	cin >> example.grade[2];

	cout << endl << endl;
	float* ave = new float;
	*ave = (example.grade[0] + example.grade[1] + example.grade[2]) / 3;
	cout <<"����ɹ���"<< example.name << endl << "���ƽ���ܲ��ɼ�Ϊ��" << *ave << " �룡";
	delete ave;
	return 0;
}