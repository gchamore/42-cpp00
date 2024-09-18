/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:47:08 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/18 18:23:42 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber)
    : _firstName(firstName), _lastName(lastName), _phoneNumber(phoneNumber)
{
    std::cout << "Constructor with parameters called" << std::endl;
}

Contact::Contact(void)
{
	std::cout << "constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// Méthodes de définition
void Contact::setFirstName(const std::string& firstName)
{
    _firstName= firstName;
}

void Contact::setLastName(const std::string& lastName)
{
    _lastName= lastName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
    _phoneNumber= phoneNumber;
}

// Méthodes d'accès
std::string Contact::getFirstName() const
{
    return _firstName;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}