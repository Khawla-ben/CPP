/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:35:03 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/02 15:07:10 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <forward_list>
#include <list>


int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    int to_find = 3;
    easyfind(vec, to_find);
    
    std::cout << "******************" << std::endl;
    
    std::deque<int> deq;
    deq.push_back(10);
    deq.push_front(20);
    deq.push_back(30);
    deq.push_front(15);
    easyfind(deq, to_find);
    
    std::cout << "******************" << std::endl;
    
    int array_to_initialise[] = {1, 2, 3};
    std::forward_list<int> f_list;
    for (size_t i = 0; i < sizeof(array_to_initialise) / sizeof(array_to_initialise[0]); ++i) {
        f_list.push_front(array_to_initialise[i]);
    }
    easyfind(f_list, to_find);
    
    std::cout << "******************" << std::endl;
    
    std::list<int> d_list;
    for (int i = 0; i < 5; ++i) {
        d_list.push_back(i * 2);
    }
    for (std::list<int>::iterator it = d_list.begin(); it != d_list.end(); ++it) 
        std::cout << *it << " ";
    std::cout << std::endl;
    easyfind(d_list, to_find);
    

}