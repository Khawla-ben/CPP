/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:51:25 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:26 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>


class  Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string& str);

	void setName(const std::string value);
	void announce(void);

	const std::string& getName()const;

	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);