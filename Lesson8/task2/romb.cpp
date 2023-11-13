#include "romb.h"
#include "Exception.h"

romb::romb(int a, int b, int c, int d, int A, int B, int C, int D) : parallelogramm(a, b, c, d, A, B, C, D) {
    name = { "Ромб:" };
    if (a != b && b != c && c != d && A != C && B != D) {
        throw Exception("Все стороны не равны, углы A,C и B,D попарно не равны");
    }
    if (a != b || b != c || c != d) {
        throw Exception("Все стороны не равны");
    }
    if (A != C || B != D) {
        throw Exception("Углы A,C и B,D попарно не равны");
    }
}