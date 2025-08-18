#include<iostream>
#include<cstring>
//int main()
//{
//	using namespace std;
//	cout << "please type the pocket number you want:";
//	int packet[3] = { 1,2,3 };
//	int cost[3] = {10,20,30};
//	int x = 0;
//	cin >> x;
//	cout << "the price is " << packet[x - 1] * cost[x - 1] << " yuan";
//	return 0;
//}

//数组中使用字符串
int main()
{
	using namespace std;
	const int size = 10;
	char name1[size];
	char name2[size]="yoyorm";
	cout << "my name is " << name2 << endl;
	cout << "What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has been stored.\n";
	cout << "your name has " << strlen(name1) << " letters.\n";
	cout << "your first letter is " << name1[0] << endl;
	cout << "your name is in an array that owns " << sizeof(name1) << " bytes.\n";
	name2[4] = '\0';
	cout << "my first 4 letters are " << name2;




	return 0;
}