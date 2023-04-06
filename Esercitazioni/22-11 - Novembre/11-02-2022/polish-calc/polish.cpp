#include "iostream"
#include "stack"
#include "sstream"
using namespace std;


void pop_args(stack<int>& s, int& a, int& b) {
	a = s.top(); s.pop();
	b = s.top(); s.pop(); 
	cerr << "Popping " << a << ", " << b << " off the stack" << endl;
}

int main() {
	stack<int> ops;
	string ins;
	int a, b;

	while (cin >> ins) {
		if (ins == "+") {
			pop_args(ops,a,b); 
			ops.push(a+b);
			cerr << "Pushing " << a + b << " on the stack\n";
		} else if (ins == "-") {
			pop_args(ops,a,b); 
			ops.push(a-b);
			cerr << "Pushing " << a - b << " on the stack\n";

		} else if (ins == "*") {
			pop_args(ops,a,b); 
			ops.push(a*b);
			cerr << "Pushing " << a * b << " on the stack\n";

		} else if (ins == "/") {
			pop_args(ops,a,b); 
			ops.push(b/a);
			cerr << "Pushing " << b/a << " on the stack\n";

		} else {
			ops.push( stoi(ins) );
		}
	}

	return 0; 
}
