/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:07:02 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/10 16:42:49 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	Ax(a.getX());
	Fixed	Ay(a.getY());
	Fixed	Bx(b.getX());
	Fixed	By(b.getY());
	Fixed	Cx(c.getX());
	Fixed	Cy(c.getY());
	Fixed	Px(point.getX());
	Fixed	Py(point.getY());

	float	w1 = ((Py - Ay) * (Cx - Ax) - (Px - Ax) * (Cy - Ay)) / ((By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay));
	float	w2 = (Px - Ax - w1 * (Bx - Ax)) / (Cx - Ax);
	// std::cout << "w1 = " << w1 << std::endl;
	// std::cout << "w2 = " << w2 << std::endl;
	if (w1 > 0 && w2 > 0 && (w1 + w2) < 1)
		return true;
	return false;
}
