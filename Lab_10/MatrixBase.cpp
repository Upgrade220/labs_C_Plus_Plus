#include "MatrixBase.h"
#include <string>

using namespace std;

void MatrixBase::operator*=(int iMult)
{
	for (auto i = 0; i < size(); i++)
		for (auto j = 0; j < size(); j++)
			element(i, j) *= iMult;
}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (auto i = 0; i < size(); i++)
		for (auto j = 0; j < size(); j++)
			element(i, j) += iAdd.element(i, j);
}

std::ostream& operator<<(std::ostream& stream, const MatrixBase& iMatrix)
{
	for(auto i = 0; i < iMatrix.size(); i++)
	{
		for (auto j = 0; j < iMatrix.size(); j++)
			stream << to_string(iMatrix.element(i, j)) << " ";
		stream << "\n\n";
	}
	return stream;
}


