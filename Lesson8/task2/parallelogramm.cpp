#include "parallelogramm.h"
#include "Exception.h"

parallelogramm::parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = { "ѕараллелограмм:" };
    if (a != c && b != d && A != C && B != D) {
        throw Exception("Cтороны a,c и b,d попарно не равны, углы A,C и B,D попарно не равны");
    }
    if (a != c || b != d) {
        throw Exception("Cтороны a,c и b,d попарно не равны");
    }
    if (A != C || B != D) {
        throw Exception("”глы A,C и B,D попарно не равны");
    }
}