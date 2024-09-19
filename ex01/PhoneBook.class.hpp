/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:40:16 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/19 15:58:33 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.class.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void printContacts() const;
	void ADD(const Contact& contact);
    void SEARCH() const;
    void EXIT() const;
private:
	Contact	_contacts[8];
	int		_nbContact;
	int		_lastIndex;
};
#endif