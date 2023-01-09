#include <iostream>
#include <vector>

int main(){

	int beth;
	int square;
	while(std::cin >> beth){
		square = 2;
		for(int i=0; i<beth-1; ++i){
			square*=2;
		}
	std::cout << square<< std::endl;
	}

	return 0;
}