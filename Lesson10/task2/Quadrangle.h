#pragma once
#include "Figure.h"

class Quadrangle : public Figure {
protected:
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    void info() override;
};
