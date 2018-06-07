#include <iostream>
#include <string>


// A revision of our HelloWorld program which has a newline occurring everywhere that whitespace is allows.
int helloWorldWithNewLinesMain() {

	std::string output = "Hello,\nworld!\n";
	std::cout << output;

	return 0;
}