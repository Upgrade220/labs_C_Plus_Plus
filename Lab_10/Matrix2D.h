#pragma once
#include "MatrixBase.h"
class Matrix2D : public MatrixBase
{
public:
	int element(unsigned i, unsigned j) const override;
	int& element(unsigned i, unsigned j) override;

	Matrix2D() : MatrixBase(2) {};

private:
	int matrix[2][2];
};

