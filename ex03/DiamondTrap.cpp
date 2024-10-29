/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:41:57 by akovalev          #+#    #+#             */
/*   Updated: 2024/10/29 16:33:45 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[1;32mDefault DiamondTrap constructor called\033[0m" << std::endl;
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_energyPoints = 50;
}


DiamondTrap::DiamondTrap(const std::string& new_name) : ClapTrap(new_name + "_clap_name"), ScavTrap(new_name), FragTrap(new_name)
{
	std::cout << "\033[1;32mNamed DiamondTrap constructor called with the name " << new_name << "\033[0m" << std::endl;
	this->_name = new_name;
	this->_energyPoints = 50;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;31mDefault DiamondTrap destructor called for " << _name << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(original), ScavTrap(original), FragTrap(original)
{
	std::cout << "\033[1;33mCopy DiamondTrap constructor called\033[0m" << std::endl;
	this->_name = original._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	std::cout << "\033[1;36mCopy assignment DiamondTrap operator called\033[0m" << std::endl;
	if(this != &original)
	{
		std::cout << "\033[1;36mThe DiamondTrap formerly known as "<< _name << " is now " << original._name << "\033[0m" << std::endl;
		this->ClapTrap::_name = original.ClapTrap::_name;
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "\033[1;93mDiamondTrap " << this->_name << "'s friends also call it " << this->ClapTrap::_name << "\033[0m" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mDiamondTrap " << _name << " is out of energy and cannot remember its names!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mDiamondTrap " << _name << " is out of hit points and cannot remember its names!\033[0m" << std::endl;
	}
}