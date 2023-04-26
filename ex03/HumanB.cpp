/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:21:05 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:21:12 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
    std::cout<<"Ctor with parameters called for HumanB"<<std::endl;
}

HumanB::~HumanB() { std::cout<<"Dctor called for HumanB"<<std::endl; }

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

void HumanB::attack(void)
{
    if (_weapon != NULL && _weapon->getType() != "")
    {
        std::cout<<YELLOW<<_name<<RESET<<" attacks with their ";
        std::cout<<GREEN<<_weapon->getType()<<RESET<<std::endl;
    }
    else
    {
        std::cout<<YELLOW<<_name<<RESET;
        std::cout<<RED<<" does not have a weapon :("<<RESET<<std::endl;
    }
}
