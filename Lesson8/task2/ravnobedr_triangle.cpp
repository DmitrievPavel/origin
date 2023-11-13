#include "ravnobedr_triangle.h"
#include "Exception.h"

ravnobedr_triangle::ravnobedr_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = { "�������������� �����������:" };
    if (a != c && A != C) {
        throw Exception("������� � � � �� �����, ���� � � � �� �����");
    }
    if (a != c) {
        throw Exception("������� � � � �� �����");
    }
    if (A != C) {
        throw Exception("���� � � � �� �����");
    }
}