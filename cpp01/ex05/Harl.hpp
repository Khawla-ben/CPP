/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:53:31 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:53:32 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>


enum Choice {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};


class  Harl
{
private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	void (Harl::*debugF)(void);
	void (Harl::*infoF)(void);
	void (Harl::*warningF)(void);
	void (Harl::*errorF)(void);

public:
	Harl();

	void complain(std::string level);

	~Harl();
};
