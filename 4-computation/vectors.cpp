#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<double> temps;
	double temp;
	while (cin>>temp){
		temps.push_back(temp);
	}

	double sum = 0;
	for (int i=0; i<temps.size(); ++i) sum += temps[i];
	cout << "Average temperature: " << sum/temps.size() << endl;

	cout << "temps.begin(): " << *temps.begin() << endl;
	cout << "temps.end(): " << *temps.end() << endl;

	sort(temps.begin(), temps.end()); 	//sort temps from 
										//beginning to end
	cout << "Median temperature: " << temps[temps.size()/2] << endl;


	return 0;
}

/*

push_back(value) - adds another element to vector with value.
		- member function call
		- must be called using dot
			object_name . member-function-name(arg)

		- v.size() - get size of vector
		- do not have to specify size of vector in advanced
			- unlike arrays
sort():
	- takes beginning and end of sequence of elements.




*/