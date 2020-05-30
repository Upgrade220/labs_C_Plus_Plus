#include "Matrix3D.h"

int Matrix3D::element(unsigned i, unsigned j) const { return matrix[i][j]; }
int& Matrix3D::element(unsigned i, unsigned j) { return matrix[i][j]; }
