
#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	std::string name;
	Leaver a;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << a.leave(name);
}


