#include <iostream>
#include <string>

int quoteBackslashMain() {

	std::string output = "This (\") is a quote, and this (\\) is a backslash.";
	std::cout << output << std::endl;

	return 0;
}