/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:47 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/20 17:18:31 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(const int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_amount += initial_deposit;
	_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(0);
    std::tm* localTime = std::localtime(&now);
    std::cout << "[" 
              << (localTime->tm_year + 1900) 
			  << std::setfill('0') 
			  << std::setw(2) << (localTime->tm_mon + 1) 
              << std::setw(2) << localTime->tm_mday 
			  << "_"
              << std::setw(2) << localTime->tm_hour 
              << std::setw(2) << localTime->tm_min 
              << std::setw(2) << localTime->tm_sec 
              << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
	
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount-deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	if ((_amount-withdrawal) >= 0)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal; 
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount+withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return _amount;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount+withdrawal << ";withdrawal" << ":refused" << std::endl;
	}
	return _amount;
}

int		Account::checkAmount( void ) const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	checkAmount();
}