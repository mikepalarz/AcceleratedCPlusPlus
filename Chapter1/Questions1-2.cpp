#include <iostream>
#include <string>

// Answers to questions 1 and 2

/*
The code in question 1 contains valid definitions for its variables.
*/
int question1() {
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

	std::cout << message;
	
	return 0;
}

/*
The code in question 2 does not contain a valid definition for message. This is because 
message contains too many string literals in its definition.
*/
int question2() {
	const std::string exclam = "!";
	// const std::string message = "Hello" + ", world" + exclam;
	
	return 0;
}

int questions1_2Main() {
	question1();
	
	// Code will not compile due to invalid definition of message variable
	// question2();

	return 0;
}

