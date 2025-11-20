#include "point.h"
#include <iostream>
#include <cmath>
point::point()
//默认初始化
{
    x_=0;
    y_=0;
}
point::point(double x,double y)
//构造函数
{
    x_=x;
    y_=y;

}
void point::set(double x, double y)
//设置坐标
{ 
    x_=x;
    y_=y;
}
void point::print() const
//打印坐标
{
printf("(%.1f,%.1f)\n",x_,y_);
}

point point::add(const point& p1,const point& p2) const
//两个点相加
{
    point p3;
    p3.x_=p1.x_+p2.x_;
    p3.y_=p1.y_+p2.y_;
    return p3;
}

double point::distance(const point& p2) const
//两个点之间的距离
{
    double distance;
    distance=sqrt((x_-p2.x_)*(x_-p2.x_)+(y_-p2.y_)*(y_-p2.y_));
    return distance;
}


point operator+(const point& p1,const point& p2)
{
    point p3;
    p3.x_=p1.x_+p2.x_;
    p3.y_=p1.y_+p2.y_;
    return p3;
}

point& point::operator=(const point& p1)
{
x_=p1.x_;
y_=p1.y_;
return *this;
}