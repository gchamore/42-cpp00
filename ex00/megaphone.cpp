/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:00:01 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/25 13:47:23 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2)
    {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
	for (int i = 1; av[i]; ++i)
	{
		std::string str = av[i];
		for (std::size_t i = 0; i < str.size(); ++i)
    	    str[i] = std::toupper(str[i]);
		std::cout << str << std::flush;
	}
	std::cout << std::endl;
	return 0;
}