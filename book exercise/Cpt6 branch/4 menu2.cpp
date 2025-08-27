//#include<iostream>
//using namespace std;



//写一个菜单，让用户可以输入对应的选项查看不同的名称格式

//const int strsize=30;
//struct bop {
//	char fullname[strsize];
//	char title[strsize];
//	char bopname[strsize];
//	int preference;// 0=fullname;1=title;2=bopname
//
//};
//
//void printname(bop x)
//{
//	switch (x.preference)
//	{
//	case 0:cout << x.fullname << endl; break;
//	case 1:cout << x.title << endl; break;
//	case 2:cout << x.bopname << endl; break;
//	}
//}
//
//
//int main()
//{
//	bop x{ "kitty", "kitten", "KIT", 1 };
//	bop y{ "Yoyorm", "yo yo", "YoYo", 0 };
//	bop z{ "jacky", "jack", "JAC", 2 };
//	cout << "Welcome to the system: " << endl;
//	cout << "a.display by fullname" << endl;
//	cout << "b.display by title" << endl;
//	cout << "c.display by bopname" << endl;
//	cout << "d.display by preference" << endl;
//	cout << "q.Quit..." << endl;
//	char temp;
//	int count = 0;
//	cout << "Enter your choice:\n";
//	while (cin >> temp)
//	{
//		
//		switch (temp)
//		{
//		case'a':;
//		case'A': 
//		{
//			cout << x.fullname << endl << y.fullname << endl << z.fullname << endl; break;
//		}
//		case'b':;
//		case'B':
//		{
//			cout << x.title << endl << y.title << endl << z.title << endl; break;
//		}
//		case'c':;
//		case'C':
//		{
//			cout << x.bopname << endl << y.bopname << endl << z.bopname << endl; break;
//		}
//		case'd':;
//		case'D':
//		{
//			printname(x); printname(y); printname(z); break;
//		}
//		case'q':break;
//		default:cout<<"Please enter the right word: \n";
//		}
//		if (temp == 'q')
//			break;
//	}
//	cout << "System off....BYE.";
//	return 0;
//}