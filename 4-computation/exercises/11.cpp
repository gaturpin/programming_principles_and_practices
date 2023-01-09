#include <iostream>
#include <vector>

bool IsPrime(int i, std::vector<int> primes){

	for(int indx = 0; indx < primes.size(); ++indx){
		if(i<primes[indx] || i%primes[indx] == 0){
			return false;
		}
	}
	return true;

}

int main(){

	std::vector<int> primes{2};

	int intNumber;

	std::cout << "Find prime numbers between 1 and: ";
	std::cin >> intNumber;

	for(int i=1; i<=intNumber; ++i){
		if(IsPrime(i,primes)){
			primes.push_back(i);
		}
	}
	for(auto i: primes){
		std::cout << i << " ";
	}
	std::cout << "\nTotal prime numbers between 1 and " << intNumber << " = " << primes.size() << std::endl;

	return 0;
}