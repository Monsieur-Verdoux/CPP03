/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:44:41 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:51:14 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string new_name) : ClapTrap(new_name)
{
	std::cout << "Named FragTrap constructor called with the name " << new_name << std::endl;
	this->_name = new_name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original): ClapTrap (original)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	if(this != &original)
	{
		std::cout << "The FragTrap formerly known as "<< _name << " is now " << original._name << std::endl;
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return (*this);
}


void FragTrap::highFivesGuys()
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " raises its hand for a High Five!"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is out of energy and cannot High Fives!" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is out of hit points and cannot High Fives!" << std::endl;
	}
}
