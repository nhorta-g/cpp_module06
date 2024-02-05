#ifndef SCALARCONVERTER.HPP
# define SCALARCONVERTER.HPP

#include <string>
#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter &cpy);
		ScalarConverter & operator = (ScalarConverter &src);
			//METHODS
		static int findWhiteSpaces(std::string literal);
		static int Identifier(std::string literal);
	public:
			//METHODS
		static void convert(std::string literal);

};

#endif