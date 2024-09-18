/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:00:01 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/18 15:04:43 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string str;
	std::cout << "Hey you can put your sentence, i can do some stuff on it ! :" << std::endl;
	std::getline(std::cin, str);
	for (std::size_t i = 0; i < str.size(); ++i)
        str[i] = std::toupper(str[i]);
	std::cout << "check your sentence now ! : " << std::endl << str << std::endl;
	return 0;
}