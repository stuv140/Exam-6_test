#pragma once
class Matrica {
public:
	virtual ~Matrica() {}
	virtual int GetElement() const = 0;
	virtual void Set(int)=0;
};