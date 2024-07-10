/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:05:04 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/10 16:45:25 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
// #include <cstdlib>
// #include <ctime>
// #include <limits>

// float	randomFloat(float min, float max) {
//     return min + (float)(rand()) / ((float)RAND_MAX / (max - min));
// }

// int		randomInt(int min, int max) {
//     return min + rand() / (RAND_MAX / (max - min));
// }

// Point randomPoint(float min, float max) {
// 	Point p(randomFloat(min, max), randomFloat(min, max));
// 	Point p(randomInt(min, max), randomInt(min, max));
//     return p;
// }

int main(void) {
	// // Seed for random number generation
	// srand(static_cast<unsigned int>(time(0)));
    // // Define the range for generating random points
    // float min = -50.0;
    // float max = 50.0;
    // // Generate random points for A, B, C, and P
    // Point a = randomPoint(min, max);
    // Point b = randomPoint(min, max);
    // Point c = randomPoint(min, max);
    // Point p = randomPoint(min, max);

	Point	a(8, 2);
	Point	b(7, 6);
	Point	c(2, 1);
	Point	p(5, 3);
	
	std::cout << "A(" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "B(" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "C(" << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << "P(" << p.getX() << ", " << p.getY() << ")" << std::endl;

	if (bsp(a, b, c, p) == true)
		std::cout << "P is inside triangle ABC" << std::endl;
	else
		std::cout << "P is not inside triangle ABC" << std::endl;
	return 0;
}
