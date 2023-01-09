#include <iostream>
#include <vector>

int ConvertStringToInt(std::string digits, std::vector<std::string> values);

int main(){
	std::vector<std::string> values(10);

	values[0] = "Zero";
	values[1] = "One";
	values[2] = "Two";
	values[3] = "Three";
	values[4] = "Four";
	values[5] = "Five";
	values[6] = "Six";
	values[7] = "Seven";
	values[8] = "Eight";
	values[9] = "Nine";

	int number;
	std::string digits;
	while(true){
		if(std::cin >> number){
			std::cout << values[number] << std::endl;
		}
		else{
			std::cin.clear(); //Must clear previous input
			std::cin >> digits;
			std::cout << ConvertStringToInt(digits, values) << std::endl;
		}
	}

	return 0;
}


int ConvertStringToInt(std::string digits, std::vector<std::string> values){
	
	int number; 
	for(int i=0; i<10; ++i){
		if(values[i] == digits){
			number = i;
		}
	}
	return number;
}
