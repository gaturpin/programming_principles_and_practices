#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<double> distances;

	double distance;
	while(cin>>distance) distances.push_back(distance);

	double sum = 0;
	for(auto i: distances) sum+=i;

	sort(distances.begin(), distances.end());
	double smallest = distances[0];
	double largest = distances[distances.size()-1];

	cout << "Sum = " << sum << endl;
	cout << "Smallest = " << smallest << endl;
	cout << "Largest = " << largest << endl;
	cout << "Mean = " << sum/distances.size() << endl;


	return 0;
}