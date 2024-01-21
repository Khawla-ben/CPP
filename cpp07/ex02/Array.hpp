/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:13:47 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/20 06:00:19 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array
{
private:
	T *A;
	unsigned int size;
public:
	Array()
	 : size(1)
	{
	   A = new T[size];//1
	}
	Array(unsigned int n)
	{
	   A = new T[n];
	   for(int i = 0; i < n; i++)
    	{
    	    A[i] = T();
    	}
	}
	Array(const Array<T> &_Array);
    Array<T> &operator= (const Array<T> &_Array)
	{
		
	}
	
	

};
