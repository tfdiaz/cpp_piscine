/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:30:38 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 15:30:39 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	std::cout << "Enter ponyOnTheStack" << std::endl;
	Pony sony;

	sony.run();
	std::cout << "Exit ponyOnTheStack\n" << std::endl;
}

void	ponyOnTheHeap(Pony **hony)
{
	std::cout << "Enter ponyOnTheHeap" << std::endl;
	*hony = new Pony;
	std::cout << "Exit ponyOnTheHeap\n" << std::endl;
}
int main(void)
{
	Pony *hony;
	std::string kill;

	ponyOnTheStack();
	std::cout << "My pony dead right?" << std::endl;
	ponyOnTheHeap(&hony);
	std::cout << "My pony still alive" << std::endl;
	hony->run();
	std::cout << "Enter 1: ";
	std::cin >> kill;
	delete hony;
	return (0);
}
