/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:12 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:58:47 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap a;
	
	a.attack("a random passerby");
	a.attack("another passerby");
	a.takeDamage(5);
	a.beRepaired(1);
	a.beRepaired(2);
	a.attack("a third passerby");
	a.takeDamage(10);
	a.beRepaired(1);
	a.attack("a random passerby");

	std::cout << std::endl;
	
	FragTrap b("Milad Fraghmat");

	b.attack("Rus the Ravenous");
	b.takeDamage(5);
	b.beRepaired(1);
	b.beRepaired(2);
	b.attack("itself");
	b.takeDamage(20);
	for (int i = 0; i < 5; i++)
		b.beRepaired(1);
	b.attack("nobody");

	std::cout << std::endl;

	FragTrap c(a);
	c.highFivesGuys();
	c.beRepaired(100);
	c.attack("the world");

	ScavTrap d;
	d.attack("everyone");

	std::cout << std::endl;
}