#include <iostream>
using namespace std;

int main(){
	int val1, val2, val3;
	int smallest, middle, largest;
	cout << "Enter 3 integers: ";
	cin >> val1 >> val2 >> val3;

	if(val1 < val2){
		smallest = val1;
		largest = val2;
	} else{
		smallest = val2;
		largest = val1;
	}


	if(val3<=smallest){
		middle = smallest;
		smallest = val3;
	}
	else if(val3>smallest && val3<val1){
		middle = val3;
	}
	else if(val3>=largest){
		middle = largest;
		largest = val3;
	}
	cout << smallest << ' ' <<  middle << ' ' << largest << '\n';
	return 0;
}
