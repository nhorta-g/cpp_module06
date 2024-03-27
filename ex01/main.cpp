/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:41:06 by nuno              #+#    #+#             */
/*   Updated: 2024/03/09 23:41:07 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	// Create a Data object
	Data *data = new Data;

	data->age = 22;
	data->name = "Nuno";
	// Serialize the pointer to the Data object
	uintptr_t serializedPtr = Serializer::serialize(data);

	// Deserialize the serialized pointer
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);

	// Check if deserialized pointer compares equal to the original pointer
	if (deserializedPtr == data) {
		std::cout << "Deserialization successful. Original and deserialized pointers are equal." << std::endl;
		std::cout << "Object age /name: " << deserializedPtr->age << " / " << deserializedPtr->name << std::endl;
	} else {
		std::cerr << "Deserialization failed. Original and deserialized pointers are not equal." << std::endl;
	}

	return 0;
}