/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:52 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 16:30:35 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	areaSign( Point const p1, Point const p2, Point const p3)
{
	return (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
		p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
		p3.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float d1 = areaSign(point, a, b);
	float d2 = areaSign(point, b, c);
	float d3 = areaSign(point, c, a);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return false;

	bool hasNeg= (d1 < 0 || d2 < 0 || d3 < 0);
	bool hasPos= (d1 > 0 || d2 > 0 || d3 > 0);
	
	return !(hasNeg && hasPos);
}