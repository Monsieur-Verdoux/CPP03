/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:43:06 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/19 21:43:08 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitPoints = 10;
		int _energyPoints = 10;
		int _attackDamage = 0;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string new_name);
		ClapTrap(const ClapTrap& original);
		ClapTrap& operator=(const ClapTrap& original);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif