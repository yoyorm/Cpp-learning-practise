#include <iostream>
#include <windows.h>
#include "point.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double x, y;
    cout<<"输入Point p1坐标:"<<endl;
    cin >> x >> y;

    point p1(x, y);
    cout<<"输入Point p2坐标:"<<endl;
    cin >> x >> y;
    point p2(x, y);

    cout<<"输出Point坐标之和:"<<endl;
    point p3 = p1+p2;
    p3.print();

    cout<<"输出Point坐标之距离:"<<endl;
    printf("%.2f\n",p1.distance(p2));

    // system("pause");
}