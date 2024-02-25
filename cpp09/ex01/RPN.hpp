/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:19:22 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 12:21:29 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class  Rpn
{
private:
    int val1;
    int val2;
    std::stack<int>num_stack;

public:

	Rpn();
	Rpn(const std::string &input);
	Rpn(const Rpn &val);
	Rpn &operator=(const Rpn &a);
	~Rpn();
};