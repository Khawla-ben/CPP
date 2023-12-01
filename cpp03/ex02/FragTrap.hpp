/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:44:50 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 14:41:41 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"


class  FragTrap : public ClapTrap
{
public:

	FragTrap();
	FragTrap(std::string Name);

	FragTrap(const FragTrap &val);
	FragTrap &operator=(const FragTrap &a);


	void attack(const std::string& target);
	void highFivesGuys(void);

	~FragTrap();
};
