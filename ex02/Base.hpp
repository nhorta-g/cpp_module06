/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:31 by nuno              #+#    #+#             */
/*   Updated: 2024/03/12 12:35:25 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {
	public:
		char identifier;
		A();
		~A();
};

class B : public Base {
	public:
		char identifier;
		B();
		~B();
};

class C : public Base {
	public:
		char identifier;
		C();
		~C();
};

Base * generate(void);
/*
void identify(Base* p);

void identify(Base& p);
*/