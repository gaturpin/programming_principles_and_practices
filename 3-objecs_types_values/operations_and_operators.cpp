#include <iostream>
#include <cmath>

int main()
{
	std::cout<<"Please enter a integer value: "; 
	int n;
	std::cin >> n;
	std::cout << "n = " << n
		<< "\nn+1 = " << n+1
		<< "\nthree times n == " << 3*n
		<< "\ntwice n = " << n+n
		<< "\nn squared = " << n*n
		<< "\nhalf of n == " << n/2.
		<< "\nsquare root of n == " << sqrt(double(n))
		<< std::endl;
}
/*
Operations and Operators
------------------------
Nice tables page 66/67

read from s into x: s>>x;
write x to s: 		s<<x;

strings: first, second;
first < second - sorts alphabetically

*/