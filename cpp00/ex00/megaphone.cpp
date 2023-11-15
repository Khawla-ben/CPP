/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:18:01 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/15 11:52:14 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int j;
	char s;
	std::string str;

	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (j < ac)
	{
		i = -1;
		str = av[j];
		while (str[++i])
		{
			if (std::islower(str[i]))
			{
				s = std::toupper(str[i]);
				std::cout << s;
			}
			else
				std::cout << str[i];
		}
		j++;
	}
}
