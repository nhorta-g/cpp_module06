/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:33 by nuno              #+#    #+#             */
/*   Updated: 2024/03/13 17:15:56 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
	std::cout << "Base destructor called. " << std::endl << std::endl;
}

A::A() : identifier('a') {
	std::cout << "A constructor called. " << std::endl;
}

A::~A() {
	std::cout << "A destructor called. " << std::endl;
}

B::B() : identifier('b'){
	std::cout << "B constructor called. " << std::endl;
}

B::~B() {
	std::cout << "B destructor called. " << std::endl;
}

C::C() : identifier('c') {
	std::cout << "C constructor called. " << std::endl;
}

C::~C() {
	std::cout << "C destructor called. " << std::endl;
}
