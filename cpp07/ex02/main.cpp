/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:13:49 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/01 22:25:39 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <Array.hpp>


int main(int, char**)
{
    Array<int> *tmp = new Array<int>();
    std::cout << tmp->getSize() << std::endl;
    // delete tmp;
    Array<int> tmp2(10);
    std::cout << tmp2.getSize() << std::endl;
    try
    {
        tmp2[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}