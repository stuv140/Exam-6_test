#pragma once
#include "Matrix.h"
#include<iostream>

class MatrixB:public Matrica
{
private:	
	int data;
public:
	MatrixB():data(-1) {}
//	MatrixB(int _data) { data = _data; }
	void Set(int _data) { data = _data; }
	int GetElement() const override;
	~MatrixB() {}
};
int MatrixB::GetElement()  const
{
	return data;
}