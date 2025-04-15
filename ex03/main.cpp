/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:19:33 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 15:52:37 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
		Point a(0, 0);
		Point b(10, 0);
		Point c(0, 10);
	
		Point inside(2, 2);
		Point edge(0, 0);
		Point outside(20, 20);
	
		std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl; // Should be 1
		std::cout << "Edge: " << bsp(a, b, c, edge) << std::endl;     // Should be 0
		std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl; // Should be 0
		return 0;
	}
