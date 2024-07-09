/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:59:35 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/09 18:57:52 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	a = Fixed(42);
	Fixed	c(4.2f);
	std::cout << std::endl << "Extra tests with " << "a = " << a << ", c = " << c << std::endl;
	std::cout << "test feature  | " << "test case | " << "test result" << std::endl;
	std::cout << "operator '>'  | " << "a > c     | " << (a > c) << std::endl;
	std::cout << "operator '<'  | " << "a < c     | " << (a < c) << std::endl;
	std::cout << "operator '>=' | " << "a >= c    | " << (a >= c) << std::endl;
	std::cout << "operator '<=' | " << "a <= c    | " << (a <= c) << std::endl;
	std::cout << "operator '==' | " << "a == c    | " << (a == c) << std::endl;
	std::cout << "operator '!=' | " << "a != c    | " << (a != c) << std::endl;
	std::cout << "operator '+'  | " << "a + c     | " << (a + c) << std::endl;
	std::cout << "operator '-'  | " << "a - c     | " << (a - c) << std::endl;
	std::cout << "operator '/'  | " << "a / c     | " << (a / c) << std::endl;
	return 0;
}
