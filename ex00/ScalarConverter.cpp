#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal) {
	int sign = 0;
	int dot = 0;
	int flo = 0;
	size_t len = literal.length();

	if (literal == "inf" || literal == "-inf" || literal == "nan" || literal == "inff" || literal == "-inff" || literal == "nanf") {
		std::cout << "char" << "Impossible" << std::endl;
		std::cout << "int" << "Impossible" << std::endl;
		if (literal == "inf")
			return (void)(std::cout << "Float: " << static_cast<float>(strtod(literal.c_str(), NULL)) << "f\nDouble: inf" << std::endl << std::endl);
		if (literal == "-inf")
			return (void)(std::cout << "Float: " << static_cast<float>(strtod(literal.c_str(), NULL)) << "f\nDouble: -inf" << std::endl << std::endl);
		if (literal == "nan")
			return (void)(std::cout << "Float: " << static_cast<float>(strtod(literal.c_str(), NULL)) << "f\nDouble: nan" << std::endl << std::endl);
		if (literal == "inff")
			return (void)(std::cout << "Float: inff\n" << "Double: " << static_cast<double>(strtof(literal.c_str(), NULL))<< std::endl << std::endl);
		if (literal == "-inff")
			return (void)(std::cout << "Float: -inff\n" << "Double: " << static_cast<double>(strtof(literal.c_str(), NULL))<< std::endl << std::endl);
		if (literal == "nanf")
			return (void)(std::cout << "Float: nanf\n" << "Double: " <<  static_cast<double>(strtof(literal.c_str(), NULL))<< std::endl << std::endl);
		exit(0);
	}

	if (len == 1 && !std::isdigit(literal.at(0))) {		//IS CHAR!!!
		std::cout << std::endl << "CHAR:" << std::endl;
		char c = literal.at(0);
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0f" << std::endl << std::endl;
		exit(0);
	}

	else {												//IS INT FLOAT OR DOUBLE OR SHIIITT
		if (literal.at(len - 1) == 'f')
			flo = 1;
		else if (std::isdigit(literal.at(len -1)))
			flo = 0;
		else {
			std::cerr << "Invalid value. Last character must be a digit or a 'f'." << std::endl;
			exit(0);
		}

		if ((literal.at(0) == '-'))
			sign = -1;
		else if ((literal.at(0) == '+'))
			sign = 1;
		else if (std::isdigit(literal.at(0)))
			sign = 0;
		else {
			std::cerr << "Invalid value. First character must be a digit or a '-' or a '+'." << std::endl;
			exit(0);

		}
		if ((!sign && (literal.at(0) == '.')) || (sign && (literal.at(1) == '.'))) {
			std::cerr << "Invalid value. '.' can't be first character or second if first is the sign." << std::endl;
			exit(0);
		}
		if ((!flo && (literal.at(len - 1) == '.')) || (flo && (literal.at(len - 2) == '.'))) {
			std::cerr << "Invalid value. '.' can't be first character or second if first is the sign." << std::endl;
			exit(0);
		}

		for (size_t i = 0; i < len; i++) {
			if (literal.at(i) == '.') {
				dot++;
				if (dot > 1) {
					std::cerr << "Invalid value. Can't have more than one '.' character." << std::endl;
					exit(0);
				}
			}
			else if (i > 0 && !flo && !std::isdigit(literal.at(i))) {
				std::cerr << "Invalid value. Has to be a digit if not '.' or '+' or '-' or 'f' in correct place." << std::endl;
				exit(0);
			}
		}
	}

	if (!flo && !dot) {						//IS INT!!!
		std::cout  << std::endl << "INT:" << std::endl;
		long test = atol(literal.c_str());
		if (test < std::numeric_limits<int>::min() || test > std::numeric_limits<int>::max()) {
			std::cerr << "Invalid value. Int overflow limits" << std::endl << std::endl;
			exit(0);
		}

		int i = atoi(literal.c_str());
		if (i >= 0 && i < 256 && std::isprint(i))
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(i) << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl << std::endl;
	}

	if (flo && dot) {						//IS FLOAT!!!
		std::cout << std::endl << "FLOAT:" << std::endl;
		float f = strtof(literal.c_str(), NULL);
		if (f == std::numeric_limits<float>::min() || f == std::numeric_limits<float>::max()) {
			std::cerr << "Invalid value. Float over limits" << std::endl;
			exit(0);
		}

		if (f >= 0 && f < 256 && std::isprint(f))
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << static_cast<float>(f) << (static_cast<int>(f) == f ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << (static_cast<int>(f) == f ? ".0" : "") << std::endl << std::endl;
	}

	if (!flo && dot) {						//IS DOUBLE!!!
		std::cout << std::endl << "DOUBLE:" << std::endl;
		double d = strtod(literal.c_str(), NULL);
		if (d == std::numeric_limits<double>::min() || d == std::numeric_limits<double>::max()) {
			std::cerr << "Invalid value. Double over limits" << std::endl;
			exit(0);
		}
		if (d >= 0 && d < 256 && std::isprint(d))
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << (static_cast<int>(d) == d ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << (static_cast<int>(d) == d ? ".0" : "") << std::endl << std::endl;
	}
}