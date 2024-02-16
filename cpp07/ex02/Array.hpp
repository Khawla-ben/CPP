/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:13:47 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/16 14:19:16 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
template <typename T>
class Array
{
private:
	T *Ar;
	unsigned int size;
public:
	Array() : size(0){
	   Ar = 0;
	}
	Array(unsigned int n)
	{
	   Ar = new T[n];
	   this->size = n;
	   for(unsigned int i = 0; i < n; i++)
    	    Ar[i] = T();
	}
	Array(const Array<T> &_Array)
	{
		this->size = _Array.size;
		if (_Array.Ar == 0)
			this->Ar = 0;
		else
		{
			this->Ar = new T[this->size];
			for(unsigned int i = 0; i < this->size; i++)
				this->Ar[i] = _Array.Ar[i];
		}
	}
	
    Array<T> &operator= (const Array<T> &_Array)
	{
		if(this->Ar)
			delete [] this->Ar;
		this->size = _Array.size;
		if (_Array.Ar == 0)
			this->Ar = 0;
		else
		{
			this->Ar = new T[this->size];
			for(unsigned int i = 0; i < this->size; i++)
				this->Ar[i] = _Array.Ar[i];
		}
		return *this;
	}
	
    T &operator[](unsigned int num)
	{
		if (num >= this->size || num < 0 || this->size == 0)
			throw std::out_of_range("OUT OF RANGE!!");
		return this->Ar[num];
	}

	unsigned int const &getSize() const 
	{
		return(this->size);
	}
	~Array(){
	   delete [] this->Ar;
	}
	
};
