/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:01:39 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/09 19:01:29 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    // std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
    return;
}

Fixed::Fixed(const int num_i) {
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num_i << fractional_bits);
	return;
}

Fixed::Fixed(const float num_f) {
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num_f * (1 << fractional_bits)));
}

Fixed::Fixed(const Fixed& src) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed&  Fixed::operator=(const Fixed& src) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->number_value = src.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const {
    return this->number_value;
}

void    Fixed::setRawBits(int const raw) {
    this->number_value = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

int		Fixed::toInt(void) const {
	return this->getRawBits() >> fractional_bits;
}

bool	Fixed::operator>(const Fixed& other) const {
    return this->getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(const Fixed& other) const {
    return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed& other) const {
    return this->getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(const Fixed& other) const {
    return this->getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(const Fixed& other) const {
    return this->getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed& other) const {
    return this->getRawBits() != other.getRawBits();
}

float	Fixed::operator+(const Fixed& addend) const {
	return this->toFloat() + addend.toFloat();
}

float	Fixed::operator-(const Fixed& subtrahend) const {
	return this->toFloat() - subtrahend.toFloat();
}

float	Fixed::operator*(const Fixed& multiplier) const {
	return this->toFloat() * multiplier.toFloat();
}

float	Fixed::operator/(const Fixed& divisor) const {
	if (divisor.toFloat() != 0.0f)
		return this->toFloat() / divisor.toFloat();
	std::cerr << "Error: forbidden divisor: 0" << std::endl;
		return this->toFloat();
}

Fixed&	Fixed::operator++(void) {
	++number_value;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	this->number_value++;
	return temp;
}

Fixed&	Fixed::operator--(void) {
	--number_value;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;
	this->number_value--;
	return temp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a <= b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a <= b)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a >= b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a >= b)
		return a;
	return b;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& num_fp) {
	o << num_fp.toFloat();
	return o;
}
