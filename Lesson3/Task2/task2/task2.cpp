
#include <iostream>
#include <Windows.h>

class Counter {

private:
    int count;

public:
    Counter() {
        count = 1;
    }
    Counter(int number) {
        count = number;
    }
    void incCount() {
        count++;
    }
    void decCount() {
        count--;
    }
    void seeCount() {
        std::cout << count << std::endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string choice;
    std::string command;
    int number = 0;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice;
    if (choice == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        Counter a(number);
        while (command != "х") {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;
            if (command == "+") {
                a.incCount();
            }
            if (command == "-") {
                a.decCount();
            }
            if (command == "=") {
                a.seeCount();
            }
        }
        std::cout << "До свидания!";
    }
    else if (choice == "нет") {
        Counter a;
        while (command != "х") {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;
            if (command == "+") {
                a.incCount();
            }
            if (command == "-") {
                a.decCount();
            }
            if (command == "=") {
                a.seeCount();
            }
        }
        std::cout << "До свидания!";
    }
}
