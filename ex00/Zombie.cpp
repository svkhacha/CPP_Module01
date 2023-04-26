/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:11:42 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:12:56 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout<<GREEN "Zombie named "<<_name<<" has been created !" RESET;
	std::cout<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<RED "Zombie named "<<_name<<" has been destroyed !" RESET;
	std::cout<<std::endl;
}

void	Zombie::announce()
{
	std::cout<<CYAN<<_name<<": BraiiiiiiinnnzzzZ..." RESET;
	std::cout<<std::endl;
}
