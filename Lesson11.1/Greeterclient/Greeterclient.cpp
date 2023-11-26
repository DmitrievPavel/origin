
#include <iostream>
#include <Windows.h>
#include "Greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Greeter a;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << a.greet(name);
}

