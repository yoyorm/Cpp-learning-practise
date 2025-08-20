#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
#pragma warning(disable:4996)//屏蔽 strcpy 报错
//int main()
//{
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
//	const int size = 10;
//	char name1[size];
//	char name2[size]="Yo yo rm";
//	cout << "my name is " << name2 << endl;
//	cout << "What's your name?\n";
//	cin >> name1;
//	cout << "Well, " << name1 << ", your name has been stored.\n";
//	cout << "your name has " << strlen(name1) << " letters.\n";
//	cout << "your first letter is " << name1[0] << endl;
//	cout << "your name is in an array that owns " << sizeof(name1) << " bytes.\n";
//	name2[4] = '\0';
//	cout << "my first 4 letters are " << name2;
//	return 0;
//}



//使用cin.getline/get()
//cin 读取到空白字符后结束
//
//int main()
//{
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//	
//	cout << "Enter your name:\n";
//	cin.get(name,ArSize).get();
//	cout << "Enter your favorite dessert:\n";
//	cin.get(dessert,ArSize).get();
//	cout << dessert << "for you, " << name;
//	return 0;
//}

//
//int main()
//{
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



//指针和动态数组
//int main()
//{
//	int* p3 = new int[3];
//	p3[0] = 1;
//	p3[1] = 2;
//	p3[2] = 3;
//	cout << p3[0]<<endl;
//	p3 = p3+2;//指针的动态数组可以直接运算来进行移动 而静态的普通数组是常量，可以运算，但不能被赋值
//	cout << "NOW: " << p3[-1];
//	p3 = p3 - 2; //要将指针移动回原来的位置再释放
//	delete[] p3;
//	return  0;
//}

//int main()
//{
//	int x[5] = { 1,2,3,4,5 };
//	int(*p_x)[5] = &x;//可以使用&数组名 来将整个地址赋予给一个指针
//	cout << (*p_x)[3];
//	return 0;
//
//}
	


//new 使用指针并创建新地址，并且复制值
//int main()
//{
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps=animal;
//
//	cout<< animal << " and ";
//	cout << bird << "\n";
//
//	cout << "Enter a kind of animal: ";
//	cin >> animal;
//	
//	cout << ps<<"!\n";
//	cout << "Before strcpy:\n";
//	cout << ps << " is at " << (int*)ps<<endl;
//
//	ps = new char[strlen(animal) + 1];
//	strncpy(ps, animal, strlen(animal) + 1);
//
//	cout << "After strcpy:\n";
//	cout << ps << " is at " << (int*)ps << endl;
//	delete[] ps;
//	return 0;
//}



//动态结构
//struct inflatable
//{
//	char name[20];
//	float volume = 0;
//	double price = 0;
//};
//
//int main()
//{
//	inflatable* ps = new inflatable;
//	cout << "Enter the name: ";
//	cin.getline(ps->name,20);
//	cout << "Enter the volume: ";
//	cin >> (*ps).volume;
//	cout << "Enter the price: ";
//	cin >> (*ps).price;
//	cout << "Name: " << ps->name<<endl;
//	cout << "Volume: " << ps->volume << endl;
//	cout << "Price: " << ps->price << endl;
//	delete ps;
//	return 0;
//}



//自动分配大小的字符指针
//char* getname()
//{
//	char temp[50];
//	cout << "请输入内容：\n";
//	cin >> temp;
//	char* sn = new char[strlen(temp) + 1];
//	strncpy(sn, temp, strlen(temp) + 1);
//	return sn;
//}
//int main()
//{
//	char* name = getname();
//	cout << "你存储的内容是：\n";
//	cout << name;
//	delete name;
//	return 0;
//}



//指针的指针
//struct house { int num; };
//int main()
//{
//	house x, y, z;
//	x.num = 101;
//	y.num = 202;
//	z.num = 303;
//	house* ph[3] = { &x,&y,&z };
//	house** pph = ph;
//	cout << (*pph)->num<<endl;
//	cout << (*(*(pph+1))).num;
//	return 0;
//}

