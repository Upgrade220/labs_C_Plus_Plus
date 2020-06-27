#include "Point4D.h"
#include <string>
#include <iostream>

using namespace std;

void Point4D::operator+=(Point4D point)
{
	this->X += point.X;
	this->Y += point.Y;
	this->Z += point.Z;
	this->T += point.T;
}

void Point4D::operator-=(Point4D point)
{
	this->X -= point.X;
	this->Y -= point.Y;
	this->Z -= point.Z;
	this->T -= point.T;
}

void Point4D::operator+=(Vector4D vector)
{
	this->X += vector.X;
	this->Y += vector.Y;
	this->Z += vector.Z;
	this->T += vector.T;
}

void Point4D::operator-=(Vector4D vector)
{
	this->X -= vector.X;
	this->Y -= vector.Y;
	this->Z -= vector.Z;
	this->T -= vector.T;
}

std::ostream& operator<<(std::ostream& stream, const Point4D& iPoint4D)
{
	stream << iPoint4D.X << " " << iPoint4D.Y << " "
	<< iPoint4D.Z << " " << iPoint4D.T << " ";
	stream << "\n\n";
	return stream;
}




