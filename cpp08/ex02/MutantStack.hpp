/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:21:39 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/13 21:22:19 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <vector>

class  MutantStack
{
private :
    
public:

	MutantStack();
    MutantStack(const MutantStack &a);
	MutantStack &operator=(const MutantStack &a);
    
    
	~MutantStack();
};