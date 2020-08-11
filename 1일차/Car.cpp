#include "Car.h"

int Car::getSpeed() {
	return speed; //Car 자기자신이기 때문에 접근 가능
}

void Car::setSpeed(int s) {
	this->speed = s;
}

void Car::honk() {
	cout << "안녕 내 이름은 자동차" << endl;
}

int main() {
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "현재 속도는: " << myCar.getSpeed() << endl;

	return 0;
}