#include "kvadrat.h"
#include "Exception.h"

kvadrat::kvadrat(int a, int b, int c, int d, int A, int B, int C, int D) : pryamougolnik(a, b, c, d, A, B, C, D) {
    name = { "Квадрат:" };
    if (a != b && b != c && c != d && A != 90 && B != 90 && C != 90 && D != 90) {
        throw Exception("Все стороны не равны, все углы не равны 90");
    }
    if (a != b || b != c || c != d) {
        throw Exception("Все стороны не равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw Exception("Все углы не равны 90");
    }
}