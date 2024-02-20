/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:11:44 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/20 19:51:10 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include"Span.hpp"

int main()
{
    Span sp = Span(5);
    std::vector<int> a;
    a.push_back(17);
    a.push_back(9);
    a.push_back(11);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addrange(a.begin(), a.end());
        std::vector<int> vectooor = sp.getvec();
        for (size_t i= 0; i < vectooor.size(); i++)
            std::cout << vectooor[i] << std::endl;
        std::cout << "The shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "The longest span : " << sp.longestSpan() << std::endl;
        std::cout << "******" << std::endl; 
    }
     catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try {
        Span sp1 = Span(1);
        sp1.addNumber(6);
        std::cout << sp1.longestSpan() << std::endl;//only one
    }
     catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try {
        std::cout << "******" << std::endl;
        sp.addNumber(6);
    }
     catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}