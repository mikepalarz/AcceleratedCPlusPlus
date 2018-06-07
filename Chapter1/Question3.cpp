// Answer to question 3

#include <iostream>
#include <string>

/*
The following program is valid. It defines a string variable, s, twice. This is possible 
due to the scope that is used via the { and } characters. Therefore, all this program does
is outputs the two definitions of s and terminates.
*/
int question3Main() {

	{ const std::string s = "a string";
	 std::cout << s << std::endl; }

	{ const std::string s = "another string";
	 std::cout << s << std::endl; }
	
	return 0;
}