#include <iostream>

int main()
{
std::cout << "Please enter your first and second names\n"; 
std::string first;
std::string second;
std::cin >> first >> second; // read two strings 
std::string name = first + ' ' + second; // concatenate strings 
std::cout << "Hello, " << name << '\n';

if (first < second){
	std::cout << first << " is alphabetically before " << second <<'\n';
}
if (first > second){
	std::cout << first << " is alphabetically after " << second <<'\n';
}
}
