/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:13:49 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/17 19:22:52 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <Array.hpp>


int main(int, char**)
{
    Array<int> array;
    std::cout << "size of array is " << array.getSize() << std::endl;
    Array<int> array2(10);
    for (int i = 0; i < 10; i++)
		array2[i] = i;
    std::cout << "size of array2 is " << array2.getSize() << std::endl;
    for (int i = 0; i < 10; i++)
		std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
    try
    {
        array2[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        array[3] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        array2[15] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    const Array<int> x;
    try
    {
        x[5];
        x[5] = 5;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}