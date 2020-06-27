#include "Vector4D.h"
#include <string>
#include <iostream>

using namespace std;

void Vector4D::operator+=(Vector4D vector)
{
	this->X += vector.X;
	this->Y += vector.Y;
	this->Z += vector.Z;
	this->T += vector.T;
}

void Vector4D::operator-=(Vector4D vector)
{
	this->X -= vector.X;
	this->Y -= vector.Y;
	this->Z -= vector.Z;
	this->T -= vector.T;
}

std::ostream& operator<<(std::ostream& stream, const Vector4D& iVector4D)
{
	stream << iVector4D.X << " " << iVector4D.Y << " "
	<< iVector4D.Z << " "<< iVector4D.T << " ";
	stream << "\n\n";
	return stream;
}


