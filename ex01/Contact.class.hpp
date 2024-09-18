/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:20 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/18 18:23:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	Contact(void);
	Contact(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber);
	
	 // Méthodes de définition (setters)
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setPhoneNumber(const std::string& phoneNumber);

    // Méthodes d'accès (getters)
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getPhoneNumber() const;
	~Contact(void);
private:
	std::string _firstName;
    std::string _lastName;
    std::string _phoneNumber;
};
#endif