#include "ScalarConverter.hpp"

	void ScalarConverter::convert(std::string literal) {
		int sign = 0;
		int dot = 0;
		size_t dot_index = 0;
		int flo = 0;
		if (literal.length() == 1 && !std::isdigit(literal.at(0))) {		//IS CHAR!!!
			char c = literal.at(0);
			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c)  << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(c)  << ".0f" << std::endl << std::endl;
		}

		else {																//IS INT FLOAT OR DOUBLE OR SHIIITT
			if (literal.at(literal.length() - 1) == 'f')
				flo = 1;
			else if (std::isdigit(literal.at(literal.length() -1)))
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
			if ((!flo && (literal.at(literal.length() - 1) == '.')) || (flo && (literal.at(literal.length() - 2) == '.'))) {
				std::cerr << "Invalid value. '.' can't be first character or second if first is the sign." << std::endl;
				exit(0);
			}

			for (size_t i = 0; i < literal.length(); i++) {
				if (literal.at(i) == '.') {
					dot_index = i;
					dot++;
					if (dot > 1) {
						std::cerr << "Invalid value. Can't have more than one '.' character." << std::endl;
						exit(0);
					}
			}
				else if (i > 0 && !std::isdigit(literal.at(i))) {
					std::cerr << "Invalid value. Has to be a digit if not '.' or '+' or '-' or 'f' in correct place." << std::endl;
					exit(0);
				}
			}
			(void)dot_index;
		}
		if (!flo && !dot) {						//IS INT!!!
			int _int = atoi(literal.c_str());
			std::cout << "char: " << _int << std::endl;
			std::cout << "int: " << static_cast<int>(_int) << std::endl;
			std::cout << "float: " << static_cast<float>(_int)  << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(_int)  << ".0f" << std::endl << std::endl;
		}
		if (flo && dot) {						//IS FLOT!!!
			float _float = strtof(literal.c_str(), NULL);
			std::cout << "char: " << _float << std::endl;
			std::cout << "int: " << static_cast<int>(_float) << std::endl;
			std::cout << "float: " << static_cast<float>(_float)  << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(_float)  << ".0f" << std::endl << std::endl;
		}
		if (!flo && dot) {						//IS DOUBLE!!!
				double _double = strtod(literal.c_str(), NULL);
				std::cout << "char: " << _double << std::endl;
				std::cout << "int: " << static_cast<int>(_double) << std::endl;
				std::cout << "float: " << static_cast<float>(_double)  << ".0f" << std::endl;
				std::cout << "double: " << static_cast<double>(_double)  << ".0f" << std::endl << std::endl;
		}
	}