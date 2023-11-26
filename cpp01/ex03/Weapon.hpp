/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:53:11 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:53:12 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>


class  Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string& str);
	void setType(const std::string& new_type);

	const std::string& getType()const;

	~Weapon();
};
