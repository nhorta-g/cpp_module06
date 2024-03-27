/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:40:22 by nuno              #+#    #+#             */
/*   Updated: 2024/03/09 23:40:23 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		std::cout << " Usage: ./convert <literal>" << std::endl;
	else
			ScalarConverter::convert(av[1]);
	return (0);
}