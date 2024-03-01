/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:13 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/01 10:24:59 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::check_tmp(const std::string &tmp)
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
	odd_number = -1;
	for(int v = 1; v < ac; v++)
	{
		std::istringstream inputStream(input[v]);
		std::string tmp;
		while (std::getline(inputStream, tmp, ' '))
		{
			if (tmp != "")
			{
				if (check_tmp(tmp))
				{
					std::cout << "Error\n";
					return(1);
				}
				std::stringstream pa(tmp);
				pa >> part_int;
				vec.push_back(part_int);
			}
		}
	}
	size = vec.size();
	if (vec.size() == 1)
	{
		std::cout << "Error\n";
		return (1);
	}
	std::cout << "Before: ";
    for (size_t i= 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
	if (vec.size() % 2 != 0)
	{
		odd_number = vec[vec.size() - 1];
		vec.pop_back();
	}
	return(0);
}

int PmergeMe::get_the_deq(char **input, int ac)
{
	for(int v = 1; v < ac; v++)
	{
		std::istringstream inputStream(input[v]);
		std::string tmp;
		while (std::getline(inputStream, tmp, ' '))
		{
			if (tmp != "")
			{
				std::stringstream pa(tmp);
				pa >> part_int;
				deq.push_back(part_int);
			}
		}
	}
	size = deq.size();
	if (deq.size() % 2 != 0)
	{
		odd_number = deq[deq.size() - 1];
		deq.pop_back();
	}
	return(0);
}

void PmergeMe::fill_vec_jacob_and_vec_insertion()
{
	vec_jacob.push_back(0);
	vec_jacob.push_back(1);
	for (size_t j = 1 ; j < (vec_second.size() + 2); j++)
		vec_jacob.push_back(vec_jacob[j] + 2 * (vec_jacob[j - 1]));
	size_t len_jacob = vec_jacob.size();
	for (size_t i = 3; i < len_jacob; i++)
	{
		limit = vec_jacob[i-1];
		
		vec_order_insertion.push_back(vec_jacob[i]);
		for (long long j =  vec_jacob[i] - 1; j > limit; j--)
		{
			vec_order_insertion.push_back(j);
		}
		if (len_jacob <= vec_order_insertion.size())
			return;
	}
}

void PmergeMe::fill_deq_jacob_and_deq_insertion()
{
	deq_jacob.push_back(0);
	deq_jacob.push_back(1);
	for (size_t j = 1 ; j < (deq_second.size() + 2); j++)
		deq_jacob.push_back(deq_jacob[j] + 2 * (deq_jacob[j - 1]));
	size_t len_jacob = deq_jacob.size();
	for (size_t i = 3; i < len_jacob; i++)
	{
		limit = deq_jacob[i-1];
		
		deq_order_insertion.push_back(deq_jacob[i]);
		for (long long j =  deq_jacob[i] - 1; j > limit; j--)
		{
			deq_order_insertion.push_back(j);
		}
		if (len_jacob <= deq_order_insertion.size())
			return;
	}
}

void PmergeMe::get_vec_pair_and_separate_them()
{
	for (size_t i= 0; i < vec.size(); i++)
	{
		size_t a = i+1;
		if (vec[i] < vec[a])
			std::swap(vec[i], vec[a]);
		vec_pair.push_back(std::make_pair(vec[i], vec[a]));
		i = a;
	}
	std::sort(vec_pair.begin(),vec_pair.end());
	for(size_t j =0; j< vec_pair.size(); j++)
	{
		vec_first.push_back(vec_pair[j].first);
		vec_second.push_back(vec_pair[j].second);
	}
	vec_first.insert(vec_first.begin(), vec_second[0]);
	vec_second.erase(vec_second.begin());
}

void PmergeMe::get_deq_pair_and_separate_them()
{
	for (size_t i= 0; i < deq.size(); i++)
	{
		size_t a = i+1;
		if (deq[i] < deq[a])
			std::swap(deq[i], deq[a]);
		deq_pair.push_back(std::make_pair(deq[i], deq[a]));
		i = a;
	}
	std::sort(deq_pair.begin(),deq_pair.end());
	for(size_t j =0; j< deq_pair.size(); j++)
	{
		deq_first.push_back(deq_pair[j].first);
		deq_second.push_back(deq_pair[j].second);
	}
	deq_first.insert(deq_first.begin(), deq_second[0]);
	deq_second.erase(deq_second.begin());
}

void PmergeMe::insert_them()
{
	for (size_t i = 0; i < vec_order_insertion.size(); i++)
	{
		size_t index = vec_order_insertion[i] - 2;
    	if (index > vec_second.size() - 1)
			continue;
		low_bound = std::lower_bound(vec_first.begin(), vec_first.end(), vec_second[index]);
		vec_first.insert(low_bound , vec_second[index]);
	}
	if (odd_number != -1)
	{
		low_bound = std::lower_bound(vec_first.begin(), vec_first.end(), odd_number);
		vec_first.insert(low_bound , odd_number);
	}
}

void PmergeMe::insert_them_deq()
{
	for (size_t i = 0; i < deq_order_insertion.size(); i++)
	{
		size_t index = deq_order_insertion[i] - 2;
    	if (index > deq_second.size() - 1)
			continue;
		low_bound2 = std::lower_bound(deq_first.begin(), deq_first.end(), deq_second[index]);
		deq_first.insert(low_bound2 , deq_second[index]);
	}
	if (odd_number != -1)
	{
		low_bound2 = std::lower_bound(deq_first.begin(), deq_first.end(), odd_number);
		deq_first.insert(low_bound2 , odd_number);
	}
}

int PmergeMe::use_vec(char **input, int ac)
{
	start = std::clock();
	if (get_the_vec(input, ac))
		return (1);
	get_vec_pair_and_separate_them();
	fill_vec_jacob_and_vec_insertion();
	insert_them();
	std::cout << "After:  ";
    for (size_t i= 0; i < vec_first.size(); i++)
        std::cout << vec_first[i] << " ";
    std::cout << std::endl;
	end = std::clock();
	duree = ((end - start) / (double)CLOCKS_PER_SEC) *  1e6;
	std::cout << "Time to process a range of " << size <<  " elements with std::vector" <<  " : " << duree  << " us" << std::endl;
	return (0);
}

int PmergeMe::use_deque(char **input, int ac)
{
	start = std::clock();
	if (get_the_deq(input, ac))
		return (1);
	get_deq_pair_and_separate_them();
	fill_deq_jacob_and_deq_insertion();
	insert_them_deq();
	end = std::clock();
	duree = ((end - start) / (double)CLOCKS_PER_SEC) *  1e6;
	std::cout << "Time to process a range of " << size <<  " elements with std::deque" <<  " : " << duree  << " us";
	return (0);
}

PmergeMe::PmergeMe(char **input, int ac)
{
	if (use_vec(input, ac))
		return;
		
	use_deque(input, ac);
}

PmergeMe::PmergeMe(const PmergeMe &val)
{
	*this = val;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &a)
{
	if (this != &a)
	{
		this->odd_number = a.odd_number;
		this->part_int = a.part_int;
		this->limit = a.limit;
		this->vec = a.vec;
		this->vec_pair = a.vec_pair;
		this->duree = a.duree;
		this->size = a.size;
		this->start = a.start;
		this->end = a.end;
		this->vec_first = a.vec_first;
		this->vec_second = a.vec_second;
		this->vec_jacob = a.vec_jacob;
		this->vec_order_insertion = a.vec_order_insertion;
		this->low_bound = a.low_bound;
		this->deq = a.deq;
		this->deq_pair = a.deq_pair;
		this->deq_first = a.deq_first;
		this->deq_second = a.deq_second;
		this->deq_jacob = a.deq_jacob;
		this->deq_order_insertion = a.deq_order_insertion;
		this->low_bound2 = a.low_bound2;
	}
	return *this;
}

PmergeMe::~PmergeMe(){}
