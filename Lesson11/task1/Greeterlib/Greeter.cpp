#include "Greeter.h"

std::string Greeter::greet(std::string name) {
	std::string gr = { "Здравствуйте, " };
	return gr + name + '!';
}