/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:11 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/01 10:24:00 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>

class   PmergeMe
{
private:
	PmergeMe();
	int odd_number, part_int, size;
	long long limit;
	double duree;
	std::clock_t start, end;
	std::vector<int>vec;
	std::vector<std::pair<int, int> > vec_pair;
	std::vector<int>vec_first;
	std::vector<int>vec_second;
	std::vector<long long>vec_jacob;
	std::vector<long long>vec_order_insertion;
	std::vector<int>::iterator low_bound;
	std::deque<int>deq;
	std::deque<std::pair<int, int> > deq_pair;
	std::deque<int>deq_first;
	std::deque<int>deq_second;
	std::deque<long long>deq_jacob;
	std::deque<long long>deq_order_insertion;
	std::deque<int>::iterator low_bound2;
	
public:

	PmergeMe(char **input, int ac);
	PmergeMe(const PmergeMe &val);
	PmergeMe &operator=(const PmergeMe &a);
	~PmergeMe();

	int use_vec(char **input, int ac);
	int check_tmp(const std::string &tmp);
	int get_the_vec(char **input, int ac);
	void fill_vec_jacob_and_vec_insertion();
	void get_vec_pair_and_separate_them();
	void insert_them();
	int use_deque(char **input, int ac);
	int get_the_deq(char **input, int ac);
	void fill_deq_jacob_and_deq_insertion();
	void get_deq_pair_and_separate_them();
	void insert_them_deq();
};
