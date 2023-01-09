#include <iostream>

int main()
{
	std::cout << "Please enter your first name and age\n";
	std::string first_name; 
	int age;
	std::cin >> first_name >> age;
	std::cout << "Hello, " << first_name << " (age " << age << ")\n";
}

/*
Input and type
--------------
Input operation >> ("get from") - sensitive to type

Can type "George 27" because reading of strings using ">>" is terminated by whitespaces
Or whitespaces will be ignored - e.g. can put spaces before and they will be ignored

If you type "27 George" - 27 will be stored in first_name 
but George is not an int
So will get whatever was already stored in that memory - 0 or garbage
*/