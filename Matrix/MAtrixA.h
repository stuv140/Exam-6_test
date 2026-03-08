#pragma once
#include "Matrix.h"
#include<iostream>

class MatrixA : public Matrica
{
public:
	MatrixA() {}
	int GetElement() const override;
	void Set(int i) {}

};

int MatrixA::GetElement() const
{
	return -1;
}