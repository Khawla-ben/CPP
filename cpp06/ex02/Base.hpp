/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:39:19 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/24 15:54:20 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class  Base
{
public:
	Base *generate(void);
	void identify(Base *p);
	void identify(Base &p);
	
	virtual ~Base();
};
