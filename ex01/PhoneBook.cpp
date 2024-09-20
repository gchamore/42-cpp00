/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:47:06 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/20 14:36:54 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _nbContact(0), _lastIndex(0) 
{
	std::cout << "constructor 1 called to build the phonebook" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor 1 called" << std::endl;
	return;
}

void PhoneBook::ADD(const Contact& contact)
{
    if (_nbContact < 8)
    {
        _contacts[_nbContact] = contact;
        _nbContact++;
    }
    else
    {
        _contacts[_lastIndex] = contact;
        _lastIndex = (_lastIndex + 1) % 8;
    }
    std::cout << "Contact added successfully!" << std::endl;
}


void PhoneBook::SEARCH() const
{
	std::string	cmd;
	int			index;

	if (_nbContact == 0)
	{
        std::cout << "No contacts available" << std::endl;
    }
	else
	{
		printContacts();
		std::cout << "Which index would you want to get? : " << std::flush;
		while (true)
		{
			if (!std::getline(std::cin, cmd))
			{
				std::cout << "End of input detected. Exiting..." << std::endl;
				return;
			}
			std::stringstream input(cmd);
			if (!(input >> index))
				std::cout << "Invalid input, please enter a valid number." << std::endl;
			else if (index < 1 || index > _nbContact)
				std::cout << "Invalid index, please choose between 1 and " << _nbContact << "." << std::endl;
			else
				break;
		}
		const Contact& contact = _contacts[index - 1];
		std::cout << "Contact details =" << std::endl;
		std::cout << "First Name: " << contact.getFirstName() << std::endl;
		std::cout << "Last Name: " << contact.getLastName() << std::endl;
		std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
		std::cout << "Nickname: " << contact.getNickname() << std::endl;
		std::cout << "DarkestSecret: " << contact.getDarkestSecret() << std::endl;
	}
}

void PhoneBook::EXIT() const
{
    std::cout << std::endl << "Exiting ... " << std::endl;
}

std::string formatString(const std::string &str, unsigned long width = 9)
{
	std::string new_str;
	if (str.length() > width)
	{
		new_str = str.substr(0, width - 1) + ".";
		return new_str;
	}
	else
	{
		new_str = std::string(width - str.length(), ' ') + str;
		return new_str;
	}
}

void PhoneBook::printContacts() const
{
    std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "│     index│first name| last name│  nickname│" << std::endl;
    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;

    for (int i = 0; i < _nbContact; ++i)
	{
        std::cout << "│ " << std::setw(9) << std::right << i + 1 << "│ "
                  << formatString(_contacts[i].getFirstName()) << "│ "
                  << formatString(_contacts[i].getLastName()) << "│ "
                  << formatString(_contacts[i].getNickname()) << "│" << std::endl;
		if (i + 1 != _nbContact)
        	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    }
    std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}