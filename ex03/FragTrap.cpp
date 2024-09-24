/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:44:41 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/24 14:43:46 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[1;32mDefault FragTrap constructor called\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string new_name) : ClapTrap(new_name)
{
	std::cout << "\033[1;32mNamed FragTrap constructor called with the name " << new_name << "\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;31mDefault FragTrap destructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original): ClapTrap (original)
{
	std::cout << "\033[1;33mCopy FragTrap constructor called\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	std::cout << "\033[1;36mCopy assignment FragTrap operator called\033[0m" << std::endl;
	if(this != &original)
	{
		std::cout << "\033[1;36mThe FragTrap formerly known as "<< _name << " is now " << original._name << "\033[0m" << std::endl;
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
		std::cout << "\033[1;93mFragTrap " << _name << " raises its hand to High Five!\033[0m"<< std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "\033[1;95mFragTrap " << _name << " is out of energy and cannot High any Fives!\033[0m" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << "\033[1;95mFragTrap " << _name << " is out of hit points and cannot High any Fives!\033[0m" << std::endl;
	}
}
