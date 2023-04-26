/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:13:37 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:13:49 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	// zombie has been creted in stack
	randomChump("Foo_stack");

	//zombie has been created in heap
	Zombie* z  = newZombie("Foo_heap");
	z->announce();
	delete z;
	return 0;
}
