#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<double> centemeters, meters, inches, feet;
	double number;
	string unit;
	while (cin >> number >> unit){
		//numbers.push_back(number);
	
		/*
		if (number==*min_element(numbers.begin(), numbers.end()))
			cout << "smallest number so far" << endl;

		if (number==*max_element(numbers.begin(), numbers.end()))
			cout << "highest number so far" << endl;
		*/

		if (unit =="cm"){
			centemeters.push_back(number);
			meters.push_back(number/100);
			inches.push_back(number/2.54);
			feet.push_back(number/2.54/12.);

			cout << number << "cm = " 
			<< number/100 << "m, "
			<< number/2.54<< "in, "
			<< number/2.54/12. << "ft" << endl;
		}
		else if (unit=="m"){
			meters.push_back(number);
			centemeters.push_back(number*100);
			inches.push_back(number*100/2.54);
			feet.push_back(number*100/2.54/12);

			cout << number << "m = "
			<< number*100 << "cm, "
			<< number*100/2.54 << "in, "
			<< number*100/2.54/12 << "ft" << endl;
		}
		else if (unit=="in"){
			inches.push_back(number);
			meters.push_back(number*2.54/100);
			centemeters.push_back(number*2.54);
			feet.push_back(number/12);

			cout << number << "in = "
			<< number*2.54/100 << "m, "
			<< number*2.54 << "cm, "
			<< number/12 << "ft" << endl;
		}

		else if (unit=="ft"){
			feet.push_back(number);
			meters.push_back(number*12*2.54/100);
			centemeters.push_back(number*12*2.54);
			inches.push_back(number*12);

			cout << number << "ft = "
			<< number*12*2.54/100 << "m, "
			<< number*12*2.54 << "cm, "
			<< number*12 << "in" << endl;
		}
		else{
			cout << "Unit not accepted\n";
		}


	//cout << "Min number so far = " 
//		<< *min_element(numbers.begin(), numbers.end()) << endl;

	}

	cout << "all values in meters: " << meters << endl;

	cout << "min = " << *min_element(meters.begin(), meters.end()) << 'm' << endl;
	cout << "max = " << *max_element(meters.begin(), meters.end()) << 'm' << endl;
	
	double sum = 0;
	for (int i=0; i<meters.size(); ++i) {sum += meters[i];}
	cout << "sum = " << sum << 'm' << endl;



	return 0;
}

//if (smallest < largest) { cout << smallest << ", " << largest << endl;}
//else if (largest < smallest) { cout << largest << ", " << smallest << endl;}
//else {cout << "equal" << endl;}

//if (smallest - largest < 1.0/10000000.){cout << "close" << endl;}
