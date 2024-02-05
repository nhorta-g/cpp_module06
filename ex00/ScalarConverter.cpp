#include "ScalarConverter.hpp"

	//Constructors
	ScalarConverter::ScalarConverter(void) {}
	ScalarConverter::~ScalarConverter(void) {}
	ScalarConverter::ScalarConverter(ScalarConverter &cpy) {
		*this = cpy;
	}
	ScalarConverter &ScalarConverter::operator = (ScalarConverter &src) {
		(void)src;
		return *this;
	}

	//Converter
	int findWhiteSpaces(std::string literal) {
		for (char c : literal) {
			if (std::isspace(c))
				return (1);
			else
				return(0);
		}
	}

	int ScalarConverter::Identifier(std::string literal) {
		if (findWhiteSpaces(literal))
			return (-1);
		if (literal.length() == 1)
	}

	static void convert(std::string literal) {
		int indent = 
	}