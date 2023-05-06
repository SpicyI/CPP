#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "Data.hpp"

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &other);
	~Serializer();

public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
	void operator=(const Serializer &other);
};
