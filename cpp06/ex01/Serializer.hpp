/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:58:40 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 16:13:03 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

typedef struct Data
{
	int num;
}	t_Data;

class  Serializer
{
private :
	Serializer();
public:

	Serializer(const Serializer &val);
	Serializer &operator=(const Serializer &a);

	static uintptr_t serializer(Data* ptr);
	static Data* deserializer(uintptr_t raw);
	
	~Serializer();
};
