#include <iostream>
using namespace std;

int main(){

	float money, dollars;
	string currency;

	cout << "Enter yen/euro/pound (jpy/eur/gbp):\n";
	cin >> money >> currency;

	if(currency=="jpy"){
		cout << money*10 << '\n';
	}
	else if(currency=="eur"){
		cout << money*1 << '\n';
	}
	else if(currency=="gbp"){
		cout << money*100 << '\n';
	}
	else{
		cout << "Error, I don't know what currency" << currency 
		<< "is\n";
	}
	return 0;
}