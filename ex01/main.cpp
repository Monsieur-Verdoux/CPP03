/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:07:19 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 15:09:16 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		ScavTrap a;
		
		a.attack("Hager the Heinous");
		a.takeDamage(5);
		a.beRepaired(1);
		a.guardGate();
	}

	std::cout << std::endl;
	
	{
		ScavTrap b("Robert Scammi");

		b.attack("Finnan the Foul");
		b.takeDamage(5);
		b.beRepaired(1);
		b.guardGate();
	}

	std::cout << std::endl;

	{
		ScavTrap a("Robert Scammi");
		ScavTrap c(a);
		c.guardGate();
		c.takeDamage(250);
		c.guardGate();
	}

	std::cout << std::endl;
}