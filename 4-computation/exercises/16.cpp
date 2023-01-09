#include <iostream>
#include <vector>

int main(){

	std::vector<int> values {1,1,1,2,3,1,2,3,5,4,3,7,2,7,6,5,3,1,7,7,6,5,4};

	sort(values.begin(), values.end());

	int counter = 0;
	int counter_prev = 0;
	int prev = values[0];
	int mode;
	for(int i=1; i<values.size(); ++i){
		if(prev == values[i]){
			++counter;
			prev = values[i];
			if(counter > counter_prev){
				counter_prev = counter;
				mode = values[i];
			}
		}
		else{
			counter = 1;
			prev = values[i];
		}
	}

	std::cout << mode << std::endl;
	return 0;
}