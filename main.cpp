#include <cstdlib>
#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main () {
	Stack s;
	s.push ('a');
	s.push ('b');
	s.push ('c');
	s.push ('d');
	s.clearr();
	cout << s.isEmpty() << endl;
	cout << s.getSize();
}
