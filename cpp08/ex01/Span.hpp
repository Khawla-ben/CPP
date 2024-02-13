/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:11:51 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/13 22:07:11 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class  Span
{
private :
    unsigned int N;
    std::vector<int> myVector;
public:

	Span();
	Span(unsigned int N);
    Span(const Span &a);
	Span &operator=(const Span &a);
    
    unsigned int getN();
    std::vector<int> getvec();

	void addNumber(unsigned int number);
    void addrange(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int shortestSpan();
    int longestSpan();
    
	~Span();
};
