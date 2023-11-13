#include "parallelogramm.h"
#include "Exception.h"

parallelogramm::parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = { "��������������:" };
    if (a != c && b != d && A != C && B != D) {
        throw Exception("C������ a,c � b,d ������� �� �����, ���� A,C � B,D ������� �� �����");
    }
    if (a != c || b != d) {
        throw Exception("C������ a,c � b,d ������� �� �����");
    }
    if (A != C || B != D) {
        throw Exception("���� A,C � B,D ������� �� �����");
    }
}