#include <iostream>
#include <vector>

using namespace std;

int main(){
	char yes_no;
	int upper = 100;
	int lower = 0;
	int range, number;
	range = upper - lower;
	number = lower + range/2;

	while (lower != upper){

		cout << lower << ", " << upper << ", " << number << endl;

		cout << "Is your number below " << number<< "? (y/n)\n";
		cin>>yes_no;
		if (yes_no == 'y'){
			upper -= range/2;
		}
		else{
			lower += range/2;
		}
		range = upper - lower;
		number = lower + range/2;
		if (range == 1){
			upper = lower;
		}
	}
	cout << number << endl;

	return 0;
}