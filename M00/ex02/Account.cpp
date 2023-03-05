/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:02:13 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/05 15:55:04 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_diposit)
{
    _accountIndex = getNbAccounts();
    _nbAccounts += 1;
	_amount = initial_diposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _totalAmount += initial_diposit;
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex
            <<";amount:"<< _amount 
            <<";created" << std::endl;
}
Account::~Account(void)
{    
    _nbAccounts -= 1;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex
            <<";amount:"<< _amount 
            <<";closed" << std::endl; 
}

int Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
            <<";total:" << _totalAmount
            <<";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits += 1;
    this->_totalNbDeposits +=1;
    this->_totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex
            << ";p_amount:" << _amount - deposit
            << ";diposite:" << deposit
            <<";amount:"<< _amount 
            <<";nb_diposite:" << _nbDeposits << std::endl; 
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex
            << ";p_amount:" << _amount;
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "withdrawal: refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    this->_totalNbWithdrawals +=1;
    this->_totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal 
        <<";amount:" << _amount
        << ";nb_withdrawals" << _nbWithdrawals << std::endl;
    return true;
    
}

int Account::checkAmount(void) const
{
    return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    std::stringstream time_stamp;
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);
    time_stamp << std::put_time(&tm, "[%F_%T]");
    std::string current_time = time_stamp.str();
    int i = 0;
    while (current_time[i])
    {
        if (current_time[i] == '-' || current_time[i] == ':')
        {
            current_time.erase(i, 1);
            i--;
            continue;
        }
        i++;
    }
    std::cout << current_time << " ";
}