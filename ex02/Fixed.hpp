/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:58:26 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/08 20:30:28 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private:

		int					number_value;
		static const int	fractional_bits = 8;

    public:

		Fixed(void);
		Fixed(const int num_i);
		Fixed(const float num_f);
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		int		operator>(const Fixed& other);
		int		operator<(const Fixed& other);
		int		operator>=(const Fixed& other);
		int		operator<=(const Fixed& other);
		int		operator==(const Fixed& other);
		int		operator!=(const Fixed& other);
		Fixed&	operator+(const Fixed& addend);
		Fixed&	operator-(const Fixed& subtrahend);
		Fixed&	operator*(const Fixed& multiplier);
		Fixed&	operator/(const Fixed& divisor);
		Fixed&	operator++(void);
		Fixed&	operator++(int);
		Fixed&	operator--(void);
		Fixed&	operator--(int);
		
		static Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& const a, Fixed& const b);
};

std::ostream&	operator<<(std::ostream& o, const Fixed& num_fp);

#endif
