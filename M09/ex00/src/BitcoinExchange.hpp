#pragma once
#include <iostream>
#include <exception>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class Ymd
{
private:
	Ymd();
public:
	int year;
	int month;
	int day;

	bool operator<(const Ymd& other) const;
	Ymd& operator=(const Ymd& other);
	Ymd(const Ymd& other);
	Ymd(std::string date);
	~Ymd();
};


class BitcoinExchange
{
private:
	std::map<Ymd, double> exchange_rate_DB;
	double retrieve_dbexchange_rate(std::string &dbexchange_rate_str);
public:
	BitcoinExchange(std::istream& db_csv);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	BitcoinExchange();
	~BitcoinExchange();
	void exchange(Ymd& key_date, double& amount);
	double retrieve_exchange_rate(std::string &exchange_rate_str);
};


std::ostream& operator<<(std::ostream& os, const Ymd& date);
void trimstr(std::string& str);