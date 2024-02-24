/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:46:38 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/24 00:30:37 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>
void easyfind(T containner, int to_find)
{
    typename T::iterator it  = std::find(containner.begin(), containner.end(), to_find);
    if (it != containner.end())
        std::cout << "I found it !!\n";
    else
        throw std::out_of_range("OOPS !! I didn't found it");
}
