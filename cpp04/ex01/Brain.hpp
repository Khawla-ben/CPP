/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:33:32 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/03 16:16:07 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class  Brain
{
private:

	std::string ideas[100];

public:

	Brain();

	Brain(const Brain &val);
	Brain &operator=(const Brain &a);


	~Brain();
};