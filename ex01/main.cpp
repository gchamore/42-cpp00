/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:08 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/18 18:31:14 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
    PhoneBook phoneBook;
	std::string cmd;
	
	while (true)
	{
		std::cout << "Enter a cmd (ADD, SEARCH, EXIT): " << std::endl;
		std::getline(std::cin, cmd);
		
		if (cmd == "ADD")
		{
			std::string firstName, lastName, phoneNumber;
			std::cout << "Enter first name = ..." << std::endl;
			std::getline(std::cin, firstName);
			std::cout << "Enter last name = ..." << std::endl;
			std::getline(std::cin, lastName);
			std::cout << "Enter phone number = ..." << std::endl;
			std::getline(std::cin, phoneNumber);

			Contact newContact(firstName, lastName, phoneNumber);
			phoneBook.ADD(newContact);
		}
		// else if (cmd == "SEARCH")
		// {
        //     phoneBook.SEARCH();
        // } 
		// else if (cmd == "EXIT")
		// {
        //     phoneBook.EXIT(0);
        //     break;
        // }
		// else
		// {
        //     std::cout << "Invalid cmd, please try again." << std::endl;
        // }
    }

    return 0;
}