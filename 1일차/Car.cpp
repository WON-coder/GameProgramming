#include "Car.h"

int Car::getSpeed() {
	return speed; //Car �ڱ��ڽ��̱� ������ ���� ����
}

void Car::setSpeed(int s) {
	this->speed = s;
}

void Car::honk() {
	cout << "�ȳ� �� �̸��� �ڵ���" << endl;
}

int main() {
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "���� �ӵ���: " << myCar.getSpeed() << endl;

	return 0;
}