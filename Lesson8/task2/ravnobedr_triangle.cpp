#include "ravnobedr_triangle.h"
#include "Exception.h"

ravnobedr_triangle::ravnobedr_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = { "Равнобедренный треугольник:" };
    if (a != c && A != C) {
        throw Exception("Стороны а и с не равны, углы А и С не равны");
    }
    if (a != c) {
        throw Exception("Стороны а и с не равны");
    }
    if (A != C) {
        throw Exception("Углы А и С не равны");
    }
}