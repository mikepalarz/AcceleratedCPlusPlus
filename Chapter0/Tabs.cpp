#include <iostream>
#include <string>

int tabsMain() {

	std::string oneTab = "This\tis\tone\ttab.";
	std::string twoTabs = "This\t\tis\t\ttwo\t\ttabs.";
	std::cout << oneTab << std::endl;
	std::cout << twoTabs << std::endl;

	return 0;
}