#include <iostream>
using namespace std;

int main(){

	float money, dollars;
	char currency;

	cout << "Enter yen/euro/pound (j/e/g):\n";
	cin >> money >> currency;

	switch(currency){
	case 'j':
		cout << "jpy\n";
		break;
	case 'e':
		cout << "eur\n";
		break;
	case 'g':
		cout << "gbp\n";
		break;
	default:
		cout << "Nope\n";
		break;
	}
	return 0;	
}