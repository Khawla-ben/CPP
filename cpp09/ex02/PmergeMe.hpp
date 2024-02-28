/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:11 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/28 15:35:18 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class   PmergeMe
{
private:
	PmergeMe();
	int odd_number;
	size_t limit;
	std::vector<int>vec;
	std::vector<std::pair<int, int> > vec_pair;
	std::vector<int>vec_first;
	std::vector<int>vec_second;
	std::vector<int>vec_jacob;
	std::vector<int>vec_order_insertion;

public:

	PmergeMe(char **input, int ac);
	PmergeMe(const PmergeMe &val);
	PmergeMe &operator=(const PmergeMe &a);
	~PmergeMe();

	int get_the_vec(char **input, int ac);
};
