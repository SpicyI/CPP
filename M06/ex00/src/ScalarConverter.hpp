#pragma once 


#include <iostream>
#include <cctype>
#include <exception>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
#include <cstdlib>

class ScalarConverter
{
private:
	static char _c;
	static int	_i;
	static float _f;
	static double	_d;
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	~ScalarConverter();
public:
	void operator=(const ScalarConverter &other);
	static void  convert(std::string const &data);
	static int  is_char(std::string const &data);
	static int is_int(std::string const &data);
	static int is_float(std::string const &data);
	static int is_double(std::string const &data);
};

bool is_anumber(const std::string &str);
bool is_afloatnbr(const std::string &data);
bool is_adoublenbr(const std::string &data);

 