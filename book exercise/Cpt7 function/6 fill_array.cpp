//#include<iostream>
//using namespace std;
//
////获取用户输入的double数组大小，用函数完成输入，显示，反转元素的功能
//
//void Fill_array(double x[], int length); 
//void Show_array(const double x[], int length);
//double* Reverse_array(double x[], int length);
//bool state = true;
//int main()
//{
//	cout << "Enter the size of the array: \n";
//	int size;
//	
//	cin >> size;
//	double* temp = new double[size];
//	double* end = new double[size];
//	Fill_array(temp, size);
//	if (state==false)
//	{
//		cout << "Error!!!";
//		return(EXIT_FAILURE);
//	}
//	Show_array(temp, size);
//	end=Reverse_array(temp, size);
//	cout << "Reversing the array...\n";
//	Show_array(end, size);
//	delete[] temp;
//	delete[] end;
//	return 0;
//}
//
//void Fill_array(double x[], int length)//输入数据
//{
//	cout << "Enter " << length << " numbers(double): \n";
//	for (int i = 0; i < length; i++)
//	{
//		if (cin >> x[i]){}
//		else {
//			state=false;
//		}
//	}
//}
//
//void Show_array(const double x[], int length)//显示数据
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << i + 1 << " element:\t" << x[i]<<endl;
//	}
//}
//
//double* Reverse_array(double x[], int length)//数据反转
//{
//	double* tt = new double[length];
//	int n = 0;
//	for (int i = length - 1; i >= 0; i--)
//	{
//		tt[n] = x[i];
//		n++;
//	}
//	return(tt);
//	
//}