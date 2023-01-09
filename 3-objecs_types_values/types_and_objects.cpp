#include <iostream>
using namespace std;


//Type safety
int main(){
	double x;
	double y = x; //using variable before it has been initiallised
	double z = 2.0+x;
	cout << z << '\n';
}



/*
int - sets aside fixed memory per int - typically 4 bytes (32 bits)
bool, char 	- fixed in size - 1 byte / 8 bits
double 	- 	fixed size - 8 bytes - 64 bits
string 	- 	different length strings take up different 
			amounts of space

Type safety
compiler can't guarantee type safety 
*/