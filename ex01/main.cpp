/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:08 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/19 16:06:19 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
    PhoneBook phoneBook;
	std::string cmd;
	
	while (true)
	{
		std::cout << std::endl << "Enter a cmd (ADD, SEARCH, EXIT): " << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
            std::cout << "End of input detected. Exiting..." << std::endl;
            break;
        }
		if (cmd == "ADD")
		{
			std::string firstName, lastName, phoneNumber, nickname, darkestSecret;
            std::cout << "Enter first name = " << std::flush;
            if (!std::getline(std::cin, firstName)) 
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);

            std::cout << "Enter last name = " << std::flush;
            if (!std::getline(std::cin, lastName))
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);

            std::cout << "Enter phone number = " << std::flush;
            if (!std::getline(std::cin, phoneNumber))
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);

            std::cout << "Enter nickname = " << std::flush;
            if (!std::getline(std::cin, nickname))
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);

            std::cout << "Enter DarkestSecret = " << std::flush;
            if (!std::getline(std::cin, darkestSecret))
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);
			Contact newContact(firstName, lastName, phoneNumber, nickname, darkestSecret);
			phoneBook.ADD(newContact);
		}
		else if (cmd == "SEARCH")
            phoneBook.SEARCH();
		else if (cmd == "EXIT")
		{
            phoneBook.EXIT();
            return 0;
        }
		else
		{
            std::cout << std::endl << "Invalid input, please try again." << std::endl;
            std::cin.clear();
            continue;
        }
	}
    return 0;
}