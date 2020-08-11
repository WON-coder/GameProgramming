#include<iostream>
using namespace std;

int DividePizza(int pizza_slice, int person) {
	if (person == 0)
		throw person;
	return pizza_slice / person;
}

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_person = 0;
	try {
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		cout << "사람 수를 입력하시오: ";
		cin >> persons;
		slices_per_person = DividePizza(pizza_slices, persons);
		cout << "한 사람 당 피자는 " << slices_per_person << "입니다. " << endl;
	}
	catch (int e) {
		cout << "사람이 " << e << "명 입니다." << endl;
	}
	return 0;
}