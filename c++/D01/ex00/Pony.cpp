/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:30:18 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 15:30:21 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Pony born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony dead" << std::endl;
}

void Pony::run(void)
{
	std::cout << "Pony run" << std::endl;
}