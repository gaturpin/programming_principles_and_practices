/*
Switch statements:
	- Values we swich must be int, char or enumeration (enum)
		- cannot be string
	- Values in case labels must be const expressions
		- cannot use variable in case label
	- Cannot use same value for two case labels
	- Can use several case labels for a single case
	- End each case with a break

For larger set of const - switch more efficient code than 
collection of if statements

Can label single action by set of case labels:
	case '0': case '2': case '4': case '6': case '8':
	cout << "is even\n";
	break;
	case '1': case '3': case 'S': case '7': case '9':
	cout << "is odd\n"; break;


*/