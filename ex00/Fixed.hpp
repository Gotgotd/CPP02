/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 14:51:40 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public: 

	Fixed();
	Fixed(Fixed const & fCpy);
	~Fixed();

	Fixed&	operator=(Fixed const & rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);

private:

	static int const	bits;
	int					_n;

};

#endif