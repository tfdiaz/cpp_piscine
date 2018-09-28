/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:26:19 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 19:26:23 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.class.hpp"
#include "contact.class.hpp"

int main(void)
{
	std::string command;
	Book phone_book;
	Contact *arr[8];

	int i = 0;
	std::cout << "\033[2J\n\033[H";
	while (command != "EXIT" )
	{
		std::cout << "Enter command: ";
		std::getline (std::cin, command);
		if (command == "ADD")
		{				
			if (i < 8)
			{
				arr[i] = new Contact;
				phone_book.add(arr[i]);
			}
			else
				std::cout << "TOO MANY CONTACTS" << std::endl;
			i++;
		}
		else if (command == "SEARCH")
		{
			std::cout << "\033[2J\n\033[H";
			phone_book.search_print();
		}
		else if (command != "EXIT")
			std::cout << "Invaild Command\nTry <ADD> <SEARCH> <EXIT>" << std::endl;
	}
	std::cout << "\033[2J\n\033[H";
}
