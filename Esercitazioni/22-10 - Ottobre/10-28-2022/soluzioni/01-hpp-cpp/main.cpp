#include <point/point.hpp>
#include <iostream>

int main() {
	Point p(3,4);
	Point q(0,0);

	std::cout << "La distanza tra (3,4) e (0,0) è: " << p.distance(q) << std::endl;

	return 0;
}
