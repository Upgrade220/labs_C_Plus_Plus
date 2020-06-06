#pragma once
#include "MatrixBase.h"
class Matrix3D : public MatrixBase
{
public:
	int element(unsigned i, unsigned j) const override;
	int& element(unsigned i, unsigned j) override;

	Matrix3D() : MatrixBase(dimension) {}

private:
	static const int dimension = 3;
	int matrix[dimension][dimension];
};

