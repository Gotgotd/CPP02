/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 15:25:31 by gdaignea         ###   ########.fr       */
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

	static int const	_bits;
	int					_n;

};

#endif