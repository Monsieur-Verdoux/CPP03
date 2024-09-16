/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:07:19 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/16 20:53:26 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap a;
	
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
	
	ClapTrap b("El Clapperino");

	b.attack("Ryan the Rancid");
	b.attack("Finnan the Fetid");
	b.takeDamage(5);
	b.beRepaired(1);
	b.beRepaired(2);
	b.attack("itself");
	b.takeDamage(0);
	for (int i = 0; i < 5; i++)
		b.beRepaired(1);
	b.attack("nobody");
}