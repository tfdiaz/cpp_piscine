/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:33:01 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 17:33:04 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

void	randomChump(ZombieEvent *z_event)
{
	Zombie *z_rand;
	std::srand(std::time(nullptr));
	std::string randname;
	static char const pool[] =
	"aeoui"
	"dtrmnkcs";

	for(int i = 0; i < 5; i++)
		randname += pool[std::rand() % (sizeof(pool) - 1)];
	z_rand = z_event->newZombie(randname);
	z_rand->announce();
	delete z_rand;
}

int main()
{
	ZombieEvent *z_event = new ZombieEvent(1);
	randomChump(z_event);
	delete z_event;
}
