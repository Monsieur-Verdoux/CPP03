/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:07:19 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:03:52 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap a;
	
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
	
	ScavTrap b("Finnan Clapomon");

	b.attack("Ryan the Rancid");
	b.attack("Hager the Heinous");
	b.takeDamage(5);
	b.beRepaired(1);
	b.beRepaired(2);
	b.attack("itself");
	b.takeDamage(20);
	for (int i = 0; i < 5; i++)
		b.beRepaired(1);
	b.attack("nobody");

	std::cout << std::endl;

	ScavTrap c(a);
	c = b;
}