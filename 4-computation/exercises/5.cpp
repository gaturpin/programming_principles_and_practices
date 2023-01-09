#include <iostream>
#include <vector>

using namespace std;

int main(){
	double val1, val2, ans;
	char op;

	cout << "Enter first value: ";
	cin >> val1;
	cout << "Enter operation: ";
	cin >> op;
	cout << "Enter second value: ";
	cin >> val2;

	switch(op){
		case '+':
			ans = val1 + val2;
			break;

		case '-':
			ans = val1 - val2;
			break;

		case '/':
			ans = val1 / val2;
			break;
		case '*':
			ans = val1*val2;
			break;

		default:
			cout << "Error\n";
			break;
	}
	cout << "Answer = " << ans << endl;



	return 0;
}