/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:12:21 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/08 15:20:21 by yrigny           ###   ########.fr       */
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
};

std::ostream&	operator<<(std::ostream& o, const Fixed& num_fp);

#endif
