﻿
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	
	bool operator==(Fraction& right) {
		if (numerator_ == right.numerator_ && denominator_ == right.denominator_) {
			return true;
		}
		return false;
	}

	bool operator!=(Fraction& right) {
		return !(*this == right);
	}

	bool operator>(Fraction& right) {
		if (numerator_ == right.numerator_ && denominator_ < right.denominator_) {
			return true;
		}
		if (denominator_ == right.denominator_ && numerator_ > right.numerator_) {
			return true;
		}
		else {
			numerator_ *= right.denominator_;
			right.numerator_ *= denominator_;
			if (numerator_ > right.numerator_) {
				return true;
			}
		}
		return false;
	}

	bool operator<(Fraction& right) {
		return right > *this;
	}

	bool operator>=(Fraction& right) {
		return !(*this < right);
	}

	bool operator<=(Fraction& right) {
		return !(*this > right);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
