
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

class Address {
private:

    std::string sity;
    std::string street;
    int num_house;
    int num_apart;

public:

    Address(std::string sity, std::string street, int num_house, int num_apart) {
        this->sity = sity;
        this->street = street;
        this->num_house = num_house;
        this->num_apart = num_apart;
    }

    Address() {
    }

    std::string get_output_address() {
        std::string strAddress = sity + ", " + street + ", " + std::to_string(num_house) + ", " + std::to_string(num_apart);
        return strAddress;
    }

    std::string get_sity() {
        return sity;
    }

    void sort(Address* mass, int size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - 1; j++) {
                if (mass[j].get_sity() > mass[j + 1].get_sity()) {
                    std::swap(mass[j], mass[j + 1]);
                }
            }
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int size = 0;
    std::string sity;
    std::string street;
    int num_house = 0;
    int num_apart = 0;
    Address a;
    std::ifstream fin("in.txt");

    if (!fin.is_open()) {
        std::cout << "file not found";
        return -1;
    }

 
    fin >> size;
    Address* mass = new Address[size];

    for (int i = 0; i < size; i++) {
        fin >> sity >> street >> num_house >> num_apart;
        mass[i] = Address(sity, street, num_house, num_apart);
    }

    fin.close();
    std::ofstream fout("out.txt");
    fout << size << std::endl;
    a.sort(mass, size);

    for (int i = 0; i < size; i++) {
        fout << mass[i].get_output_address() << std::endl;
    }

    fout.close();
    delete[] mass;
    std::cout << "Writing complete";
}   
