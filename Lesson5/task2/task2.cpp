
#include <iostream>
#include <Windows.h>

class Figure {

protected:

    int sides_count;
    std::string name;
    int a, b, c, d, A, B, C, D;

public:

    Figure() {}

    Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 0;
        name = { "Фигура:" };
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }

    int get_sides_count() {
        return sides_count;
    }

    std::string get_name() {
        return name;
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
};

class Triangle : public Figure {

public:

    Triangle(int a, int b, int c, int A, int B, int C) : Figure(a, b, c, 0, A, B, C, 0) {
        sides_count = 3;
        name = { "Треугольник:" };
    }
};

class Quadrangle :  public Figure {

public:

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(a, b, c, d, A, B, C, D) {
        sides_count = 4;
        name = { "Четырехугольник:" };
    }
};

class pryamoug_triangle : public Triangle {

public:
    pryamoug_triangle(int a, int b, int c, int A, int B) : Triangle (a, b, c, A, B, 90 ){
        name = { "Прямоугольный треугольник:" };
    }
};

class ravnobedr_triangle : public Triangle {

public:
    ravnobedr_triangle(int a, int b, int A, int B) : Triangle (a, b, a, A, B, A){
        name = { "Равнобедренный треугольник:" };
    }
};

class ravnostor_triangle : public ravnobedr_triangle {

public:
    ravnostor_triangle(int a) : ravnobedr_triangle (a, a, 60, 60) {
        name = { "Равносторонний треугольник:" };
    }
};

class parallelogramm : public Quadrangle {

public:
    parallelogramm(int a, int b, int A, int B) : Quadrangle (a, b, a, b, A, B, A, B) {
        name = { "Параллелограмм:" };
    }
};

class pryamougolnik : public parallelogramm {

public:
    pryamougolnik(int a, int b) : parallelogramm(a, b, 90, 90) {
        name = { "Прямоугольник:" };
    }
};

class romb : public parallelogramm {

public:
    romb(int a, int A, int B) : parallelogramm(a, a, A, B) {
        name = { "Ромб:" };
    }
};

class kvadrat : public pryamougolnik {

public:
    kvadrat(int a) : pryamougolnik(a, a) {
        name = { "Квадрат:" };
    }
};

void print_info(Figure* figure) {

        std::cout << std::endl << figure->get_name() << std::endl;
        std::cout << "Стороны: " << "a = " << figure->get_a() << " b = " << figure->get_b() << " c = " << figure->get_c();
        if (figure->get_sides_count() == 3) { std::cout << std::endl; }
        if (figure->get_sides_count() == 4) { std::cout << " d = " << figure->get_d() << std::endl; }
        std::cout << "Углы: " << "A = " << figure->get_A() << " B = " << figure->get_B() << " C = " << figure->get_C();
        if (figure->get_sides_count() == 3) { std::cout << std::endl; }
        if (figure->get_sides_count() == 4) { std::cout << " D = " << figure->get_D() << std::endl; }

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Triangle treangle(10, 20, 30, 50, 60, 70);
    Figure* p_treangle = &treangle;
    print_info(p_treangle);

    pryamoug_triangle treangle2(10, 20, 30, 50, 60);
    Figure* p_pryamoug_triangle = &treangle2;
    print_info(p_pryamoug_triangle);

    ravnobedr_triangle treangle3(10, 20, 50, 60);
    Figure* p_ravnobedr_triangle = &treangle3;
    print_info(p_ravnobedr_triangle);

    ravnostor_triangle treangle4(30);
    Figure* p_ravnostor_triangle = &treangle4;
    print_info(p_ravnostor_triangle);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* p_quadrangle = &quadrangle;
    print_info(p_quadrangle);

    parallelogramm quadrangle2(20, 30, 30, 40);
    Figure* p_parallelogramm = &quadrangle2;
    print_info(p_parallelogramm);

    pryamougolnik quadrangle3(10, 20);
    Figure* p_pryamougolnik = &quadrangle3;
    print_info(p_pryamougolnik);

    romb quadrangle4(30, 30, 40);
    Figure* p_romb = &quadrangle4;
    print_info(p_romb);

    kvadrat quadrangle5(20);
    Figure* p_kvadrat = &quadrangle5;
    print_info(p_kvadrat);
}

