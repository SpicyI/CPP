#include "ScalarConverter.hpp"

char ScalarConverter::_c = 0;
int ScalarConverter::_i = 0;
float ScalarConverter::_f = 0;
double ScalarConverter::_d = 0;

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	static_cast<void>(other);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::operator=(const ScalarConverter &other)
{
	static_cast<void>(other);
}

bool is_anumber(const std::string &str)
{
	int i = 0;
	if ((str[i] == '+' || str[i] == '-') && str.length() != 1)
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

bool is_afloatnbr(const std::string &data)
{
	int i = 0;
	int p_count = 0;

	if (data == "nanf" || data == "-inff" || data == "+inff" || data == "inff")
		return true;
	if ((data[i] == '+' || data[i] == '-') && data.length() != 1)
		i++;
	while (data[i] && i + 1 < static_cast<int>(data.size()))
	{
		if (data[i] == '.' && p_count == 0)
		{
			i++;
			p_count++;
			continue;
		}
		if (!isdigit(data[i]))
			return false;
		i++;
	}
	if (data[i] != 'f' || !p_count || data[i - 1] == '.')
		return false;
	return true;
}

bool is_adoublenbr(const std::string &data)
{
	int i = 0;
	int p_count = 0;

	if (data == "nan" || data == "-inf" || data == "+inf" || data == "inf")
		return true;
	if ((data[i] == '+' || data[i] == '-') && data.length() != 1)
		i++;
	while (data[i])
	{
		if (data[i] == '.' && p_count == 0)
		{
			i++;
			p_count++;
			continue;
		}
		if (!isdigit(data[i]))
			return false;
		i++;
	}
	if (data[i - 1] == '.')
		return false;
	return true;
}

int ScalarConverter::is_int(std::string const &data)
{
	if (!is_anumber(data))
		return 0;

	long long test = atol(data.c_str());
	if (test > INT_MAX || test < INT_MIN)
		return (0);
	_i = static_cast<int>(test);
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);

	if (_i > CHAR_MAX || CHAR_MIN > _i)
		std::cout << "char: Impossible" << std::endl;
	else if (!isprint(_c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _c << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << _f << 'f' << std::endl;
	std::cout << "double: " << _d << std::endl;
	return 1;
}

int ScalarConverter::is_double(std::string const &data)
{
	if (!is_adoublenbr(data))
		return 0;

	_d = atof(data.c_str());
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	_c = static_cast<char>(_d);

	if (_d > CHAR_MAX || CHAR_MIN > _d || std::isnan(_d) || std::isinf(_d))
		std::cout << "char: Impossible" << std::endl;
	else if (!isprint(_c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _c << std::endl;
	if (_d > INT_MAX || INT_MIN > _d || std::isnan(_d) || std::isinf(_d))
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	if (std::fmod(_d, 1.0) == 0.0)
		std::cout << std::fixed << std::setprecision(1);
	std::cout << std::fixed << "float: " << _f << 'f' << std::endl;
	std::cout << "double: " << _d << std::endl;
	return 1;
}

int ScalarConverter::is_float(std::string const &data)
{
	if (!is_afloatnbr(data))
		return 0;

	_f = atof(data.c_str());
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);
	_c = static_cast<char>(_f);

	if (_f > CHAR_MAX || CHAR_MIN > _f || std::isnan(_f) || std::isinf(_f))
		std::cout << "char: Impossible" << std::endl;
	else if (!isprint(_c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _c << std::endl;
	if (_f > INT_MAX || INT_MIN > _f || std::isnan(_f) || std::isinf(_f))
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	if (std::fmod(_f, 1.0) == 0.0)
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << _f << 'f' << std::endl;
	std::cout << "double: " << _d << std::endl;
	return 1;
}

int ScalarConverter::is_char(std::string const &data)
{
	if (data.length() == 1)
	{
		_c = data[0];
		_i = static_cast<int>(_c);
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
		if (!isascii(_c))
			std::cout << "char: imposible" << std::endl;
		else if (isprint(_c))
			std::cout << "char: " << _c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		std::cout << "int: " << _i << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << _f << 'f' << std::endl;
		std::cout << "double: " << _d << std::endl;
		return 1;
	}
	return 0;
}

void ScalarConverter::convert(std::string const &data)
{
	if (is_float(data))
		return;
	if (is_int(data))
		return;
	if (is_double(data))
		return;
	if (is_char(data))
		return;
}
