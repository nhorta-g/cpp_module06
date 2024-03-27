/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:41:20 by nuno              #+#    #+#             */
/*   Updated: 2024/03/09 23:41:21 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//CONSTRUCTORS

Serializer::Serializer() {}

Serializer::Serializer( const Serializer& src ) {
  *this = src;
}

Serializer::~Serializer() {}

Serializer& Serializer::operator=( const Serializer& src ) {
  if ( this == &src )
    return *this;
  return *this;
}

//STATIC METHODS

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}