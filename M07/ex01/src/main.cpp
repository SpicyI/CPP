#include "iter.hpp"

int main(void)
{
	const int s = 4;
	int test[s] = {1 , 14, -7, 75};
	std::string test2[s] = {"hello", "there", "scum", "bag"};

	::iter(test, s, printValue<int>);
	::iter(test2, s, printValue<std::string>);
}