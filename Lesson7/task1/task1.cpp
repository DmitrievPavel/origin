
#include <iostream>

#define MODE 0

#if MODE == 1 
int add(int x, int y) {
	return x + y;
}
#endif

int main()
{
	setlocale(LC_ALL, "Russian");

#ifndef MODE 

#error Constant is undefined

#endif

#if MODE == 0 

	std::cout << "Работаю в режиме тренировки";

#elif MODE == 1 

	std::cout << "Работаю в боевом режиме" << std::endl;
	int x = 0; 
	int y = 0; 
	std::cout << "Введите число 1: "; 
	std::cin >> x; 
	std::cout << "Введите число 2: "; 
	std::cin >> y; 
	std::cout << "Результат сложения: " << add(x, y); 

#else 

	std::cout << "Неизвестный режим.Завершение работы";

#endif 
}
