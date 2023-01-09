#include <iostream>
using namespace std;

int main(){
	int no_of_words= 0;
	string previous = " ";
	string current;
	while(std::cin>>current){
		++no_of_words;
		if (previous == current){
			cout << "word number " << no_of_words 
			<< ", repeated word: " << current << "\n";
		}
		previous = current;
	}
}