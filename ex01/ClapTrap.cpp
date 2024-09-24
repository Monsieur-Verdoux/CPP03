/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:23:59 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 14:29:48 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("DefClap")
{
	std::cout << "\033[1;32mDefault ClapTrap constructor called\033[0m"  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;31mDefault ClapTrap destructor called\033[0m"  << std::endl;
}

ClapTrap::ClapTrap(const std::string new_name): _name (new_name)
{
	std::cout << "\033[1;32mNamed ClapTrap constructor called with the name " << _name << "\033[0m"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original): _name(original._name), _hitPoints(original._hitPoints), _energyPoints(original._energyPoints), _attackDamage(original._attackDamage)
{
	std::cout << "\033[1;33mCopy ClapTrap constructor called\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	std::cout << "\033[1;36mCopy assignment ClapTrap operator called\033[0m" << std::endl;
	if(this != &original)
	{
		std::cout << "\033[1;36mThe ClapTrap formerly known as "<< _name << " is now " << original._name << "\033[0m" << std::endl;
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
		std::cout << "\033[1;92mClapTrap " << _name << " attacks " << target << " for " << _attackDamage << " points of damage! It now has " << _energyPoints << " energy points left!\033[0m" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mClapTrap " << _name << " is out of energy and cannot attack!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mClapTrap " << _name << " is out of hit points and cannot attack!\033[0m" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "\033[1;31mClapTrap " << _name << " takes " << amount << " points of damage!" << " It now has " << _hitPoints << " hit points left!\033[0m" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		--_energyPoints;
		std::cout << "\033[1;35mClapTrap " << _name << " repairs itself for " << amount << " hit points! It now has " << _hitPoints << " hit points and " << _energyPoints << " energy points left!\033[0m"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mClapTrap " << _name << " is out of energy and cannot repair!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mClapTrap " << _name << " is out of hit points and cannot repair!\033[0m" << std::endl;
	}
}