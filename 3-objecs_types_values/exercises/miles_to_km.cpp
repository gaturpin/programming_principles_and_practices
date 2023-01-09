#include <iostream>
using namespace std;

//Converts miles to km
int main(){
	double miles;
	double kilometers;
	cout << "Enter distance in miles: ";
	cin >> miles;
	kilometers = 1.609*miles;
	cout << miles << " miles = " << kilometers << " kilometers\n";

	return 0;
}