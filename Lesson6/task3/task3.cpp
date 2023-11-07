
#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "pryamoug_triangle.h"
#include "ravnobedr_triangle.h"
#include "ravnostor_triangle.h"
#include "parallelogramm.h"
#include "pryamougolnik.h"
#include "romb.h"
#include "kvadrat.h"

void print_info(Figure* figure) {

    std::cout << std::endl << figure->get_name() << std::endl;
    figure->info();

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Triangle treangle(10, 20, 30, 50, 60, 70);
    Figure* p_treangle = &treangle;
    print_info(p_treangle);

    pryamoug_triangle treangle2(10, 20, 30, 50, 60);
    Figure* p_pryamoug_triangle = &treangle2;
    print_info(p_pryamoug_triangle);

    ravnobedr_triangle treangle3(10, 20, 50, 60);
    Figure* p_ravnobedr_triangle = &treangle3;
    print_info(p_ravnobedr_triangle);

    ravnostor_triangle treangle4(30);
    Figure* p_ravnostor_triangle = &treangle4;
    print_info(p_ravnostor_triangle);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* p_quadrangle = &quadrangle;
    print_info(p_quadrangle);

    parallelogramm quadrangle2(20, 30, 30, 40);
    Figure* p_parallelogramm = &quadrangle2;
    print_info(p_parallelogramm);

    pryamougolnik quadrangle3(10, 20);
    Figure* p_pryamougolnik = &quadrangle3;
    print_info(p_pryamougolnik);

    romb quadrangle4(30, 30, 40);
    Figure* p_romb = &quadrangle4;
    print_info(p_romb);

    kvadrat quadrangle5(20);
    Figure* p_kvadrat = &quadrangle5;
    print_info(p_kvadrat);
}

