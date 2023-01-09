#include <iostream>
using namespace std;

void error(string s);

int main(){
	int number;
	cout << "Enter int to be spelled: ";
	cin >> number;
	string number_spell;
	if(number == 0)
		number_spell = "zero";
	else if(number ==1)
		number_spell = "one";
	else if(number ==2)
		number_spell = "two";
	else if(number == 3)
		number_spell = "three";
	else if(number == 4)
		number_spell = "four";
	else
		error("Not a number I know");
	cout << "Number is " << number_spell << '\n';

}
void error(string s){
	throw runtime_error(s);
}