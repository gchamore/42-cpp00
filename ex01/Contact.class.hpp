/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:20 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/19 16:14:21 by gchamore         ###   ########.fr       */
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
	Contact(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, const std::string& nickname, const std::string& DarkestSecret);
	
	 // Méthodes de définition (setters)
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setPhoneNumber(const std::string& phoneNumber);
	void setNickname(const std::string& nickname);
	void setDarkestSecret(const std::string& DarkestSecret);

    // Méthodes d'accès (getters)
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getPhoneNumber() const;
	std::string getNickname() const;
	std::string getDarkestSecret() const;
	~Contact(void);
private:
	std::string _firstName;
    std::string _lastName;
    std::string _phoneNumber;
	std::string _nickname;
	std::string _DarkestSecret;
};
#endif