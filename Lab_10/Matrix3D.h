#pragma once
#include "MatrixBase.h"
class Matrix3D : public MatrixBase
{
public:
	int element(unsigned i, unsigned j) const override;
	int& element(unsigned i, unsigned j) override;

	Matrix3D() : MatrixBase(3) {}

private:
	int matrix[3][3];
};

