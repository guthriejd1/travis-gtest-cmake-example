#include <iostream>
#include "project1.h"

using namespace std;

int main() {
	cout << "do stuff" << endl;
	cout << "my new text that says hello\n";
	cout << "Add some more lines\n";
	cout << "Another line\n";
	int x = 4;
	cout << x << endl;
	independentMethod(x);
	cout << x << endl;
	Project1 p;
	p.foo(x);
	cout << x << endl;
}
