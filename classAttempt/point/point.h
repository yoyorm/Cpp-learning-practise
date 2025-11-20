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
    void print() const;
    point add(const point&,const point&) const;
    double distance(const point&) const;
    point& operator=(const point&);
    friend point operator+(const point&, const point&) ;
};

#endif