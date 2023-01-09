#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	std::vector<std::string> strWords{"hello", "hello", "me", "two", "three"};

	std::sort(strWords.begin(), strWords.end());

	std::cout << "Min = " << strWords[0] << ", Max = " << strWords[strWords.size() - 1] << std::endl;

	std::string strWordPrev;
	strWordPrev = strWords[0];
	int intCounter{1};
	int intMaxCounter{0};
	std::string mode;


	for(int i=1; i<strWords.size(); i++){

		if(strWords[i] == strWordPrev){
			++intCounter;
			strWordPrev = strWords[i];

			if(intMaxCounter < intCounter){
				mode = strWords[i];
				intMaxCounter = intCounter;
			}
		}
		else{
			intCounter = 1;
			strWordPrev = strWords[i];
		}
	}
	std::cout << "Mode = " << mode << std::endl;



	return 0;
}