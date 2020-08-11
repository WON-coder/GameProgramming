#pragma once
#include<iostream>
using namespace std;

class Shape
{
protected:
	int x, y;
public:
	void setOrigin(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual void draw() { //가상함수 -> 재정의하지 않아도 오류x
		cout << "Shape Draw" << endl;
	}
	virtual void scale() = 0; //순수가상함수 -> 재정의가 꼭 필요
};

