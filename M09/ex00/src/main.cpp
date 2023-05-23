#include "BitcoinExchange.hpp"

bool validate_input(int ac)
{

	if (ac == 1){
		std::cout << "Error: could not open file." << std::endl;
		return true;
	}
	if (ac > 2){
		std::cout << "Error: too many arguments." << std::endl;
		return true;
	}
	return false;
}

bool init_data(BitcoinExchange &trade, std::ifstream &db_csv ,std::ifstream&input, std::string file_name)
{
	db_csv.open("src/data.csv");
	if(db_csv.bad() || db_csv.fail()){
		std::cout << "Error: could not open data base." << std::endl;
		return false;
	}
	try{
		trade = BitcoinExchange(db_csv);
	}
	catch(const std::exception& e){
		std::cerr <<"Error: " << e.what() << std::endl;
		return false;
	}
	input.open(file_name);
	if(input.bad() || input.fail()){
		std::cout << "Error: could not open file." << std::endl;
		return false;
	}
	return true;

}

int main(int ac , char **av)
{

	if (validate_input(ac))
		return 1;

	std::string line;
	BitcoinExchange trade;
	std::ifstream db_csv,  input;
	
	if (init_data(trade, db_csv, input, av[1]) == false)
		return 1;

	std::getline(input, line);
	if (line != "date | value")
		 std::cout <<"Invalid or messing Header in input file." << std::endl;

	while (std::getline(input, line))
	{
		std::stringstream ss(line);
		std::string date_str, amount;

		std::getline(ss, date_str, '|');
		std::getline(ss, amount, '|');
		// std::cout << amount.size() << std::endl;
		if(ss.eof() == false || date_str.size() != 11 || amount.size() == 0 || amount[0] != ' ')
		{
			 std::cout << "Error: bad input => " + line << std::endl;
			 continue;
		}
		try
		{
			Ymd key_date(date_str);
			double amount_d = trade.retrieve_exchange_rate(amount);
			trade.exchange(key_date, amount_d);
		}
		catch(const std::exception& e)
		{
			std::cerr <<"Error: " << e.what() << std::endl;
		}
		ss.clear();
		date_str.clear();
		amount.clear();
	}
	input.clear();
}