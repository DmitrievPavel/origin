#include "pryamougolnik.h"
#include "Exception.h"

pryamougolnik::pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) : parallelogramm(a, b, c, d, A, B, C, D) {
    name = { "Прямоугольник:" };
    if (a != c && b != d && A != 90 && B != 90 && C != 90 && D != 90) {
        throw Exception("Стороны а, с и b, d попарно не равны, все углы не равны 90");
    }
    if (a != c || b != d) {
        throw Exception("Стороны а, с и b, d попарно не равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw Exception("Все углы не равны 90");
    }
}