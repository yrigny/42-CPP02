/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:06:39 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/10 14:42:44 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:

		const Fixed	x;
		const Fixed	y;

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& src);
		Point	operator=(const Point& src);
		~Point(void);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
