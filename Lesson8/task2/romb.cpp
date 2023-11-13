#include "romb.h"
#include "Exception.h"

romb::romb(int a, int b, int c, int d, int A, int B, int C, int D) : parallelogramm(a, b, c, d, A, B, C, D) {
    name = { "����:" };
    if (a != b && b != c && c != d && A != C && B != D) {
        throw Exception("��� ������� �� �����, ���� A,C � B,D ������� �� �����");
    }
    if (a != b || b != c || c != d) {
        throw Exception("��� ������� �� �����");
    }
    if (A != C || B != D) {
        throw Exception("���� A,C � B,D ������� �� �����");
    }
}