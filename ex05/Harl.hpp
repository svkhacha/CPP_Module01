/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:24:01 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:24:08 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define	HARL_HPP

#include <iostream>
#include <string>

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RED     "\x1b[31m"
# define RESET   "\x1b[0m"

class Harl
{
	public:
		Harl() {};
		~Harl() {};
		void	complain(std::string level);
		
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};

#endif
