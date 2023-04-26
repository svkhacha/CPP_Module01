/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:18:52 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:18:59 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RED     "\x1b[31m"
# define RESET   "\x1b[0m"

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        void    setType(const std::string& type);
        const std::string&  getType(void);

    private:
        std::string _type;
};

#endif
