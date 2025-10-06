/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:45:18 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/09/13 12:40:50 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat franco("franco", 12);
        std::cout << franco << std::endl;
        Bureaucrat lmao("lmao", 12);
        std::cout << lmao << std::endl;
        Bureaucrat bufu("bufu", -122);
        std::cout << bufu << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}