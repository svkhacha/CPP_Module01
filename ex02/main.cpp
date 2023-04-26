/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:18:06 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:18:13 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

int	main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout<<"The memory address of the string variable is\t"<<GREEN<<&string<<RESET;
	std::cout<<std::endl;
	std::cout<<"The memory address held by stringPTR is\t\t"<<CYAN<<stringPTR<<RESET;
	std::cout<<std::endl;
	std::cout<<"The memory address held by stringREF is\t\t"<<YELLOW<<&stringREF<<RESET;
	std::cout<<std::endl<<std::endl;

	std::cout<<"The value of the string variable is\t\t"<<GREEN<<string<<RESET;
	std::cout<<std::endl;
	std::cout<<"The value pointed to by stringPTR is\t\t"<<CYAN<<*stringPTR<<RESET;
	std::cout<<std::endl;
	std::cout<<"The value pointed to by stringREF is\t\t"<<YELLOW<<stringREF<<RESET;
	std::cout<<std::endl;
	return 0;
}
