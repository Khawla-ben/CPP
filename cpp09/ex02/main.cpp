/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:09 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/01 10:34:33 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error" << std::endl;
        return(0);
    }
    PmergeMe pmerge(av, ac);
    return (0);
}