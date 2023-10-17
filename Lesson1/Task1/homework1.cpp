#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("in.txt");

    if (!fin.is_open())
    {
        std::cout << "file is not open";
    }

    int size1 = 0;
    fin >> size1;
    int* arr1 = new int[size1]();

    for (int i = 0; i < size1; i++) {
        fin >> arr1[i];
    }

    int size2 = 0;
    fin >> size2;
    int* arr2 = new int[size2]();

    for (int i = 0; i < size2; i++) {
        fin >> arr2[i];
    }

    fin.close();
    int* mass1 = new int[size1]();

    for (int i = 1; i < size1; i++) {
        mass1[i - 1] = arr1[i];
    }

    mass1[size1 - 1] = arr1[0];
    int* mass2 = new int[size2]();

    for (int i = 0; i < size2 - 1; i++) {
        mass2[i + 1] = arr2[i];
    }

    mass2[0] = arr2[size2 - 1];
    std::ofstream fout("out.txt");
    fout << size2 << std::endl;
    for (int i = 0; i < size2; i ++){
        fout << mass2[i] << " ";
    }
    fout << std::endl << size1 << std::endl;
    for (int i = 0; i < size1; i++) {
        fout << mass1[i] << " ";
    }
    fout.close();
}

