/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:42 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:17:47 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char** argv)
{
	if (argc != 3)
	{
		std::cout<<"❌ ERROR: please, enter valid arguments: sizeof(zombieHorde) and zombiName"<<std::endl;
		return 1;
	}
	else
	{
		Zombie *horde = zombieHorde(atoi(argv[1]), argv[2]);
		for (int i = 0; i < atoi(argv[1]); ++i)
			horde[i].announce();
		delete[] horde;
	}
		return 0;
}
