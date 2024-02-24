#include "ScalarConverter.hpp"

	void ScalarConverter::convert(std::string literal) {
		int i = 0;
		//int sign = 0;
		int dot = 0;
		//int f = 0;
		if (literal.length() == 1) {
			if (!std::isdigit(literal.at(0))) {					//IS CHAR!!!
				char c = literal.at(0);
				std::cout << "char: " << c << std::endl;
				std::cout << "int: " << static_cast<int>(c) << std::endl;
				std::cout << "float: " << static_cast<float>(c) << std::endl;
				std::cout << "double: " << static_cast<double>(c) << std::endl << std::endl;
			}
			else {
				//char _int = literal.at(0);
				int _int = static_cast<int>(literal.at(0));		//IS INT (One digit)
				std::cout << "char: " << _int << std::endl;
				std::cout << "int: " << static_cast<int>(_int) << std::endl;
				std::cout << "float: " << static_cast<float>(_int) << std::endl;
				std::cout << "double: " << static_cast<double>(_int) << std::endl << std::endl;
			}
		}
		else if (std::isdigit(literal.at(0)) || literal.length() > 1) {
			if (literal.at(0) == '-' || literal.at(0) == '+') {
				i++;
				dot++;
			}
		}


		else
			std::cout << "error"  << std::endl << std::endl;
	}