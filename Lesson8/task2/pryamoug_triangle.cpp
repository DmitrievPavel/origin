#include "pryamoug_triangle.h"
#include "Exception.h"

pryamoug_triangle::pryamoug_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = { "������������� �����������:" };
	if (C != 90) {
		throw Exception("���� � �� ����� 90");
	}
}