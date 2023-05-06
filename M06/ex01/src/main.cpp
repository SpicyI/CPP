#include "Serializer.hpp"

int main(void)
{
	Data  raw = {42 , 13.37f};
	Data* data_ptr;
	uintptr_t carry;

	std::cout << "DATA:\n"
		<<"	-" << raw.temp << std::endl
		<<"	-" << raw.ratio << std::endl;

	std::cout << "\n/ Serializing " << std::endl;
	carry = Serializer::serialize(&raw);

	std::cout << "/ Deserializing " << std::endl;
	data_ptr = Serializer::deserialize(carry);
	if (data_ptr)
	{
		std::cout << "\nDATA:\n"
		<<"	-" << data_ptr->temp << std::endl
		<<"	-" << data_ptr->ratio << std::endl;
	}
	
}