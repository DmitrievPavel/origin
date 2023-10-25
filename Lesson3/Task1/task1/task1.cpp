
#include <iostream>
#include <Windows.h>

class Calculator {

private:

    double num1;
    double num2;

public:
    Calculator(){}
    bool set_num1(double num1) {
        if (num1 == 0) return false;
            this->num1 = num1;
        return true;
    }
    bool set_num2(double num2) {
        if (num2 == 0) return false;
            this->num2 = num2;
        return true;
    }
    double add() {
        double res = num1 + num2;
        return res;
    }
    double multiply() {
        double res = num1 * num2;
        return res;
    }
    double subtract_1_2() {
        double res = num1 - num2;
        return res;
    }
    double subtract_2_1() {
        double res = num2 - num1;
        return res;
    }
    double divide_1_2() {
        double res = num1 / num2;
        return res;
    }
    double divide_2_1() {
        double res = num2 / num1;
        return res;
    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Calculator a;
    double num1 = 0;
    double num2 = 0;
    bool flag = 0;
    while (flag == 0) {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        while (a.set_num1(num1) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> num1;
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;
        while (a.set_num2(num2) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> num2;
        }

        std::cout << "num1 + num2 = " << a.add() << std::endl;
        std::cout << "num1 - num2 = " << a.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << a.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << a.multiply() << std::endl;
        std::cout << "num1 / num2 = " << a.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << a.divide_2_1() << std::endl;
    }
}

