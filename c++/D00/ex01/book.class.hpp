/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:26:49 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 19:26:53 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

# include "contact.class.hpp"
# include <iostream>
# include <iomanip>

class Book {

public:

	Book(void);
	~Book(void);
	void	add(Contact *address);
	void	search_print();
	void	exit();

private:
	Contact *_books[8];
	std::string _correct_len(std::string entry);
	void	_prompt_user(void);
};

#endif
