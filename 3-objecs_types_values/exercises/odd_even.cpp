#include <iostream>
using namespace std;

int main(){
	int val;
	cout << "Enter integer: ";
	cin >> val;

	if(val%2 == 0)
		cout << val << " is even\n";
	else{
		cout << val << " is odd\n";
	}
	return 0;

}