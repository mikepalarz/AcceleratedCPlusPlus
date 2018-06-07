// Answer to question 6

#include <iostream>
#include <string>

int question6Main() {

	// We ask for a name once...
	std::cout << "What is your name? ";
	std::string name;
	// ...and store it within the name variable
	std::cin >> name;
	// We greet the user with that name
	std::cout << "Hello, " << name
		<< std::endl << "And what is yours? ";
	
	// We ask for a name again and store it within the name variable, which overwrites the original
	// contents of name
	std::cin >> name;

	// Finally, we greet the other person
	std::cout << "Hello, " << name
		<< "; nice to meet you too!" << std::endl;

	return 0;
}