#ifndef __POINT_HPP__
#define __POINT_HPP__

class Point {
public:
	Point(int,int);
	double distance(const Point&) const;

private:
	const int x; 
	const int y; 
};

#endif
