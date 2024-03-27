/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:36 by nuno              #+#    #+#             */
/*   Updated: 2024/03/13 19:38:02 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {

	srand(time(0));
	int num = rand() % 3;
	std::cout << "Random number: " << num << std::endl;
	if (num == 0)
		return(new A);
	else if (num == 1)
		return(new B);
	else
		return(new C);

}

void identify(Base* p) {
	A * a = dynamic_cast<A*>(p);
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "P pointer points to instance of A class" << std::endl;
	else if (b)
		std::cout << "P pointer points to instance of B class" << std::endl;
	else if (c)
		std::cout << "P pointer points to instance of C class" << std::endl;

}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "Checking using reference for type A" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Not type A" << std::endl;
		std::cout << "e.what(): " << e.what() << std::endl;
	} try {
		B b = dynamic_cast<B&>(p);
		std::cout << "Checking using reference for type B" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Not type B" << std::endl;
		std::cout << "e.what(): " << e.what() << std::endl;
	} try {
		C c = dynamic_cast<C&>(p);
		std::cout << "Checking using reference for type C" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Not type C" << std::endl;
		std::cout << "e.what(): " << e.what() << std::endl;
	}
}

int main() {
	Base *ptr = generate();
	identify(ptr);
	delete(ptr);
	ptr = generate();
	identify(*ptr);
	delete ptr;
}