/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 05:30:04 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/19 06:36:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& value1, T& value2)
{
    T temp = value1;
	value1 = value2;
	value2 = temp;
}

template <typename T>
const T min(T& value1, T& value2)
{
	if(value1 > value2)
        return value2;
    return value1;
}

template <typename T>
const T max(T& value1, T& value2)
{
    if(value1 < value2)
        return value2;
    return value1;
}
