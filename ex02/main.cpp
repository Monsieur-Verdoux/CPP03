/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:12 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 15:15:01 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		FragTrap a;
		
		a.attack("Hager the Horrible");
		a.takeDamage(5);
		a.beRepaired(1);
		a.highFivesGuys();
	}

	std::cout << std::endl;
	
	{
		FragTrap b("Milad Fraghmat");

		b.attack("Finnan the Funky");
		b.takeDamage(5);
		b.beRepaired(1);
		b.highFivesGuys();
	}

	std::cout << std::endl;

	{
		FragTrap a("Milad Fraghmat");
		FragTrap c(a);
		
		c.highFivesGuys();
		c.takeDamage(500);
		c.highFivesGuys();
	}
}