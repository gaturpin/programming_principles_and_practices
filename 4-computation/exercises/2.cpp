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

	//cout << "temps.begin(): " << *temps.begin() << endl;
	//cout << "temps.end(): " << *temps.end() << endl;

	sort(temps.begin(), temps.end()); 	//sort temps from 
										//beginning to end


	cout << "Sorted: ";
	for (auto i: temps) cout << i << " ";
	cout << '\n';


	double median = 0;
	if(temps.size()%2 ==0){
		median = (temps[temps.size()/2.] + temps[temps.size()/2-1])/2.;
		cout << "Median = " << median << '\n';
	}
	else{
		cout << "Median temperature: " << temps[temps.size()/2] << endl;
	}


	return 0;
}