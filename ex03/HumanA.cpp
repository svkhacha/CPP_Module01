/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:20:13 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:20:21 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout<<"Ctor with parameters called for HumanA"<<std::endl;
}

HumanA::~HumanA() { std::cout<<"Dctor called for HumanA"<<std::endl; }

void HumanA::attack(void)
{
    if (_weapon.getType() != "")
    {
        std::cout<<CYAN<<_name<<RESET<<" attacks with their ";
        std::cout<<GREEN<<_weapon.getType()<<RESET<<std::endl;
    }
    else
    {
        std::cout<<CYAN<<_name<<RESET;
        std::cout<<RED<<" does not have a weapon :("<<RESET<<std::endl;
    }
}
