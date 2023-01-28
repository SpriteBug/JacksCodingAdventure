
//Program02
//John Braman 1/20/2023
// COSC 1030 Section 11 Spring 2023
// Added this line in GitHub
#include <iostream>

using namespace std;

int main() {
	int min, max, product = 1;
	cout << "enter a number: ";
	cin >> min;
	cout << "enter another number: ";
	cin >> max;
	if (min < max) {
		for (int i = min; i <= max; i++)
			product = i * product;
	cout << "Ill compute the product of integers in the bounded interval: " << min << " to " << max;
	cout << endl;
	cout << "The product of integers over this interval is: " << product;
	cout << endl;
	return 0;
	}
	else if (min > max) {
		for (int i = max; i <= min; i++)
			product = i * product;
		cout << "Ill compute the product of integers in the bounded interval: " << min << " to " << max;
		cout << endl;
		cout << "The product of integers over this interval is: " << product;
		cout << endl;
		return 0;
	}
}
	


