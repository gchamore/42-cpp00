/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:47:08 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/19 16:29:42 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, const std::string& nickname, const std::string& DarkestSecret)
    : _firstName(firstName), _lastName(lastName), _phoneNumber(phoneNumber), _nickname(nickname), _DarkestSecret(DarkestSecret)
{
    std::cout << "Constructor 2 called for a new contact" << std::endl;
}

Contact::Contact(void)
{
	std::cout << "constructor 3 called to create the all slots in contact tab" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor 2 ou 3 called" << std::endl;
	return;
}

// Méthodes de définition
void Contact::setFirstName(const std::string& firstName)
{
    _firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
    _lastName = lastName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void Contact::setNickname(const std::string& nickname)
{
    _nickname = nickname;
}

void Contact::setDarkestSecret(const std::string& DarkestSecret)
{
    _DarkestSecret = DarkestSecret;
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

std::string Contact::getNickname() const
{
    return _nickname;
}

std::string Contact::getDarkestSecret() const
{
    return _DarkestSecret;
}