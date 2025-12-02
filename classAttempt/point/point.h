#ifndef POINT_H
#define POINT_H
#include <iostream>
class point
{
private:
    double x_;
    double y_;

public:
    point();
    point(double x, double y);
    void set(double x, double y);
    void print() const;
    point add(const point&,const point&) const;
    double distance(const point&) const;
    point& operator=(const point&);
    point& operator+=(const point&);
    bool operator==(const point&) const;
    friend point operator+(const point&, const point&) ;
    friend std::ostream& operator<<(std::ostream&,const point&);
};

#endif