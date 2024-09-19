/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:54 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:43:56 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string new_name) : ClapTrap(new_name)
{
	std::cout << "Named ScavTrap constructor called with the name " << new_name << std::endl;
	this->_name = new_name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original): ClapTrap (original)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	if(this != &original)
	{
		std::cout << "The ScavTrap formerly known as "<< _name << " is now " << original._name << std::endl;
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
		std::cout << "ScavTrap " << _name << " attacks " << target << " for " << _attackDamage << " points of damage! It now has " << _energyPoints << " energy points left!"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of hit points and cannot attack!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << "is now in Gate keeper mode!" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of hit points and cannot attack!" << std::endl;
	}
}