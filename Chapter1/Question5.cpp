// Answer to question 5

#include <iostream>
#include <string>

int question5Main() {

	/*
	The current version of this program is not valid. This is because the x variable
	is outside of the scope of s.
	*/
	//{ std::string s = "a string";
	//{ std::string x = s + ", really"; 
	//  std::cout << s << std::endl; }
	//std::cout << x << std::endl;
	//}

	/*
	One possible solution to making it work is the following:
	*/
	std::string s = "a string";
	{ std::string x = s + ", really";
	std::cout << s << std::endl;
	std::cout << x << std::endl;
	}

	return 0;
}