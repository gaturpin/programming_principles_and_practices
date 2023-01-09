#include <iostream>
using namespace std;

int main(){
	char c = 'x';
	int i1 = c;
	int i2 = c;

	cout << "c = " << c << "\n" 
	<< "i1 = " << i1 << "\n" 
	<< "i2 = " << i2 << "\n";

	char c2 = i1; // converts the in 'x' = 120 back into char = 'x'
	cout << c << ' ' << i1 << ' ' << c2 << '\n';
}

/*
Single quotes = char
double quotes = string
 - Reason why cout doesn't like single quotes

 These are safe:
bool to char
bool to int
bool to double
char to int
char to double
int  to double

int to double is most useful 
- means we can mix ints and doubles in expresions
- double d1 = 2.3 + 2 
- 2 converts to float 2.0, then can be added to float 2.3
- for very large ints we can lose precision when converting to double
	- this is rare
*/
