#include <iostream>
#include <vector>
#include <limits>


int main(){
	int number_int = 2;
	float number_float = 2.;
	float highest_float;
	int highest_int;
	int infinity = std::numeric_limits<int>::max();

	while(number_int != infinity && number_int != 0){
		highest_int = number_int;
		number_int*=2;
		std::cout << number_int << ", ";
	}
	std::cout << "int = " << highest_int << std::endl;	

	while(number_float != infinity && number_float != 0){
		highest_float = number_float;
		number_float*=2;
		std::cout << number_float << ", ";
	}
	std::cout << "float = " << highest_float << std::endl;


	return 0;
}