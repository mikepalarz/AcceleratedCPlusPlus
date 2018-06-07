// Ask for a person's name and generate a framed greeting
#include <iostream>
#include <string>

int frameMain() {
	// We first ask for the person's name
	std::cout << "Please enter your first name: ";

	// We then read the person's name
	std::string name;
	std::cin >> name;

	// We build the message which we intend to write
	const std::string greeting = "Hello, " + name + "!";

	// Build the second and fourth lines of the output
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// Build the first and fifth lines of the output
	const std::string first(second.size(), '*');

	// Finally, we write out the output
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	std::cout << std::endl;

	return 0;
}