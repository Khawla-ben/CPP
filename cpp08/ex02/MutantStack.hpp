/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:21:39 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/15 11:17:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stack>
#include <deque>


template <class T, class V = std::deque<T> >
class  MutantStack : public std::stack<T, V>
{   
public:

	MutantStack();
    MutantStack(const MutantStack &a);
	MutantStack &operator=(const MutantStack &a);

	
	typedef typename V::iterator iterator;
	iterator	begin();
	iterator	end();
	iterator	rebegin();
	iterator	reend();
    
	~MutantStack();
};
#include "MutantStack.tpp"