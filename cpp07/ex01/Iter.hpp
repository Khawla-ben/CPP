/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:36:15 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/20 20:53:16 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename U>
void function(U &a)
{
    U j = T();
    a = j;
    std::cout << a << " " ;
}

template <typename T, typename U>
void iter(T &array, int len_array, void (*function)(U&))
{
    for(int i = 0; i < len_array; i++)
        function(array[i]);
}