/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:08 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/20 15:25:06 by gchamore         ###   ########.fr       */
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
		if (!std::getline(std::cin, cmd)) 
				return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);
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
			for (size_t i = 0; i < phoneNumber.length(); ++i)
			{
				if (!std::isdigit(phoneNumber[i]) && phoneNumber[i])
				{
					std::cout << "Non-digit character found: " << phoneNumber[i] << std::endl;
					std::cout << "Enter phone number = " << std::flush;
					if (!std::getline(std::cin, phoneNumber))
						return(std::cout << std::endl << "End of input detected. Exiting..." << std::endl, 0);
					i = 0;
				}
			}
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
            std::cout << std::endl << "Invalid input, please try again." << std::endl;
	}
    return 0;
}