/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:47 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/19 16:46:57 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Account.hpp"
Account::Account(void)
{
	std::cout << "Constructor called" << std::endl;
}

Account::~Account(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

static int	getNbAccounts( void )
{
	
}

static int	getTotalAmount( void )
{
	
}

static int	getNbDeposits( void )
{
	
}

static int	getNbWithdrawals( void )
{
	
}

static void	displayAccountsInfos( void )
{
	
}

void	makeDeposit( int deposit )
{
	
}

bool	makeWithdrawal( int withdrawal )
{
	
}

int		checkAmount( void ) const
{
	
}

void	displayStatus( void ) const
{
	
}