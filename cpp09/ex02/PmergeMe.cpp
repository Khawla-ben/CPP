/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:13 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/28 16:07:38 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <sstream>

int check_tmp(const std::string &tmp)
{
	for(size_t i = 0; i < tmp.size(); i++)
	{
		if (!isdigit(tmp[i]) && tmp[i] != '+')
			return (1);
		if (tmp[i] == '+' && i != 0)
			return (1);
	}
	return (0);
}

int PmergeMe::get_the_vec(char **input, int ac)
{
	for(int v = 1; v < ac; v++)
	{
		//parsing (should be a positive int)
		std::istringstream inputStream(input[v]);
		std::string tmp;
		while (std::getline(inputStream, tmp, ' '))
		{
			if (tmp != "")
			{
				if (check_tmp(tmp))
				{
					std::cout << "error2\n";
					return(1);
				}
				std::stringstream pa(tmp);
				int part_int;
				pa >> part_int;
				vec.push_back(part_int);
			}
		}
	}
	//check if there is just an element in the vector
	if (vec.size() == 1)
	{
		std::cout << "error3\n";
		return (1);
	}
	return(0);
}

PmergeMe::PmergeMe(char **input, int ac)
{
	odd_number = -1;
	if (get_the_vec(input, ac))
		return;
	//check_if the size of vector is odd
	if (vec.size() % 2 != 0)
	{
		odd_number = vec[vec.size() - 1];
		vec.pop_back();
	}
	//fill the vector pair and sort it in the same time // swap
	for (size_t i= 0; i < vec.size(); i++)
	{
		size_t a = i+1;
		if (vec[i] < vec[a])
			std::swap(vec[i], vec[a]);
		vec_pair.push_back(std::make_pair(vec[i], vec[a]));
		i = a;
	}
	std::sort(vec_pair.begin(),vec_pair.end());
	//sort the pairs and make them in 2 separate vector
	for(size_t j =0; j< vec_pair.size(); j++)
	{
		vec_first.push_back(vec_pair[j].first);
		vec_second.push_back(vec_pair[j].second);
	}
	//push the first elemment of vector_second in the top of vector_first
	vec_first.insert(vec_first.begin(), vec_second[0]);
	vec_second.erase(vec_second.begin());


	//fill the vec_jacob
	vec_jacob.push_back(0);
	vec_jacob.push_back(1);
	for (size_t j = 2 ; j < (vec_second.size() + 2); j++)//
		vec_jacob.push_back(vec_jacob[j-1] + 2 * (vec_jacob[j-2]));
	
	// fill the order insertion
	limit = 1;
	for (size_t i = 2; i < vec_jacob.size(); i++)
	{
		limit = vec_jacob[i];
		if ((i + 1) == vec_jacob.size())
			break;
		for (size_t j =  vec_jacob[i+1]; j > limit; j--)//
			vec_order_insertion.push_back(j);
	}

	//now , we have the order to insert 
	std::vector<int>::iterator low_bound;
	for (size_t i = 0; i < vec_order_insertion.size(); i++)
	{
		int index = vec_order_insertion[i];
		low_bound = std::lower_bound(vec_first.begin(), vec_first.end(), vec_second[index - 2]);//
		vec_first.insert(low_bound , vec_second[index - 2]);
	}
	//don't forget to add the last if it exist
	if (odd_number != -1)
	{
		low_bound = std::lower_bound(vec_first.begin(), vec_first.end(), odd_number);
		vec_first.insert(low_bound , odd_number);
	}

	//print the first vector
	std::cout << "After: ";
	for(size_t j = 0; j< vec_first.size(); j++)
		std::cout << vec_first[j] << " ";
}

PmergeMe::PmergeMe(const PmergeMe &val)
{
	*this = val;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &a)
{
	if (this != &a)
	{
		this->odd_number = a.odd_number;;
		this->limit = a.limit;;
		this->vec = a.vec;;
		this->vec_pair = a.vec_pair;;
		this->vec_first = a.vec_first;;
		this->vec_second = a.vec_second;;
		this->vec_jacob = a.vec_jacob;;
		this->vec_order_insertion = a.vec_order_insertion;;
	}
	return *this;
}

PmergeMe::~PmergeMe(){}