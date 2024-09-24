/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:16:27 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 14:59:24 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "\033[1;32mDefault ScavTrap constructor called\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string new_name) : ClapTrap(new_name)
{
	std::cout << "\033[1;32mNamed ScavTrap constructor called with the name " << new_name << "\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;31mDefault ScavTrap destructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original): ClapTrap (original)
{
	std::cout << "\033[1;33mCopy ScavTrap constructor called\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	std::cout << "\033[1;36mCopy assignment ScavTrap operator called\033[0m" << std::endl;
	if(this != &original)
	{
		std::cout << "\033[1;36mThe ScavTrap formerly known as "<< _name << " is now " << original._name << "\033[0m" << std::endl;
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return (*this);
}


void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		--_energyPoints;
		std::cout << "\033[1;92mScavTrap " << _name << " attacks " << target << " for " << _attackDamage << " points of damage! It now has " << _energyPoints << " energy points left!\033[0m"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mScavTrap " << _name << " is out of energy and cannot attack!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mScavTrap " << _name << " is out of hit points and cannot attack!\033[0m" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "\033[1;93mScavTrap " << _name << " is now in Gate Keeper mode!\033[0m" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mScavTrap " << _name << " is out of energy and cannot Keep any Gates!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mScavTrap " << _name << " is out of hit points and cannot Keep any Gates!\033[0m" << std::endl;
	}
}