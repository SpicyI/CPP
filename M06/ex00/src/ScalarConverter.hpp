#pragma once 


#include <iostream>
#include <cctype>
#include <exception>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
private:
	static char _c;
	static int	_i;
	static float _f;
	static double	_d;
public:
	static void  convert(std::string const &data);
	static int  is_char(std::string const &data);
	static int is_int(std::string const &data);
	static int is_float(std::string const &data);
	static int is_double(std::string const &data);
	ScalarConverter();
	~ScalarConverter();
};

bool is_anumber(const std::string &str);
bool is_afloatnbr(const std::string &data);
bool is_adoublenbr(const std::string &data);

 