/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:13:47 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/31 17:06:43 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
template <typename T>
class Array
{
private:
	T *A;
	unsigned int size;
public:
	Array()
	 : size(0)
	{
	   A = new T[size];
	}
	Array(unsigned int n)
	{
	   A = new T[n];
	   this->size = n;
	   for(unsigned int i = 0; i < n; i++)
    	{
    	    A[i] = T();
    	}
	}
	Array(const Array<T> &_Array)
	{
		this->size = _Array.size;
		this->A = new T[this->size];
		for(unsigned int i = 0; i < this->size; i++)
			this->A[i] = _Array.A[i];
	}
	
    Array<T> &operator= (const Array<T> &_Array)
	{
		if(this->A)
			delete [] this->A;
		this->size = _Array.size;
		this->A = new T[this->size];
		for(unsigned int i = 0; i < this->size; i++)
			this->A[i] = _Array.A[i];
		return *this;
	}
	
    T &operator[](unsigned int num)
	{
		if (num >= this->size)
			throw std::out_of_range("OUT OF RANGE!!");
		return this->A[num];
	}

	int &getSize()
	{
		return(this->size);
	}

};
