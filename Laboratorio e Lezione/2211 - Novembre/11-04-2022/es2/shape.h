

#ifndef __SHAPE_H__
#define __SHAPE_H__

#define PI 3.141592653

#include <iostream>

using namespace std;

class Shape{
public:
    virtual double perimetro() const = 0;
    virtual double area() const = 0;
    virtual string representation()const=0;

    friend ostream& operator<<(ostream& o, const Shape& a){
        o<<a.representation();
        return o;
    }
};

class Cerchio:public Shape{
public:
	const double r;

    Cerchio(double r): r(r){}

    virtual double perimetro() const override{
        return 2*PI*r;
    }
    virtual double area() const override{
        return PI*r*r;
    }
    virtual string representation() const override{
        return "Cerchio(r= " + to_string(r) + " )";
    }

};

class Rettangolo:public Shape{
public:
    const double a;
    const double b;

    Rettangolo(double _a, double _b ):
    a(_a),
    b(_b){}

    virtual double perimetro() const override{
        return (a+b)*2;
    }
    virtual double area() const override{
        return a*b;
    }
    virtual string representation() const override{
        return "Rettangolo(a= " + to_string(a) + ", b= "+ to_string(b) + ")";
    }

};

class Quadrato:public Shape{
public:
    const double l;

    Quadrato(double _l):
    l(_l){}

    virtual double perimetro() const override{
        return (l*4);
    }
    virtual double area() const override{
        return l*l;
    }
    virtual string representation() const override{
        return "Quadrato(l= " + to_string(l) + ")";
    }

};

#endif