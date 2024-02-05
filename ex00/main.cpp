#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		std::cout << "You didnt insert the name of the program and the value to convert. Usage: ./convert <vaue..>" << std::endl;
	else
			ScalarConverter::convert(av[1]);
	return (0);
}