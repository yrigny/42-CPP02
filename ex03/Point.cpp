/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:06:49 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/10 14:42:57 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(Fixed()), y(Fixed()) {
	return;
}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y)) {
	return;
}

Point::Point(const Point& src): x(src.x), y(src.y) {
	return;
}

Point	Point::operator=(const Point& src) {
	Point	temp(src);
	return temp;
}

Point::~Point(void) {
	return;
}

const Fixed&	Point::getX(void) const {
	return this->x;
}

const Fixed&	Point::getY(void) const {
	return this->y;
}
