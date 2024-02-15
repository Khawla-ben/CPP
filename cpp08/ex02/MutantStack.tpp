/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:51:12 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/15 11:17:38 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T, class V>
MutantStack<T , V>::MutantStack(){}

template <class T, class V>
MutantStack<T , V>::MutantStack(const MutantStack &src): std::stack<T>(src) {}


template <class T, class V>
MutantStack<T , V>	&MutantStack<T , V>::operator=(const MutantStack<T , V> &src)
{
	if (this == &src)
		return *this;
	std::stack<T>::operator=(src);
	return *this;
}

template<class T, class V>
typename MutantStack<T , V>::iterator MutantStack<T, V>::begin()
{
	return this->c.begin();
}

template<typename T, class V>
typename MutantStack<T , V>::iterator MutantStack<T , V>::end()
{
	return this->c.end();
}

template<class T, class V>
typename MutantStack<T , V>::iterator MutantStack<T, V>::rebegin()
{
	return this->c.rebegin();
}

template<typename T, class V>
typename MutantStack<T , V>::iterator MutantStack<T , V>::reend()
{
	return this->c.reend();
}

template <class T, class V>
MutantStack<T , V>::~MutantStack() {}
