/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:54:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/23 11:45:47 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void )
{
	Fixed   a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	//Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	//std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}