// Answer to question 4

#include <iostream>
#include <string>

int question4Main() {

	/*
	This version of the program is totally fine and generates the same output as the code in question 3.
	*/
	//{ const std::string s = "a string";
	//  std::cout << s << std::endl;
	//{ const std::string s = "another string";
	//  std::cout << s << std::endl; }}

	/*
	If we were to change the }} in line 14 to };}, then the scope remains the same, so the program behaves
	the same:
	*/
	{ const std::string s = "a string";
	std::cout << s << std::endl;
	{ const std::string s = "another string";
	std::cout << s << std::endl; };}

	/*
	This is equivalent to us reformatting the code to the following:
	*/
	//{ const std::string s = "a string";
	//std::cout << s << std::endl;
	//	{ const std::string s = "another string";
	//	std::cout << s << std::endl; 
	//	}; 
	//}

	return 0;
}