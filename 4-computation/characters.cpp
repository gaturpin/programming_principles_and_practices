#include <iostream>
using namespace std;

int main(){

	int i = 0;
	while(i<=(127-33)){
		cout << char('!' + i) << '\t' <<  int('!'+i) << '\n';
		++i;
	}


	return 0;
}