
#include <iostream>
#include <Windows.h>

struct adress {
    std::string sity;
    std::string street;
    int number_house;
    int number_apart;
    int index;
};

void print(adress c) {
    std::cout << "Город: " << c.sity << std::endl;
    std::cout << "Улица: " << c.street << std::endl;
    std::cout << "Номер дома: " << c.number_house << std::endl;
    std::cout << "Номер квартиры: " << c.number_apart << std::endl;
    std::cout << "Индекс: " << c.index << std::endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    adress a = { "Москва", "Арбат", 12, 8, 123456 };
    adress b = { "Ижевск", "Пушкина", 59, 143, 953769 };
    print(a);
    std::cout << std::endl;
    print(b);
}
