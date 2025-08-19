#include<iostream>
//换算身高
//int main()
//{
//    using namespace std;
//    const int mcm = 100;
//    int cm = 0;
//    float m = 0;
//    cout << "你的身高是：___厘米\b\b\b\b\b\b\b";
//    cin >> cm;
//    m = (float)cm / mcm;
//    cout << endl << "你的身高是 " << m << " 米";

//}


//分秒度 换位为度
int main()
{
	using namespace std;
	float change = 60;
	int degrees = 0, minutes = 0, seconds = 0;
	float results = 0;
	cout << "Enter degrees,minutes and seconds :\n";
	cout << "first , enter the degrees:";
	cin >> degrees;

	cout << "next , enter the minutes:";
	cin >> minutes;

	cout << "first , enter the seconds:";
	cin >> seconds;

	results = degrees + minutes / change + seconds / change / change; \
		cout << degrees << "degrees, " << minutes << "minutes, " << seconds << "seconds  =" << results << " degrees";
	return 0;

}