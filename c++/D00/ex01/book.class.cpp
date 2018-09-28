/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:26:36 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 19:26:40 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "book.class.hpp"

Book::Book(void)
{
	int i;

	i = -1;
	while (++i < 8)
		this->_books[i] = NULL;
	return ;
}

Book::~Book( void )
{
	return ;
}

void	Book::add(Contact *address)
{
	int i;
	i = 0;
	while (i < 8)
	{
		if (this->_books[i] == NULL)
		{
			this->_books[i] = address;
			return;
		}
		i++;
	}
	std::cout << "Too many contacts!" << std::endl;
}

std::string	Book::_correct_len(std::string entry)
{
	std::string tmp;

	if (entry.length() > 10)
	{
		tmp = entry.substr(0, 10);
		tmp.replace(9, 1, ".");
	}
	else
		tmp = entry;
	return (tmp);
}

void	Book::search_print(void)
{
	int 		i;
	i = 0;
	std::cout << std::right;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << std::endl;
	while(this->_books[i] != NULL && i < 8)
	{
		std::cout << std::right;
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << this->_correct_len(this->_books[i]->getfname());
		std::cout << "|";
		std::cout << std::setw(10) << this->_correct_len(this->_books[i]->getlname());
		std::cout << "|";
		std::cout << std::setw(10) << this->_correct_len(this->_books[i]->getnickname());
		std::cout << std::endl;
		i++;
	}
	this->_prompt_user();
}

void	Book::_prompt_user(void)
{
	std::string index;
	int			num_id;

	std::cout << "Please Enter Index: ";
	std::getline (std::cin, index);
	if (std::isdigit(index[0]))
		num_id = std::stoi(index);
	if (std::isalnum(index[0]) && num_id >= 0 && num_id < 8 && _books[num_id] != NULL)
		_books[num_id]->print_all();
	else
		std::cout << "Incorrect Index" << std::endl;
}

void	Book::exit(void)
{
	return;
}