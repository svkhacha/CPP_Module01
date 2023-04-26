/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:38 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:23:51 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout<<CYAN<<"I love having extra bacon for my"<<std::endl;
	std::cout<<"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout<<RESET<<std::endl;
}

void	Harl::info()
{
	std::cout<<GREEN<<"I cannot believe adding extra bacon costs more money."<<std::endl;
	std::cout<<"You didn’t put enough bacon in my burger!"<<std::endl;
	std::cout<<"If you did, I wouldn’t be asking for more!"<<RESET<<std::endl;
}

void	Harl::warning()
{
	std::cout<<YELLOW<<"I think I deserve to have some extra bacon for free."<<std::endl;;
	std::cout<<"I’ve been coming for years whereas you started working here since last month.";
	std::cout<<RESET<<std::endl;
}

void	Harl::error()
{
	std::cout<<RED<<"This is unacceptable! I want to speak to the manager now."<<RESET<<std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*function_ptrs[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index = 0;
	for ( ; index <= 4 && level.compare(levels[index]); ++index)
	{
		if (index == 4)
			return ;
	}
	(this->*function_ptrs[index]) ();
}
