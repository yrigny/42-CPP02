/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:05:04 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/09 19:49:04 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point	a;
	Point	b = Point(1.1, 2.2);
	Point	c(b);
	std::cout << "Point a(" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "Point b(" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "Point c(" << c.getX() << ", " << c.getY() << ")" << std::endl;
	return 0;
}