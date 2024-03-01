/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:11 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/01 09:32:08 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <sstream>

class   PmergeMe
{
private:
	PmergeMe();
	int odd_number;
	int part_int;
	long long limit;
	std::vector<int>vec;
	std::vector<std::pair<int, int> > vec_pair;
	std::vector<int>vec_first;
	std::vector<int>vec_second;
	std::vector<long long>vec_jacob;
	std::vector<long long>vec_order_insertion;
	std::vector<int>::iterator low_bound;

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
	// int use_deque(char **input, int ac);
};
