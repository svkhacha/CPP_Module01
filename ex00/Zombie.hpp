/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:05:17 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:05:27 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP
#include <iostream>
#include <string>

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void); 

	private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
