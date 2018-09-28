/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:44:48 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/27 17:44:52 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

public:

	Zombie(int type, std::string name);
	~Zombie(void);
	int gettype(void) const;
	std::string getname(void) const;
	void announce(void) const;

private:
	int _type;
	std::string _name;
};

#endif
