/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:19:27 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 11:22:38 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        return(0);
    }
    Rpn rpn_program(av[1]);
    return (0);
    
}