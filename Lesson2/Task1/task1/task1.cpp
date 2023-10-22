
#include <iostream>

enum class months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int month = -1;
    while(month != 0) {
        std::cout << "\nВведите номер месяца: ";
        std::cin >> month;
        if (month == 0) {
            break;
        }
        months Month = static_cast<months>(month);
        switch (Month) {
        case months::January: std::cout << "Январь";
            break;
        case months::February: std::cout << "Февраль";
            break;
        case months::March: std::cout << "Март";
            break;
        case months::April: std::cout << "Апрель";
            break;
        case months::May: std::cout << "Май";
            break;
        case months::June: std::cout << "Июнь";
            break;
        case months::July: std::cout << "Июль";
            break;
        case months::August: std::cout << "Август";
            break;
        case months::September: std::cout << "Сентябрь";
            break;
        case months::October: std::cout << "Октябрь";
            break;
        case months::November: std::cout << "Ноябрь";
            break;
        case months::December: std::cout << "Декабрь";
            break;
        default: std::cout << "Неправильный номер!";
            break;
        }
    }
    std::cout << "До свидания";
}
