/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:04:12 by busseven          #+#    #+#             */
/*   Updated: 2026/08/18 10:44:57 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iterator>
#include "exceptions.hpp"

template< typename T >
typename T::iterator	easyfind(T &cont, int i)
{
	typename T::iterator iter;

	iter = std::find(cont.begin(), cont.end(), i);
	if(iter == cont.end())
		throw NotFoundException();
	return(iter);
}