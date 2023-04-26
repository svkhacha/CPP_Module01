/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:38:30 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:38:40 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv)
{
	Harl	harl;
	std::string	argument = "";
	std::string argumentList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index = 0;
	if (argc > 1)
		argument = argv[1];
	while (index < 4 && argument.compare(argumentList[index]))
		index++;
	switch(index)
	{
		case 0:
			std::cout<<"["<<argumentList[0]<<"]"<<std::endl;
			harl.complain(argumentList[0]);
			std::cout<<std::endl;
		case 1:
			std::cout<<"["<<argumentList[1]<<"]"<<std::endl;
			harl.complain(argumentList[1]);
			std::cout<<std::endl;
		case 2:
			std::cout<<"["<<argumentList[2]<<"]"<<std::endl;
			harl.complain(argumentList[2]);
			std::cout<<std::endl;
		case 3:
			std::cout<<"["<<argumentList[3]<<"]"<<std::endl;
			harl.complain(argumentList[3]);
			break ;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
	}
	return 0;
}
