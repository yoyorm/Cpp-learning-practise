#ifndef POINT_H
#define POINT_H

class point
{
private:
    double x_;
    double y_;

public:
    point();
    point(double x, double y);
    void set(double x, double y);
    void print();
    point add(const point&,const point&);
    double distance(const point&);
};

#endif