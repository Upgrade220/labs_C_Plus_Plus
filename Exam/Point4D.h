#pragma once
#include "Vector4D.h"
#include <ostream>

class Point4D
{
public:
	double X, Y, Z, T;

	void operator += (Point4D point);
	void operator -= (Point4D point);
	void operator += (Vector4D vector);
	void operator -= (Vector4D vector);
	friend std::ostream& operator<<(std::ostream& stream, const Point4D& iPoint4D);
	Point4D(const double x = 0.0, const double y = 0.0, const double z = 0.0, const double t = 0.0) : X(x), Y(y), Z(z), T(t){};
};

