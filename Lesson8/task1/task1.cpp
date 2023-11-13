
#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw std::length_error("Вы ввели слово запретной длины! До свидания");
    }
    return str.length();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string str;
    int fobbiden_lenght = 0;
    bool flag = 0;
    std::cout << "Введите запретную длину: ";
    std::cin >> fobbiden_lenght;
    while (!flag) {
        std::cout << "\nВведите слово: ";
        std::cin >> str;
        try {
            std::cout << "Длина слова " << '"' << str << '"' << " равна " << function(str, fobbiden_lenght);
        }
        catch (const std::length_error& e) {
            flag = 1;
            std::cout << e.what() << std::endl;
        }
    }
}

