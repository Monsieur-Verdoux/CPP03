/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:23:59 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:01:27 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("DefClap")
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string new_name): _name (new_name)
{
	std::cout << "Named ClapTrap constructor called with the name " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original): _name(original._name), _hitPoints(original._hitPoints), _energyPoints(original._energyPoints), _attackDamage(original._attackDamage)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	std::cout << "Copy assignment ClapTrap operator called" << std::endl;
	if(this != &original)
	{
		std::cout << "The ClapTrap formerly known as "<< _name << " is now " << original._name << std::endl;
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		--_energyPoints;
		std::cout << "ClapTrap " << _name << " attacks " << target << " for " << _attackDamage << " points of damage! It now has " << _energyPoints << " energy points left!"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of hit points and cannot attack!" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << " It now has " << _hitPoints << " hit points left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		--_energyPoints;
		std::cout << "ClapTrap " << _name << " repaits itself for " << amount << " hit points! It now has " << _hitPoints << " hit points and " << _energyPoints << " energy points left!"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy and cannot repair!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of hit points and cannot repair!" << std::endl;
	}
}