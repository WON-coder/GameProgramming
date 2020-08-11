#include<iostream>
#include<vector>
using namespace std;

int main() {
	double sum = 0.0;
	const int NUMBER_OF_ENTERS = 5;
	vector<double>numbers(NUMBER_OF_ENTERS);

	for (int i = 0; i < NUMBER_OF_ENTERS; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}

	cout << "ЦђБе";
	for (int i = 0; i < NUMBER_OF_ENTERS - 1; i++) {
		cout << numbers[i] << ',';
	}
	cout << numbers[NUMBER_OF_ENTERS - 1];
	cout << sum / NUMBER_OF_ENTERS;

	return 0;
}