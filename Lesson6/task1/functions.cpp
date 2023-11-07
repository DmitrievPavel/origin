#include "functions.h"

int addition(int x, int y) {
	return x + y;
}

int subtraction(int x, int y) {
	return x - y;
}

int multiplication(int x, int y) {
	return x * y;
}

double division(int x, int y) {
	return static_cast<double>(x) / y;
}

int exponentiation(int x, int y) {
	int res = 1;
	for (int i = 0; i < y; i++) {
		res *= x;
	}
	return res;
}