/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:22:40 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:22:48 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout<<RED<<"❌ ERROR: Please enter valid arguments !"<<std::endl;
        std::cout<<CYAN<<"filename --> "<<RESET<<"argv[1]"<<std::endl;
        std::cout<<CYAN<<"s1       --> "<<RESET<<"argv[2]"<<std::endl;
        std::cout<<CYAN<<"s2       --> "<<RESET<<"argv[3]"<<std::endl;
        return 1;
    }
    Replace re(argv[1], argv[2], argv[3]);
    re.replaceContent();
    return 0;
}
