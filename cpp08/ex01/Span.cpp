/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:11:39 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/13 22:47:51 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0){}

Span::Span(unsigned int N): N(N){}

Span::Span(const Span &a)
{
	*this = a;
}

Span &Span::operator=(const Span &a)
{
    if (this != &a)
	{
	    this->N = a.N;
        this->myVector = a.myVector;
    }
	return *this;
}

unsigned int Span::getN()
{
    return(this->N);
}

std::vector<int> Span::getvec()
{
    return (this->myVector);
}

void Span::addNumber(unsigned int number)
{
    if (this->myVector.size() < N)
        myVector.push_back(number);
    else
        throw std::out_of_range("OUT OF RANGE!!");
}

int Span::shortestSpan()
{
    int min;
    int len = myVector.size();
    if (len <= 1)
        throw std::out_of_range("Vector has only one span or none.");
    else
    {
        std::sort(myVector.begin(), myVector.end());
        min = myVector[len - 1]- myVector[len - 2];
        for(size_t i = len - 1; i > 0; i--)
        {
            int num = myVector[i] - myVector[i -1];
            if (num < min)
                min = num;
        }
    }
    return(min);
}

int Span::longestSpan()
{
    if (this->myVector.size() <= 1)
        throw std::out_of_range("Vector has only one span or none.");
    std::vector<int>::iterator maxElement = std::max_element(myVector.begin(), myVector.end());
    std::vector<int>::iterator minElement = std::min_element(myVector.begin(), myVector.end());
    return(*maxElement - *minElement);
}

void Span::addrange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (this->myVector.size() < N && (end - start) + myVector.size() <= N)
        myVector.insert(myVector.end(), start, end);
    else
        throw std::out_of_range("OUT!!!");
}

Span::~Span(){}
