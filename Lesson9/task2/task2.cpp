
#include <iostream>
#include <Windows.h>

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

	int nod(int a, int b) {
		if (a % b == 0) return b;
		if (b % a == 0) return a;
		if (a > b) return nod(a % b, b);
		return nod(a, b % a);
	}

	void Contraction() {
		int tmp = nod(numerator_, denominator_);
		numerator_ /= tmp;
		denominator_ /= tmp;
		if (denominator_ < 0) {
			numerator_ *= -1;
			denominator_ *= -1;
		}
	}
	
	Fraction operator+(Fraction right) {
		int num = 0;
		int den = 0;
		if (denominator_ == right.denominator_) {
			num = numerator_ + right.numerator_;
			den = denominator_;
			return Fraction(num, den);
		}
		else {
			num = (numerator_ * right.denominator_) + (right.numerator_ * denominator_);
			den = denominator_ * right.denominator_;
			return Fraction(num, den);
		}
	}

	Fraction operator-(Fraction right) {
		int num = 0;
		int den = 0;
		if (denominator_ == right.denominator_) {
			num = numerator_ - right.numerator_;
			den = denominator_;
			return Fraction(num, den);
		}
		else {
			num = (numerator_ * right.denominator_) - (right.numerator_ * denominator_); 
			den = denominator_ * right.denominator_;
			return Fraction(num, den);
		}
	}

	Fraction operator*(Fraction right) {
		int num = numerator_ * right.numerator_;
		int den = denominator_ * right.denominator_;
		return Fraction(num, den);
	}

	Fraction operator/(Fraction right) {
		int num = numerator_ * right.denominator_;
		int den = denominator_ * right.numerator_;
		return Fraction(num, den);
	}

	Fraction& operator++() {
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator++(int) {
		Fraction tmp = *this;
		++*this;
		return tmp;
	}

	Fraction& operator--() {
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator--(int) {
		Fraction tmp = *this;
		--*this;
		return tmp;
	}

	Fraction& operator-() {
		numerator_ = -numerator_;
		return *this;
	}

	void print() {
		std::cout << numerator_ << "/" << denominator_ << std::endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	int num1 = 0;
	int num2 = 0;
	int den1 = 0;
	int den2 = 0;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> den1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num2;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> den2;
	Fraction a(num1, den1);
	Fraction b(num2, den2);

	std::cout << num1 << '/' << den1 << " + " << num2 << '/' << den2 << " = ";
	Fraction c = a + b;
	c.Contraction();
	c.print();

	std::cout << num1 << '/' << den1 << " - " << num2 << '/' << den2 << " = ";
	Fraction d = a - b;
	d.Contraction();
	d.print();

	std::cout << num1 << '/' << den1 << " * " << num2 << '/' << den2 << " = ";
	Fraction e = a * b;
	e.Contraction();
	e.print();

	std::cout << num1 << '/' << den1 << " / " << num2 << '/' << den2 << " = ";
	Fraction f = a / b;
	f.Contraction();
	f.print();

	std::cout << "++" << num1 << '/' << den1 << " * " << num2 << '/' << den2 << " = ";
	Fraction g = ++a * b;
	g.Contraction();
	g.print();
	std::cout << "Значение дроби 1 = ";
	a.print();

	std::cout << num1 << '/' << den1 << "--" << " / " << num2 << '/' << den2 << " = ";
	Fraction h = a-- * b;
	h.Contraction();
	h.print();
	std::cout << "Значение дроби 1 = ";
	a.print();

	std::cout << '-' << num1 << '/' << den1 << " + " << num2 << '/' << den2 << " = ";
	Fraction j = -a + b;
	j.Contraction();
	j.print();
}
