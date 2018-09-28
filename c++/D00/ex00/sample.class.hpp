/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 13:47:03 by tdiaz             #+#    #+#             */
/*   Updated: 2018/09/25 13:47:04 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {

public:

	Sample(void);
	~Sample(void);

	void setfoo(int x);
	int getfoo(void) const;
	int compare(Sample *other) const;

private:

	int _privateFoo;
};

#endif
