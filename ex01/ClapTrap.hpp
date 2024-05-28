/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:53 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/26 20:05:48 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string			name;
		int					hitPoints;		// HP
		int					energyPoints;	// Stamina to Attack or Heal (Repair)
		int					attackDamage;	// Weapon Damage
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& original);
		ClapTrap&	operator=(const ClapTrap& original);
		~ClapTrap();

		void		attack(const std::string& target);	// Attacks Target
		void		takeDamage(unsigned int amount);	// Reduces player HP
		void		beRepaired(unsigned int amount);	// Heals player
};

#endif