#include <iostream>

int square(int x);

int main(){
	int number;
	std::cout << "Enter number to square: ";
	std::cin >> number;
	std::cout << square(number) << '\n';

	return 0;
}

int square(int x){
	int square = 0;

	for(int i = 0; i<x ; ++i){
		square += x;
	}
	return square;
}

