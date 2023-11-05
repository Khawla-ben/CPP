/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:18:01 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/05 15:44:42 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int j;
	char s;

	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (j < ac)
	{
		i = -1;
		while (av[j][++i])
		{
			if (std::islower(av[j][i]))
			{
				s = std::toupper(av[j][i]);
				std::cout << s;
			}
			else
				std::cout << av[j][i];
		}
		j++;
	}
}
