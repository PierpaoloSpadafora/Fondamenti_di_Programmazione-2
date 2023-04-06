#include <point/point.hpp>
#include <cmath>

Point::Point(int x, int y): x(x), y(y) { }

double Point::distance(const Point& o) const {
	return sqrt(pow(o.x-x,2) + pow(o.y-y,2));
}
