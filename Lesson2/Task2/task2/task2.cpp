
#include <iostream>
#include <Windows.h>

struct account {
    int number;
    std::string name;
    double balance;
};

void changeBalance(account& a, double newBalance) {
    a.balance = newBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    account a;
    double newBalance = 0;
    std::cout << "Введите номер счёта: ";
    std::cin >> a.number;
    std::cout << "\nВведите имя владельца: ";
    std::cin >> a.name;
    std::cout << "\nВведите баланс: ";
    std::cin >> a.balance;
    std::cout << "\nВведите новый баланс: ";
    std::cin >> newBalance;
    changeBalance(a, newBalance);
    std::cout << "\nВаш счёт: " << a.name << ", " << a.number << ", " << a.balance;
}