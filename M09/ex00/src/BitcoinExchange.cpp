#include "BitcoinExchange.hpp"


 // BitcoinExchange 
double BitcoinExchange::retrieve_exchange_rate(std::string &exchange_rate_str)
{
	char *endptr = 0;
	
	trimstr(exchange_rate_str);
	double exchange_rate = std::strtod(exchange_rate_str.c_str(), &endptr);
	if (*endptr != 0)
		throw std::invalid_argument("bad input => " + exchange_rate_str);
	if (exchange_rate > 1000)
		throw std::invalid_argument("too large a number.");
	if (exchange_rate < 0)
		throw std::invalid_argument("not a positive number.");
	return exchange_rate;
}

double BitcoinExchange::retrieve_dbexchange_rate(std::string &dbexchange_rate_str)
{
	char *endptr = 0;
	
	trimstr(dbexchange_rate_str);
	double exchange_rate = std::strtod(dbexchange_rate_str.c_str(), &endptr);
	if (*endptr != 0)
		throw std::invalid_argument("bad input => " + dbexchange_rate_str);
	if (exchange_rate < 0)
		throw std::invalid_argument("not a positive number.");
	return exchange_rate;
}


BitcoinExchange::BitcoinExchange(std::istream& db_csv)
{
	std::string line;

	std::getline(db_csv, line);
	if (line != "date,exchange_rate")
		throw std::invalid_argument("Invalid or messing Header" + line);

	while (std::getline(db_csv, line))
	{
		std::stringstream ss(line);
		std::string date_str, exchange_rate_str;

		std::getline(ss, date_str, ',');
		std::getline(ss, exchange_rate_str, ',');
		if(ss.eof() == false)
			throw std::invalid_argument("bad input => " + line);

		this->exchange_rate_DB[Ymd(date_str)] = retrieve_dbexchange_rate(exchange_rate_str);
		ss.clear();
		date_str.clear();
		exchange_rate_str.clear();
	}
	db_csv.clear();
}

void BitcoinExchange::exchange(Ymd& key_date, double& amount)
{
	double rate = 0;
	if(this->exchange_rate_DB.empty())
		throw std::invalid_argument("empty database.");

	if (this->exchange_rate_DB.find(key_date) == this->exchange_rate_DB.end())
	{
		for(std::map<Ymd, double>::iterator it = this->exchange_rate_DB.begin(); it != this->exchange_rate_DB.end(); it++)
		{
			if (it->first < key_date)
				rate = it->second;
			else
				break;
		}
	}
	else 
		rate = this->exchange_rate_DB.at(key_date);
	std::cout << key_date << " => " << amount << " = " << amount * rate << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		this->exchange_rate_DB = other.exchange_rate_DB;
	return *this;
}


// Ymd

Ymd::Ymd()
{
	this->year = 1;
	this->month = 1;
	this->day = 1;
}

Ymd::Ymd(std::string date)
{
		trimstr(date);

		std::stringstream ss(date);
		std::string s_year, s_month, s_day;

		std::getline(ss, s_year, '-');
		std::getline(ss, s_month, '-');
		std::getline(ss, s_day, '-');

		if (ss.eof() == false)
			throw std::invalid_argument("bad input => " + date);

		char *endptr = 0;

		this->year = std::strtol(s_year.c_str(), &endptr, 10);
		if (*endptr != 0)
			throw std::invalid_argument("bad input => " + date);

		endptr = 0;
		this->month = std::strtol(s_month.c_str(), &endptr, 10);
		if (*endptr != 0)
			throw std::invalid_argument("bad input => " + date);

		endptr = 0;
		this->day = std::strtol(s_day.c_str(), &endptr, 10);
		if (*endptr != 0)
			throw std::invalid_argument("bad input => " + date);

		if (year < 0 || this->month < 1 || this->day < 1 || day > 31 || month > 12)
			throw std::invalid_argument("bad input => " + date);
		if (year < 2009)
			throw std::invalid_argument("bitcoin wasn't created until 2009!  => " + date);
}

Ymd::Ymd(const Ymd& other)
{
	*this = other;
}

Ymd& Ymd::operator=(const Ymd& other)
{
	this->year = other.year;
	this->month = other.month;
	this->day = other.day;
	return *this;
}

bool Ymd::operator<(const Ymd& other) const
{
	if (this->year < other.year)
		return true;
	else if (this->year > other.year)
		return false;
	if (this->month < other.month)
		return true;
	else if (this->month > other.month)
		return false;
	return this->day < other.day;
}


Ymd::~Ymd()
{
}



// othrers
std::ostream& operator<<(std::ostream& os, const Ymd& date)
{
	os << std::setfill('0')
	<< std::setw(4) << date.year << "-" 
	<< std::setw(2) <<  date.month << "-"
	<< std::setw(2) << date.day;
	return os;
}

void trimstr(std::string& str)
{
	std::string::iterator it = str.begin();
	while (it != str.end() && std::isspace(*it))
		it++;
	str.erase(str.begin(), it);
	it = str.end() - 1;
	while (it != str.begin() && std::isspace(*it))
		it--;
	str.erase(it + 1, str.end());
}
