/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:12 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 15:16:35 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		DiamondTrap a;
		
		a.attack("Hager the Hideous");
		a.takeDamage(5);
		a.beRepaired(1);
		a.guardGate();
		a.highFivesGuys();
		a.whoAmI();
	}
	std::cout << std::endl;
	{
		DiamondTrap b("Neil Diamond");

		b.attack("Finnan the Fusty");
		b.takeDamage(5);
		b.beRepaired(1);
		b.guardGate();
		b.highFivesGuys();
		b.whoAmI();
	}
	std::cout << std::endl;
	{
		DiamondTrap a;
		DiamondTrap c(a);
		
		c.whoAmI();
		c.takeDamage(1000);
		c.guardGate();
		c.highFivesGuys();
		c.beRepaired(100);
		c.whoAmI();
	}
}