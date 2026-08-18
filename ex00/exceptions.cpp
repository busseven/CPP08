/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:16:11 by busseven          #+#    #+#             */
/*   Updated: 2026/08/18 11:18:48 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exceptions.hpp"
#include <string>
#include <strstream>

const char *NotFoundException::what() const throw()
{
	return ("Integer not found");
}