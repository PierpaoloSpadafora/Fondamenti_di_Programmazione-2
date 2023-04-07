


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "shape.h"

using namespace std;


int menu(){
    cout<<"\n Che figura geometrica si vuole inserire?"<<endl;    
    cout<<"\n 1 - Cerchio"<<endl;    
    cout<<"\n 2 - Rettangolo"<<endl;    
    cout<<"\n 3 - Quadrato"<<endl;
}

int main() {
	vector<Shape*> shapes;
	Rettangolo r(3.0, 4.0);
	Quadrato s(8.0); 
	Cerchio c(3.0); 
	shapes.push_back(&r);
	shapes.push_back(&s);
	shapes.push_back(&c);

	struct {
		double operator()(Shape* s1, Shape* s2) {
			double d1 = s1->area() / s1->perimetro();
			double d2 = s2->area() / s2->perimetro();
			return d1 < d2;
		}
	} density_functor;
	sort(shapes.begin(), shapes.end(), density_functor); 

	int k = 3;
	auto it = shapes.rbegin(); 
	while (k--) {
		cout << **it << endl; 
		it++;
	}
	return 0; 
}
