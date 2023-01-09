#include <iostream>
using namespace std;

int main(){
	double val1, val2;
	cout << "Enter val1: ";
	cin >> val1;
	cout << "Enter val2: ";
	cin >> val2;
	cout << "Smallest = " << min(val1, val2) << '\n'
		<< "Largest = " << max(val1, val2) << '\n'
		<< "Sum = " << val1+val2 << '\n'
		<< "Difference = " << abs(val1-val2) << '\n'
		<< "Product = " << val1*val2 << '\n'
		<< "Ratio = " << val1/val2 << '\n';

	return 0;
}