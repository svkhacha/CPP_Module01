/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:16:38 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:16:48 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { std::cout<<GREEN "Zombie has been created !" RESET<<std::endl; }

Zombie::~Zombie() { std::cout<<RED "Zombie has been destroyed !" RESET<<std::endl; }

void	Zombie::setName(std::string name)
{
	_name = name;
	std::cout<<"Zombie named "<<CYAN<<_name<<RESET<<std::endl;
}

void	Zombie::announce() { std::cout<<CYAN<<_name<<RESET ": BraiiiiiiinnnzzzZ..."<<std::endl; }

