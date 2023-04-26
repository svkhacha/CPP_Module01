/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:21:49 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:21:58 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RED     "\x1b[31m"
# define RESET   "\x1b[0m"

class Replace
{
    public:
        Replace(std::string fileName, std::string s1, std::string s2);
        void replaceContent(void);

    private:
        std::string     _fileName;
        std::string     _s1;
        std::string     _s2;
        std::ifstream   _inFile;
        std::ofstream   _outFile;
};

#endif
