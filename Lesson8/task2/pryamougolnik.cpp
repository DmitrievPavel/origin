#include "pryamougolnik.h"
#include "Exception.h"

pryamougolnik::pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) : parallelogramm(a, b, c, d, A, B, C, D) {
    name = { "�������������:" };
    if (a != c && b != d && A != 90 && B != 90 && C != 90 && D != 90) {
        throw Exception("������� �, � � b, d ������� �� �����, ��� ���� �� ����� 90");
    }
    if (a != c || b != d) {
        throw Exception("������� �, � � b, d ������� �� �����");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw Exception("��� ���� �� ����� 90");
    }
}