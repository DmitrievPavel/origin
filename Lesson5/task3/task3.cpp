
#include <iostream>
#include <Windows.h>

class Figure {

protected:

    int sides_count;
    std::string name;

    virtual bool check() {
        if (sides_count == 0) {
            return true;
        }
        else {
            return false;
        }
    }
public:

    Figure() {
        sides_count = 0;
        name = { "Фигура:" };
    }

    int get_sides_count() {
        return sides_count;
    }

    std::string get_name() {
        return name;
    }

    virtual void print_info() {
        std::cout << std::endl << get_name() << std::endl;
        if (check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
    }
};

class Triangle : public Figure {

protected:
    int a, b, c, A, B, C;

    bool check() override {
        if ((A + B + C) == 180) {
            return true;
        }
        else {
            return false;
        }
    }

public:

    Triangle(int a, int b, int c, int A, int B, int C) {
        sides_count = 3;
        name = { "Треугольник:" };
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }

    int get_a() {
        return a;
    }
    int get_b() {
        return b;
    }
    int get_c() {
        return c;
    }
    int get_A() {
        return A;
    }
    int get_B() {
        return B;
    }
    int get_C() {
        return C;
    }

    void print_info() override {
        Figure::print_info();
        std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    }
};

class Quadrangle : public Figure {
protected:

    int a, b, c, d, A, B, C, D;

    bool check() override {
        if ((A + B + C + D) == 360) {
            return true;
        }
        else {
            return false;
        }
    }

public:

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 4;
        name = { "Четырехугольник:" };
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }

    int get_a() {
        return a;
    }
    int get_b() {
        return b;
    }
    int get_c() {
        return c;
    }
    int get_d() {
        return d;
    }
    int get_A() {
        return A;
    }
    int get_B() {
        return B;
    }
    int get_C() {
        return C;
    }
    int get_D() {
        return D;
    }

    void print_info() override {
        Figure::print_info();
        std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
        std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
};

class pryamoug_triangle : public Triangle {

protected:
    bool check() override {
        if (Triangle::check() && C == 90) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    pryamoug_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = { "Прямоугольный треугольник:" };
    }
};

class ravnobedr_triangle : public Triangle {
protected:
    bool check() override {
        if (Triangle::check() && (a == c && A == C)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    ravnobedr_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = { "Равнобедренный треугольник:" };
    }
};

class ravnostor_triangle : public Triangle {
protected:
    bool check() override {
        if (Triangle::check() && (a == b && b == c && A == 60 && B == 60 && C == 60)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    ravnostor_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = { "Равносторонний треугольник:" };
    }
};

class parallelogramm : public Quadrangle {
protected:
    bool check() override {
        if (Quadrangle::check() && (a == c && b == d && A == C && B == D)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = { "Параллелограмм:" };
    }
};

class pryamougolnik : public Quadrangle {
protected:
    bool check() override {
        if (Quadrangle::check() && (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = { "Прямоугольник:" };
    }
};

class romb : public Quadrangle {
protected:
    bool check() override {
        if (Quadrangle::check() && (a == b && b == c && c == d && A == C && B == D)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    romb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = { "Ромб:" };
    }
};

class kvadrat : public Quadrangle {
protected:
    bool check() override {
        if (Quadrangle::check() && (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90)) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    kvadrat(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = { "Квадрат:" };
    }
};



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Figure figure;
    figure.print_info();

    Triangle triangle1(10, 20, 30, 50, 60, 70);
    Figure* tr1 = &triangle1;
    tr1->print_info();

    pryamoug_triangle triangle2(10, 20, 30, 50, 60, 90);
    Figure* tr2 = &triangle2;
    tr2->print_info();

    pryamoug_triangle triangle2_1(10, 20, 30, 50, 40, 90);
    Figure* tr2_1 = &triangle2_1;
    tr2_1->print_info();

    ravnobedr_triangle triangle3(10, 20, 10, 50, 60, 50);
    Figure* tr3 = &triangle3;
    tr3->print_info();

    ravnostor_triangle triangle4(30, 30, 30, 60, 60, 60);
    Figure* tr4 = &triangle4;
    tr4->print_info();

    Quadrangle quadrangle1(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* qr1 = &quadrangle1;
    qr1->print_info();

    pryamougolnik quadrangle2(10, 20, 10, 20, 90, 90, 90, 90);
    Figure* qr2 = &quadrangle2;
    qr2->print_info();

    kvadrat quadrangle3(20, 20, 20, 20, 90, 90, 90, 90);
    Figure* qr3 = &quadrangle3;
    qr3->print_info();

    parallelogramm quadrangle4(20, 30, 20, 30, 30, 40, 30, 40);
    Figure* qr4 = &quadrangle4;
    qr4->print_info();

    romb quadrangle5(30, 30, 30, 30, 30, 40, 30, 40);
    Figure* qr5 = &quadrangle5;
    qr5->print_info();
}