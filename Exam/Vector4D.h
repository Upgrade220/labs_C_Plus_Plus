#pragma once
#include <ostream>


class Vector4D
{
public:
	double X, Y, Z, T;

	void operator += (Vector4D vector);
	void operator -= (Vector4D vector);
	friend std::ostream& operator<<(std::ostream& stream, const Vector4D& iVector4D);
	Vector4D(const double x = 0.0,const double y = 0.0, const double z = 0.0,const double t = 0.0) : X(x), Y(y), Z(z), T(t) {};
};

