/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:43:56 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 17:43:57 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(int type) : _type(type)
{
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *new_z = new Zombie(_type, name);
	return(new_z);
}
