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
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif