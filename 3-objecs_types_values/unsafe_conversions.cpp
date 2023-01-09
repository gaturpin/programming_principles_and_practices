#include <iostream>
using namespace std;

// int main(){
// 	int a = 20000;
// 	char c = a;
// 	int b = c;
// 	if (a!=b)
// 		cout << "oops!: " << a << "!= " << b << '\n';
// 	else
// 		cout << "Wow! We have large characters\n";
// }

int main(){
	double d = 0;
	while (cin>>d){
		int i = d;
		char c = i;
		int i2 = c;
		cout 	<< "d==" << d
				<< " i=="<< i
				<< " i2=="<<i2
				<< " char("<<c<<")\n";
	}
}



/*
Narrowing conversions
 - put a value into object that is too small
 - compilers don't generally warn about this
 - int is typically much larger than chars


Double to int conversion truncates -> always rounds down
int to char - no problems with truncation
			- but char can only hold small int values
			- usually 1 byte
			- int usually 4 bytes
*/