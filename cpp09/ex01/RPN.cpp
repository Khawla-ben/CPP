/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:19:24 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 21:03:25 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(){}

Rpn::Rpn(const std::string &input)
{
    for(size_t i = 0; i < input.size(); i++)
    {
        if (input[i] != '+' && input[i] != '-' && input[i] != '/' && input[i] != '*' && input[i] != ' ' && !isdigit(input[i]))
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        else if (isdigit(input[i]))
            num_stack.push(input[i] - 48);
        else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
        {
            val2 = num_stack.top();
            num_stack.pop();
            val1 = num_stack.top();
            num_stack.pop();
            if (input[i] == '+')
                num_stack.push(val1 + val2);
            else if (input[i] == '-')
                num_stack.push(val1 - val2);
            else if (input[i] == '*')
                num_stack.push(val1 * val2);
            else if (input[i] == '/')
            {
                if (val2 == 0)
                {
                    std::cout << "Impossible to divise by 0.\n";
                    return;
                }
                num_stack.push(val1 / val2);
            }
        }
    }
    std::cout << num_stack.top() << std::endl;
}

Rpn::Rpn(const Rpn &val)
{
	*this = val;
}

Rpn &Rpn::operator=(const Rpn &a)
{
	if (this != &a)
	{
		this->val1 = a.val1;
		this->val2 = a.val2;
        this->num_stack = a.num_stack;
	}
	return *this;
}

Rpn::~Rpn(){}

