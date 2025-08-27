//#include<iostream>
//#include<cctype>
//using namespace std;
//
////计算税收和税后
////5001-15000:10%;15001-35000:15%;35000+ 20%
//int main()
//{
//	double bill;
//	double tax = 0;
//	cout << "Enter your salary: ";
//	while (cin >> bill)
//	{
//		if (bill <= 5000) {}
//		else if (bill <= 15000)
//		{
//			tax = (bill - 5000) * 0.1;
//		}
//		else if (bill <= 35000)
//		{
//			tax = 10000 * 0.1 + (bill - 15000) * 0.15;
//		}
//		else
//		{
//			tax = 10000 * 0.1 + 20000 * 0.15 + (bill - 35000) * 0.2;
//		}
//		cout << "your tax =" << tax << endl;
//		cout << "your real salary = " << bill - tax << endl<<endl;
//		cout << "Enter your next salary: ";
//	}
//	cout << "System off\n good bye!";
//	return 0;
//}