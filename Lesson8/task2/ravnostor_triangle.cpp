#include "ravnostor_triangle.h"
#include "Exception.h"

ravnostor_triangle::ravnostor_triangle(int a, int b, int c, int A, int B, int C) : ravnobedr_triangle(a, b, c, A, B, C) {
    name = { "�������������� �����������:" };
    if (a != b && b != c && A != 60 && B != 60 && C != 60) {
        throw Exception("��� ������� �� �����, ��� ���� �� ����� 60");
    }
    if (a != b && b != c) {
        throw Exception("��� ������� �� �����");
    }
    if (A != 60 && B != 60 && C != 60) {
        throw Exception("��� ���� �� ����� 60");
    }
}