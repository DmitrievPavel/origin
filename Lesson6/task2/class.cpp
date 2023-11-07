#include "class.h"
#include <iostream>

Counter::Counter() {
	count = 1;
}

Counter::Counter(int number) {
	count = number;
}

void Counter::incCount() {
	count++;
}

void Counter::decCount() {
	count--;
}

void Counter::seeCount() {
	std::cout << count << std::endl;
}