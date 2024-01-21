/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:36:26 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/19 23:54:56 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"

int main()
{
    int array[3] = {2, 3, 5};
    // std::cout << "Before : ";
    // for (int i = 0; i < 3; i++)
    //     std::cout << array[i] << " "; 
    // std::cout << std::endl << "After : ";
    iter(array, 3, function<int, int>);
    
    std::cout << "****************" << std::endl;
    
    std::string array2[3] = {"khawla","ben","hammou"};
    // std::cout << "Before : ";
    int len = sizeof(array2)/ sizeof(array2[0]);
    // for (int i = 0; i < len; i++)
    //     std::cout << array2[i] << " ";
    // std::cout << std::endl << "After : ";
    iter(array2, len, function<std::string,std::string>);
    // for (int i = 0; i < len; i++)
    //     std::cout << array2[i] << " ";
    
    return(0);
}