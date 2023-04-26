/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:19:15 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:19:23 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
    std::cout<<"Ctor with parameters called for Weapon"<<std::endl;
}

Weapon::~Weapon() { std::cout<<"Dctor called for Weapon"<<std::endl; }

void    Weapon::setType(const std::string& type) { _type = type; }

const std::string& Weapon::getType(void) { return _type; }

