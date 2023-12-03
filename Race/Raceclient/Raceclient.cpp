#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "Racelib.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int restart = 0;
    do {

        int S = 0;
        int changeRace = 0;
        int changeTS = 1;
        int countTS = 1;
        int go_or_change = 0;
        int numTSreg[8]{};
        bool flag = 0;
        double masRes[8]{};
        int countRes = 0;
        bool flag1 = 0;
        std::string masrace[3] = { "Гонка для наземного транспорта","Гонка для воздушного транспорта","Гонка для наземного и воздушного транпорта" };
        std::string masTS[8] = { "Верблюд","Верблюд-быстроход","Кентавр","Ботинки вездеходы","Ковер-самолет","Орел","Метла" };
        std::string masTSreg[8]{};

        std::cout << "Добро пожаловать в гоночный симулятор!\n1." << masrace[0] << "\n2." << masrace[1] << "\n3." << masrace[2] << "\nВыберите тип гонки : ";
        std::cin >> changeRace;
        std::system("cls");

        while (S <= 0) {
            std::cout << "Укажите длину дистанции (должна быть положительна):";
            std::cin >> S;
            std::system("cls");
        }

        std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1. Зарегистрировать транспорт\nВыберите действие:";
        int reg = 0;
        std::cin >> reg;
        std::system("cls");

        do {
            do {
                do {
                    std::cout << masrace[changeRace - 1] << " Расстояние: " << S << std::endl;
                    std::cout << "Зарегистрированные транспортные стредства: ";

                    if (countTS == 1) {
                        std::cout << "транспорт не зарегистрирован";
                    }

                    else {
                        for (int i = 1; i < countTS; ++i) {
                            std::cout << masTSreg[i];
                            if (countTS > 2) {
                                std::cout << ", ";
                            }
                        }
                    }

                    std::cout << std::endl;
                    std::cout << "1. Верблюд" << "\n2. Верблюд-быстроход" << "\n3. Кентавр" << "\n4. Ботинки-вездеходы" << "\n5. Ковер-самолет" << "\n6. Орел" << "\n7. Метла" << "\n0. Закончить регистрацию" << "\nВыберите транспорт или 0 для окончания процесса регистрации: ";
                    std::cin >> changeTS;
                    std::system("cls");

                    if ((changeRace == 1 && changeTS <= 4) || (changeRace == 2 && changeTS >= 5) || changeRace == 3) {
                        numTSreg[countTS] = changeTS;
                        for (int i = 1; i < countTS; i++) {
                            if (changeTS == numTSreg[i] && changeTS != 0) {
                                std::cout << masTS[changeTS - 1] << " уже заригистрирован!" << std::endl;
                                flag = 1;
                                break;
                            }
                        }

                        if (flag != 1 && changeTS != 0) {
                            std::cout << masTS[changeTS - 1] << " успешно зарегистрирован!" << std::endl;
                            masTSreg[countTS] = masTS[changeTS - 1];
                            countTS++;
                        }

                        else {
                            flag = 0;
                        }

                    }

                    else {
                        std::cout << "Попытка зарегистрировать неправильный тип транспортного стредства!" << std::endl;
                    }

                    if (countTS <= 2) {
                        std::cout << "Должно быть зарегистрировано минимум 2 транспортных средства" << std::endl;
                        flag1 = 1;
                    }

                    else {
                        flag1 = 0;
                    }

                } while (flag1 != 0);

            } while (changeTS != 0);

            std::system("cls");
            std::cout << "1. Зарегистрировать транспорт\n" << "2. Начать гонку\n" << "Выберите действие: ";
            std::cin >> go_or_change;
            std::system("cls");

        } while (go_or_change != 2);

        if (go_or_change == 2) {

            for (int i = 0; i < countTS; i++) {

                if (numTSreg[i] == 1) {
                    verblud a;
                    masRes[i] = a.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 2) {
                    verblud_speed b;
                    masRes[i] = b.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 3) {
                    kentavr c;
                    masRes[i] = c.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 4) {
                    boots d;
                    masRes[i] = d.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 5) {
                    kover e;
                    masRes[i] = e.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 6) {
                    orel f;
                    masRes[i] = f.run(S);
                    countRes++;
                }

                if (numTSreg[i] == 7) {
                    metla g;
                    masRes[i] = g.run(S);
                    countRes++;
                }
            }
        }

        for (int i = 1; i < countRes; i++) {
            for (int j = 1; j < countRes; j++) {

                if (masRes[j] > masRes[j + 1]) {
                    std::swap(masRes[j], masRes[j + 1]);
                    std::swap(masTSreg[j], masTSreg[j + 1]);
                }
            }
        }

        std::cout << "Результаты гонки:\n";

        for (int i = 1; i < countRes + 1; i++) {
            std::cout << i << ". " << masTSreg[i] << ". Время: " << masRes[i] << std::endl;
        }

        std::cout << "\n1. Провести еще одну гонку\n2. Выйти\nВыберите действие: ";
        std::cin >> restart;
        std::system("cls");

        if (restart == 2) break;

    } while (restart != 2);
}