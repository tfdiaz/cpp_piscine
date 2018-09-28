/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:32:30 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 19:32:32 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);
	void		set_all(void);
	void		print_all(void);
	std::string	getfname(void) const;
	std::string	getlname(void) const;
	std::string getnickname(void) const;
	std::string getlogin(void) const;
	std::string getpostal(void) const;
	std::string getemail(void) const;
	std::string getphone(void) const;
	std::string getbirth(void) const;
	std::string getmeal(void) const;
	std::string getundercl(void) const;
	std::string getdark(void) const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _login;
	std::string _postal;
	std::string _email;
	std::string _phone_number;
	std::string _birthday;
	std::string _favorite_meal;
	std::string _under_color;
	std::string _darkest_s;
};

#endif
