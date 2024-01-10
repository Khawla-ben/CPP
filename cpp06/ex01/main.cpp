/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:04:18 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 16:21:54 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data khawla;
	khawla.num = 5;
	Data *a = Serializer::deserializer(Serializer::serializer(&khawla));
	std::cout << khawla.num << std::endl <<  a->num;
}