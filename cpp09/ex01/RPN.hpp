/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:19:22 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/26 13:26:38 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class  Rpn
{
private:
	Rpn();
    int val1, val2;
    std::stack<int>num_stack;

public:

	Rpn(const std::string &input);
	Rpn(const Rpn &val);
	Rpn &operator=(const Rpn &a);
	~Rpn();
};