
#include <iostream>
#include <Windows.h>

class Figure {

protected:

    int sides_count;
    std::string name;

public:

    Figure(){
        sides_count = 0;
        name = { "Фигура:" };
    }

    int get_sides_count() {
        return sides_count;
    }

    std::string get_name() {
        return name;
    }
};

class Triangle : public Figure {

public:
    Triangle() {
        sides_count = 3;
        name = { "Треугольник:" };
    }
};

class Quadrangle : public Figure {

public:
    Quadrangle() {
        sides_count = 4;
        name = { "Четырехугольник:" };
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Figure a;
    Triangle b;
    Quadrangle c;
    std::cout << "Количество сторон:" << std::endl;
    std::cout << a.get_name() << a.get_sides_count() << std::endl;
    std::cout << b.get_name() << b.get_sides_count() << std::endl;
    std::cout << c.get_name() << c.get_sides_count() << std::endl;
}
