#include "iter.hpp"

int main(void)
{
	const int s = 4;
	const int test[s] = {1 , 14, -7, 75};
	const std::string test2[s] = {"hello", "there", "scum", "bag"};

	::iter(test, s, printValue<int>);
	::iter(test2, s, printValue<std::string>);
}