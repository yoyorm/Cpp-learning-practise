#include<iostream>
#include<array>
using namespace std;
struct Run { char name[15]; array<float, 3> grade; };

int main()
{
	Run example;
	cout << "欢迎进入100米成绩录入系统！\n";
	cout << "请输入你的名字：\n";
	cin.getline(example.name,15);
	cout << "请输入的跑步成绩1： \n";
	cin >> example.grade[0];
	cout << "请输入的跑步成绩2： \n";
	cin >> example.grade[1];
	cout << "请输入的跑步成绩3： \n";
	cin >> example.grade[2];

	cout << endl << endl;
	float* ave = new float;
	*ave = (example.grade[0] + example.grade[1] + example.grade[2]) / 3;
	cout <<"处理成功！"<< example.name << endl << "你的平均跑步成绩为：" << *ave << " 秒！";
	delete ave;
	return 0;
}