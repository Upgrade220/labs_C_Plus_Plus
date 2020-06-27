#include <iostream>
#include "Point4D.h"
#include "Vector4D.h"

using namespace std;

void output (Point4D point1, Point4D point2, Vector4D vector1, Vector4D vector2)
{
	cout << "point1" << endl;
	cout << point1 << endl;
	cout << "point2" << endl;
	cout << point2 << endl;
	
	cout << "vector1" << endl;
	cout << vector1 << endl;
	cout << "vector2" << endl;
	cout << vector2 << endl;
}

int main()
{
	Point4D point1(1,1,1,1);
	Point4D point2(1,2,3,4);
	Vector4D vector1(1,1,1,1);
	Vector4D vector2(1,2,3,4);

	setlocale(LC_ALL, "Russian");
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	cout << "Исходные значения" << endl << endl;
	output(point1, point2, vector1, vector2);
	
	point1 += point2;
	point2 += vector1;
	vector2 += vector1;

	cout << "Сложение" << endl << endl;
	output(point1, point2, vector1, vector2);

	vector2 -= vector1;
	point2 -= vector1;
	point1 -= point2;

	cout << "Вычитание" << endl << endl;
	output(point1, point2, vector1, vector2);
	return 0;
}
