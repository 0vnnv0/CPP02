/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:42:13 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 17:14:57 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point &other)
{
	if (this != &other)
		std::cerr << "Assignment not allowed for const members." << std::endl;
	return (*this);
}

Point::~Point(void) {}

Fixed Point::getX() const
{
	return(this->_x);
}

Fixed Point::getY() const
{
	return(this->_y);
}
