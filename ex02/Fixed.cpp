/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:01:39 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/08 20:01:40 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
    return;
}

Fixed::Fixed(const int num_i) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num_i << fractional_bits);
	return;
}

Fixed::Fixed(const float num_f) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num_f * (1 << fractional_bits)));
}

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed&  Fixed::operator=(const Fixed& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->number_value = src.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const {
    return this->number_value;
}

void    Fixed::setRawBits(int const raw) {
    this->number_value = raw;
}

float	Fixed::toFloat(void) const {
	return (float)this->getRawBits() / (1 << fractional_bits);
}

int		Fixed::toInt(void) const {
	return this->getRawBits() >> fractional_bits;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& num_fp) {
	o << num_fp.toFloat();
	return o;
}
