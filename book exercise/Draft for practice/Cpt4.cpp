#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
#pragma warning(disable:4996)//���� strcpy ����
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



//������ʹ���ַ���
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



//ʹ��cin.getline/get()
//cin ��ȡ���հ��ַ������
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




//ʹ�� string ����
//int main()
//{
//	cout << "��ӡ������ĸ��Ȼ���Զ����:\n";
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




//�ṹstruct
//struct inflatable
//{
//	char name[20];
//	float volume = 0;
//	double price = 0;
//};
//�ṹ�Ĵ�����ʹ��
//int main()
//{
//	inflatable guest = { "jack",1.88,29.9 };
//	inflatable pal = { "kitty",3.12,32.99 };
//	cout << "Expand your guest list with " << guest.name;
//	cout << " and " << pal.name;
//	cout << endl << "you can have both for $" << guest.price + pal.price<<"!\n";
//	return 0;
//}




//�ṹ����Ĵ�����ʹ��
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




//������Ĵ���
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
//	//������ͬһʱ��ֻ�ܴ洢һ����������
//	//�µ��������ͻ�ռ�þ����͵Ŀռ�
//	cout <<"int: " << test.intval;
//
//	return 0;
//}



//ָ��Ͷ�̬����
//int main()
//{
//	int* p3 = new int[3];
//	p3[0] = 1;
//	p3[1] = 2;
//	p3[2] = 3;
//	cout << p3[0]<<endl;
//	p3 = p3+2;//ָ��Ķ�̬�������ֱ�������������ƶ� ����̬����ͨ�����ǳ������������㣬�����ܱ���ֵ
//	cout << "NOW: " << p3[-1];
//	p3 = p3 - 2; //Ҫ��ָ���ƶ���ԭ����λ�����ͷ�
//	delete[] p3;
//	return  0;
//}

//int main()
//{
//	int x[5] = { 1,2,3,4,5 };
//	int(*p_x)[5] = &x;//����ʹ��&������ ����������ַ�����һ��ָ��
//	cout << (*p_x)[3];
//	return 0;
//
//}
	


//new ʹ��ָ�벢�����µ�ַ�����Ҹ���ֵ
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



//��̬�ṹ
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



//�Զ������С���ַ�ָ��
//char* getname()
//{
//	char temp[50];
//	cout << "���������ݣ�\n";
//	cin >> temp;
//	char* sn = new char[strlen(temp) + 1];
//	strncpy(sn, temp, strlen(temp) + 1);
//	return sn;
//}
//int main()
//{
//	char* name = getname();
//	cout << "��洢�������ǣ�\n";
//	cout << name;
//	delete name;
//	return 0;
//}



//ָ���ָ��
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

