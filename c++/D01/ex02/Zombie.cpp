/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:44:36 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 17:44:40 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(int type, std::string name) : _type(type), _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "The light upon me" << std::endl;
	std::cout << _name << " is dead." << std::endl;
}

std::string Zombie::getname(void) const
{
	return (_name);
}

int		Zombie::gettype(void) const
{
	return (_type);
}

void	Zombie::announce(void) const
{
	std::cout << _name << "(" << _type << ") says 'BRAIN FOR ME PLZ'" << std::endl;
}