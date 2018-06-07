// Ask for a person's name and greet the person
#include <iostream>
#include <string>

int greetingMain() {
	// We first ask for the person's name
	std::cout << "Please enter your first name: ";

	// We then read the person's name
	std::string name;
	std::cin >> name;

	// Finally, we greet the person
	std::cout << "Hello, " << name << "!" << std::endl;

	return 0;
}