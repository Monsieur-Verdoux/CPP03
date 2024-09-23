/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:12 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/23 20:01:13 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap a;
	
	a.attack("a random passerby");
	a.takeDamage(5);
	a.beRepaired(1);
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();

	std::cout << std::endl;
	
	DiamondTrap b("Milad Fraghmat");

	b.attack("Rus the Ravenous");
	b.takeDamage(5);
	b.beRepaired(1);
	b.beRepaired(2);
	b.attack("itself");
	b.takeDamage(20);
	for (int i = 0; i < 5; i++)
		b.beRepaired(1);
	b.attack("nobody");
	b.whoAmI();

	std::cout << std::endl;

	DiamondTrap c(a);
	c.highFivesGuys();
	c.beRepaired(100);
	c.attack("the world");
	c.whoAmI();
	std::cout << std::endl;
}