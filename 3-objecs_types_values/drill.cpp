#include <iostream>
using namespace std;

void error(string s);

int main(){
	string first_name;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Dear " << first_name << ",\n"
		<< "How are you?\n";

	string friend_name;
	cout << "Enter friends name: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "Sex of friend (m/f): ";
	cin >> friend_sex;

	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else
		cout << "If you see " << friend_name << " please ask her to call me.\n";


	int friend_age;
	cout << "Enter age: ";
	cin >> friend_age;
	if(friend_age<=0 || friend_age>=110){
		error("You're kidding!");
	}
	else
		cout << "I hear you just had a birthday and you are " << friend_age
			<< " years old.\n";

	if(friend_age < 12)
		cout << "Next year you will be " << friend_age+1 << '\n';
	if(friend_age == 17)
		cout << "Next year you will be able to vote.\n";
	if(friend_age>70)
		cout << "I hope you are enjoying retirement.\n";
	cout << "Yours sincerely,\n \n \nGeorge.\n";
}

void error(string s){
	throw runtime_error(s);
}