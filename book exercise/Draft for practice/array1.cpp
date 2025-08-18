#include<iostream>
int main()
{
	using namespace std;
	int packet[3] = { 1,2,3 };
	int cost[3] = {10,20,30};
	int x = 0;
	cin >> x;
	cout << "the price is" << packet[x - 1] * cost[x - 1] << " yuan";
	return 0;
}