/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:32:37 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 19:32:39 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void)
{
	this->set_all();
}

void Contact::set_all(void)
{
	std::cout << "\033[2J\n\033[H";
	std::cout << "Enter First Name: ";
	std::getline (std::cin, Contact::_first_name);

	std::cout << "Enter Last Name: ";
	std::getline (std::cin, Contact::_last_name);

	std::cout << "Enter Nickname: ";
	std::getline (std::cin, Contact::_nick_name);

	std::cout << "Enter Login: ";
	std::getline (std::cin, Contact::_login);

	std::cout << "Enter Postal Address: ";
	std::getline (std::cin, Contact::_postal);

	std::cout << "Enter Email: ";
	std::getline (std::cin, Contact::_email);

	std::cout << "Enter Phone Number (XXX-XXX-XXXX): ";
	std::getline (std::cin, Contact::_phone_number);

	std::cout << "Enter Birthday (MM/DD/YYYY): ";
	std::getline (std::cin, Contact::_birthday);

	std::cout << "Enter Favorite Meal: ";
	std::getline (std::cin, Contact::_favorite_meal);

	std::cout << "Enter Underwear Color: ";
	std::getline (std::cin, Contact::_under_color);

	std::cout << "Enter Darkest Secret: ";
	std::getline (std::cin, Contact::_darkest_s);
}

void Contact::print_all(void)
{
	std::cout << "First Name:\t\t" << this->getfname() << std::endl;
	std::cout << "Last Name:\t\t" << this->getlname() << std::endl;
	std::cout << "Login:\t\t\t" << this->getlogin() << std::endl;
	std::cout << "Postal:\t\t\t" << this->getpostal() << std::endl;
	std::cout << "Email:\t\t\t" << this->getemail() << std::endl;
	std::cout << "Phone:\t\t\t" << this->getphone() << std::endl;
	std::cout << "Birthday:\t\t" << this->getbirth() << std::endl;
	std::cout << "Favorite Meal:\t\t" << this->getmeal() << std::endl;
	std::cout << "Underwear Color:\t" << this->getundercl() << std::endl;
	std::cout << "Darkest Secret:\t\t" << this->getdark() << std::endl;
}

Contact::~Contact(void)
{
	std::cout << _last_name << ", " << _first_name << ": Contact Erased"
		<< std::endl;
}

std::string Contact::getfname(void) const
{
	return (this->_first_name);
}

std::string Contact::getlname(void) const
{
	return (this->_last_name);
}

std::string Contact::getnickname(void) const
{
	return (this->_nick_name);
}

std::string Contact::getlogin(void) const
{
	return (this->_login);
}

std::string Contact::getpostal(void) const
{
	return (this->_postal);
}

std::string Contact::getemail(void) const
{
	return (this->_email);
}

std::string Contact::getphone(void) const
{
	return (this->_phone_number);
}

std::string Contact::getbirth(void) const
{
	return (this->_birthday);
}

std::string Contact::getmeal(void) const
{
	return (this->_favorite_meal);
}

std::string Contact::getundercl(void) const
{
	return (this->_under_color);
}

std::string Contact::getdark(void) const
{
	return (this->_darkest_s);
}
