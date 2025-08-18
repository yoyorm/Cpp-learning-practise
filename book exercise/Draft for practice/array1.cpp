#include<iostream>
//初次使用数组
int main()
{
	using namespace std;
	int packet[3] = {1,2,3};
	int cost[3] = { 5,10,15 };
	int x = 0;
	cout << "press the number of packet that you want to buy: ";
	cin >> x;
	cout << "the final price of packet " <<x<<" is " << packet[x-1] * cost[x-1] << " yuan" << endl;


	return 0;

}