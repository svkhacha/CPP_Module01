/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:22:22 by svkhacha          #+#    #+#             */
/*   Updated: 2023/04/25 16:22:26 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2)
{
    _fileName   = fileName;
    _s1         = s1;
    _s2         = s2;
}

void    Replace::replaceContent(void)
{
    std::string content;
    size_t      position = 0;
    size_t      index = 0;
    std::ifstream   inFile(_fileName.c_str());

    if (!inFile.is_open())
    {
        std::cerr<<RED<<"❌ ERROR: No such file or directory !"<<RESET<<std::endl;
        exit(1);
    }
    if (getline(inFile, content, '\0'))
    {
        std::ofstream outFile((_fileName + ".replace").c_str());
        position = content.find(_s1);
        while (position != std::string::npos)
        {
            outFile<<content.substr(index, position - index);
            outFile<<_s2;
            index = position + _s1.length();
            position = content.find(_s1, position + 1);
        }
        outFile<<content.substr(index);
        outFile.close();
    }
    else
    {
        std::cerr<<RED<<"❌ ERROR: File is empty !"<<RESET<<std::endl;
        inFile.close();
        exit (2);
    }
}
