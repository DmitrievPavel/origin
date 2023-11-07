
#include <iostream>
#include "functions.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 0;
    int y = 0;
    int choice = 0;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> choice;

    switch (choice) {
        case 1: std::cout << x << " плюс " << y << " = " << addition(x, y);
            break;
        case 2: std::cout << x << " минус " << y << " = " << subtraction(x, y);
            break;
        case 3: std::cout << x << " умножить на " << y << " = " << multiplication(x, y);
            break;
        case 4: std::cout << x << " делить на " << y << " = " << division(x, y);
            break;
        case 5: std::cout << x << " в степени " << y << " = " << exponentiation(x, y);
            break;
        default: std::cout << "Ошибка!";
    }
}


