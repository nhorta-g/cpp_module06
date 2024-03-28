/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:40:40 by nuno              #+#    #+#             */
/*   Updated: 2024/03/28 18:19:04 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <limits>
# include <math.h>
# include <stdlib.h>

class ScalarConverter {
	 private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& src );
		~ScalarConverter();
		ScalarConverter& operator=( const ScalarConverter& src );

		
	public:
		static void convert(std::string literal);
};

#endif