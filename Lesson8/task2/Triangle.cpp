#include "Triangle.h"
#include "Exception.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    sides_count = 3;
    name = { "Треугольник:" };
    if ((A + B + C) != 180) {
        throw Exception("Сумма углов не равна 180");
    }
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

int Triangle::get_a() {
    return a;
}
int Triangle::get_b() {
    return b;
}
int Triangle::get_c() {
    return c;
}
int Triangle::get_A() {
    return A;
}
int Triangle::get_B() {
    return B;
}
int Triangle::get_C() {
    return C;
}
void Triangle::info() {
    std::cout << "(Стороны " << get_a() <<',' << get_b() << ',' << get_c() << "; углы: " << get_A() << ',' << get_B() << ',' << get_C() << ")";
}