/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:41:25 by nuno              #+#    #+#             */
/*   Updated: 2024/03/09 23:41:26 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <stdint.h>
# include <string>
# include <iostream>

typedef struct s_data {
	int age;
	std::string name;
} Data;

class Serializer {
private:
	Serializer();
	Serializer( const Serializer& src );
	~Serializer();
	Serializer& operator=( const Serializer& src );
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif