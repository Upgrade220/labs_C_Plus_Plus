#pragma once
#include <ostream>

class MatrixBase
{
public:
	unsigned int size() const { return mSize; };

	virtual int element(unsigned int i, unsigned int j) const = 0;
	virtual int& element(unsigned int i, unsigned int j) = 0;
	void operator *= (int iMult);
	void operator += (MatrixBase& iAdd);
	friend std::ostream& operator<<(std::ostream& stram, const MatrixBase& iMatrix);
	
protected:
	MatrixBase(unsigned int iSize) : mSize(iSize){};

private:
	const unsigned int mSize;
};

