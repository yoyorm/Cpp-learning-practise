#include<iostream>
#include<cstring>
#include<string>
using namespace std;
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
//int main()
//{
//	using namespace std;
//	const int size = 10;
//	char name1[size];
//	char name2[size]="yoyorm";
//	cout << "my name is " << name2 << endl;
//	cout << "What's your name?\n";
//	cin >> name1;
//	cout << "Well, " << name1 << ", your name has been stored.\n";
//	cout << "your name has " << strlen(name1) << " letters.\n";
//	cout << "your first letter is " << name1[0] << endl;
//	cout << "your name is in an array that owns " << sizeof(name1) << " bytes.\n";
//	name2[4] = '\0';
//	cout << "my first 4 letters are " << name2;
//
//
//
//
//	return 0;
//}


//使用cin.getline/get()
//cin 读取到空白字符后结束
//
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//	
//	cout << "Enter your name:\n";
//	cin.get(name,ArSize).get();
//	cout << "Enter your favorite dessert:\n";
//	cin.get(dessert,ArSize).get();
//	cout << dessert << "for you, " << name;
//
//	return 0;
//}

//
//int main()
//{
//	using namespace std;
//	int year = 0;
//	char name[20];
//	cout << "type your year:\n";
//	cin >> year;
//	cout << "type your name\n";
//	cin.getline(name, 20);
//	cout << "your name is: " << name << "\nyour year is: " << year;
//
//	return 0;
//}


//使用 string 类型
//int main()
//{
//	using namespace std;
//	cout << "打印两串字母，然后自动相加:\n";
//	/*char x[20];
//	char y[20];
//	cin >> x;
//	cin >> y;
//	char z[40];
//	strcat_s(x,y);
//	strcpy_s(z, x);
//	cout << z;*/
//
//	string str1, str2, str;
//	getline(cin, str1);
//	getline(cin, str2);
//	str = str1 + str2;
//	cout << str;
//	cout << endl << str.size();
//
//	return 0;
//}


//结构struct

//struct inflatable
//{
//	char name[20];
//	float volume = 0;
//	double price = 0;
//};
//结构的创建和使用
//int main()
//{
//	inflatable guest = { "jack",1.88,29.9 };
//	inflatable pal = { "kitty",3.12,32.99 };
//	cout << "Expand your guest list with " << guest.name;
//	cout << " and " << pal.name;
//	cout << endl << "you can have both for $" << guest.price + pal.price<<"!\n";
//
//	return 0;
//}



//结构数组的创建和使用
//int main() 
//{
//	inflatable guest[2] =
//	{
//		{"Bambi",0.5,21.99},
//		{"Godzilla",2000,565.99}
//	};
//	cout << "The guest " << guest[0].name << " and " << guest[1].name;
//	cout << "\nnow have a combined volume of ";
//	cout << guest[0].volume + guest[1].volume;
//	return 0;
//}



//共用体的创建
//union one4all
//{
//	int intval;
//	double doubleval;
//};
//int main()
//{
//	one4all test;
//	test.doubleval = 1.88;
//	cout << test.doubleval;
//	test.intval = 5;
//	//cout <<"double: " << test.doubleval;
//	//共用体同一时间只能存储一种类型数据
//	//新的数据类型会占用旧类型的空间
//	cout <<"int: " << test.intval;
//
//	return 0;
//}

int main()
{
	int x = 7;
	int* p_x = new int;
	*p_x=7;
	cout << x<<"   "<<p_x << endl << sizeof(x) << "  " << sizeof(p_x);
	delete p_x;
	return 0;


}