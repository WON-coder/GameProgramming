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
		cout << "���� �������� �Է��Ͻÿ�: ";
		cin >> pizza_slices;
		cout << "��� ���� �Է��Ͻÿ�: ";
		cin >> persons;
		slices_per_person = DividePizza(pizza_slices, persons);
		cout << "�� ��� �� ���ڴ� " << slices_per_person << "�Դϴ�. " << endl;
	}
	catch (int e) {
		cout << "����� " << e << "�� �Դϴ�." << endl;
	}
	return 0;
}