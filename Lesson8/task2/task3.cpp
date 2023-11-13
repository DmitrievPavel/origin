
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
#include "Exception.h"

void print_info(Figure* figure) {

    std::cout << std::endl << figure->get_name() << std::endl;
    figure->info();

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    try {
        Triangle treangle(10, 20, 30, 50, 60, 70);
        Figure* p_treangle = &treangle;
        print_info(p_treangle);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& tr) {
        std::cout << "\nТреугольник. Ошибка создания фигуры. Причина: " << tr.what() << std::endl;
    }

    try {
        pryamoug_triangle treangle2(10, 20, 30, 30, 60, 90);
        Figure* p_pryamoug_triangle = &treangle2;
        print_info(p_pryamoug_triangle);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& pr_tr) {
        std::cout << "\nПрямоугольный треугольник. Ошибка создания фигуры. Причина: " << pr_tr.what() << std::endl;
    }

    try {
        ravnobedr_triangle treangle3(10, 20, 20, 60, 60, 60);
        Figure* p_ravnobedr_triangle = &treangle3;
        print_info(p_ravnobedr_triangle);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& rv_tr) {
        std::cout << "\nРавнобедренный треугольник. Ошибка создания фигуры. Причина: " << rv_tr.what() << std::endl;
    }

    try {
        ravnostor_triangle treangle4(30, 30, 30, 60, 60, 60);
        Figure* p_ravnostor_triangle = &treangle4;
        print_info(p_ravnostor_triangle);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& rvs_tr) {
        std::cout << "\nРавносторонний треугольник. Ошибка создания фигуры. Причина: " << rvs_tr.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        Figure* p_quadrangle = &quadrangle;
        print_info(p_quadrangle);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& quad) {
        std::cout << "\nЧетырехугольник. Ошибка создания фигуры. Причина: " << quad.what() << std::endl;
    }

    try {
        parallelogramm quadrangle2(20, 30, 20, 30, 80, 90, 90, 100);
        Figure* p_parallelogramm = &quadrangle2;
        print_info(p_parallelogramm);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& par) {
        std::cout << "\nПараллелограмм. Ошибка создания фигуры. Причина: " << par.what() << std::endl;
    }

    try {
        pryamougolnik quadrangle3(10, 20, 10, 20, 90, 90, 90, 90);
        Figure* p_pryamougolnik = &quadrangle3;
        print_info(p_pryamougolnik);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& pr) {
        std::cout << "\nПрямоугольник. Ошибка создания фигуры. Причина: " << pr.what() << std::endl;
    }

    try {
        romb quadrangle4(30, 30, 30, 30, 30, 40, 30, 40);
        Figure* p_romb = &quadrangle4;
        print_info(p_romb);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& rmb) {
        std::cout << "\nРомб. Ошибка создания фигуры. Причина: " << rmb.what() << std::endl;
    }

    try {
        kvadrat quadrangle5(20, 20, 20, 20, 90, 90, 90, 90);
        Figure* p_kvadrat = &quadrangle5;
        print_info(p_kvadrat);
        std::cout << " создан" << std::endl;
    }
    catch (const std::exception& kv) {
        std::cout << "\nКвадрат. Ошибка создания фигуры. Причина: " << kv.what() << std::endl;
    }
}

