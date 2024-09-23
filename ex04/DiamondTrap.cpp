/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:41:57 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/23 19:53:00 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;	
}


DiamondTrap::DiamondTrap(const std::string& new_name) : ClapTrap(new_name + "_clap_name"), ScavTrap(new_name), FragTrap(new_name)
{
	std::cout << "Named DiamondTrap constructor called with the name " << new_name << std::endl;
	this->_name = new_name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap destructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(original), ScavTrap(original), FragTrap(original)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->_name = original._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	std::cout << "Copy assignment DiamondTrap operator called" << std::endl;
	if(this != &original)
	{
		std::cout << "The DiamondTrap formerly known as "<< _name << " is now " << original._name << std::endl;
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
		std::cout << "DiamondTrap " << this->_name << "'s friends also call it " << this->ClapTrap::_name << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "DiamondTrap " << _name << " is out of energy and cannot remember its names!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "DiamondTrap " << _name << " is out of hit points and cannot remember its names!" << std::endl;
	}
}