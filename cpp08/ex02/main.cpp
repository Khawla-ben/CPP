/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:20:15 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/20 20:50:00 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "**************\n";
    
    MutantStack<int, std::vector<int> > mstack2;
    mstack2.push(5);
    mstack2.push(17);
    std::cout << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << mstack2.size() << std::endl;
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    mstack2.push(0);
    MutantStack<int, std::vector<int> >::iterator it2 = mstack2.begin();
    MutantStack<int, std::vector<int> >::iterator ite2 = mstack2.end();
    it2 = mstack2.begin();
    ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    
    std::cout << "**************\n";
    
    MutantStack<int, std::list<int> > mstack3;
    mstack3.push(5);
    mstack3.push(17);
    std::cout << mstack3.top() << std::endl;
    mstack3.pop();
    std::cout << mstack3.size() << std::endl;
    mstack3.push(3);
    mstack3.push(5);
    mstack3.push(737);
    mstack3.push(0);
    MutantStack<int, std::list<int> >::iterator it3 = mstack3.begin();
    MutantStack<int, std::list<int> >::iterator ite3 = mstack3.end();
    it3 = mstack3.begin();
    ite3 = mstack3.end();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }
}