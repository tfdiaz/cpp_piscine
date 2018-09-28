/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 13:46:55 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 13:46:56 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::setfoo(int x)
{
	std::cout << "Private Foo set" << std::endl;
	this->_privateFoo = x;
}

int		Sample::getfoo(void) const
{
	std::cout << "Private Foo returned" << std::endl;
	return (this->_privateFoo);
}

int		Sample::compare(Sample *other) const
{
	if (this->_privateFoo < other->_privateFoo)
		return (-1);
	if (this->_privateFoo < other->_privateFoo)
		return (1);
	return (0);
}