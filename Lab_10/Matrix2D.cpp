#include "Matrix2D.h"

int Matrix2D::element(unsigned i, unsigned j) const { return matrix[i][j]; }
int& Matrix2D::element(unsigned i, unsigned j) { return matrix[i][j]; }
