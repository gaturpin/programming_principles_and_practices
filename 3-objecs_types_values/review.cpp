/*
1. What is meant by the term prompt?
	to prompt the user to take action

2. Which operator do you use to read into a variable?
	>> - right shift operator

3. If you want the user to input an integer value into your program
for a variable named number, what are the two lines of code you 
could write to ask the user to do it and to input the value
into your program?
	int number;
	cin >> number;

4. What is \n called and what purpose does it serve?
	Newline

5. What terminates input into a string?
	Whitespace

6. What terminates input into an integer?
	Whitespace or not an int

7. How would you write x in a single line of code:
	cout << "Hello, " << first_name << "!\n";

8. What is an object?
	A bit of memory that holds a value of a given type
		Type specifies what can be put in the memory

9. What is a literal?
	Represents values of various types
		e.g. literal 12 represents number 'twelve'

10. What kind of literals are there?
	Literals of type bool are True and False

11. What is a variable?
	A named object

12. What are typical sizes for a char, int and double?
	char = 1 byte - fixed
	int = 4 bytes - fixed
	double = 8 bytes

13. What measures do we use for the size of small entities 
in memory, such as ints and strings?
	int - 4 bytes usually
	strings - changes depending on length of string
			- single characters need 1 byte each

14. What is the difference betwen = and ==?
	= is assignment operator 
	== is equality operator - yields bool (true/false)
	depending on condition

15. What is a definition?
	Decleration that sets aside memory for an object

16. What is an initialization and how does it differ from an assignment?
	initialization sets type and initial value of variable
	assignment sets a new value of the variable

17. What is string concatenation and how do you make it work in c++
	adding two strings together into a single string
	use +

18. Which of the following are legal names in c++?
	This_little_pig - legal
	latest thing - not legal due to whitespace
	MiniMineMine - legal
	This_1_is fine - not legal, whitespace 
	the_$12_method - not legal, symbol
	number - legal
	2_For_1_special - not legal, starts with number
	_this_is_ok  - legal but shouldn't start with underscore
	correct? - not legal, symbol

19. Examples of legal names you shouldn't use to avoid confusion
	too long
	too short / not descriptive enough

20. What are some good rules for choosing names?
	above

21. What is type safety and why is it important?
	Objects only used according to their types rules
	e.g adding ints to strings is not type safe

22. Why can conversion from double to int be a bad thing?
	loss of decimal place - will round down - trucation

23. Define a rule to help decide if a conversion from one 
type to another is safe?
	If amount of memory reserved for destination type
	is less than source type
*/