/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:47:06 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/18 18:41:50 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _nbContact(0), _lastIndex(0) 
{
	std::cout << "constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
  
void PhoneBook::ADD(const Contact& contact)
{
    // Vérification de l'état actuel du PhoneBook
    std::cout << "Current number of contacts: " << _nbContact << std::endl;
    std::cout << "Current last index: " << _lastIndex << std::endl;


    // Vérification de l'ajout dans le tableau
    if (_nbContact < 8)
    {
        std::cout << "Adding contact at index: " << _nbContact << std::endl;
        _contacts[_nbContact] = contact;  // Copie du contact
        _nbContact++;
    }
    else
    {
        std::cout << "Replacing contact at index: " << _lastIndex << std::endl;
        _contacts[_lastIndex] = contact;  // Remplacement circulaire
        _lastIndex = (_lastIndex + 1) % 8;
    }

    std::cout << "Contact added successfully!" << std::endl;
}


void PhoneBook::SEARCH() const
{
    for (int i = 0; i < _nbContact; ++i)
	{
        std::cout << "Contact " << i + 1 << ": " << _contacts[i].getFirstName() 
                  << " " << _contacts[i].getLastName() << std::endl;
    }
}

void PhoneBook::EXIT(int index) const
{
    std::cout << "Exiting with contact index: " << index << std::endl;
}