/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:24:17 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:24:25 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	std::string	argument;
	
	while(1)
	{
		std::cout<<"👋 Hello, I am Harl !"<<std::endl;
		std::cout<<"Please, enter one of this commands (";
		std::cout<<CYAN<<"DEBUG, "<<RESET;
		std::cout<<GREEN<<"INFO, "<<RESET;
		std::cout<<YELLOW<<"WARNING, "<<RESET;
		std::cout<<RED<<"ERROR, "<<RESET;
		std::cout<<"or EXIT)"<<std::endl;
		getline(std::cin, argument);
		if (argument.compare("EXIT") == 0 || std::cin.eof())
			return 0;
		harl.complain(argument);
	}
	return 0;
}
