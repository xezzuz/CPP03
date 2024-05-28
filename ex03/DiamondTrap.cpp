/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:38:40 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 11:11:09 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	name = "n\a";
	ClapTrap::name = name + "_clap_name";
	hitPoints = 0;
	energyPoints = 0;
	attackDamage = 0;
	std::cout << "DiamondTrap Class Default Constructor Called\n";
}

DiamondTrap::DiamondTrap(std::string Name) {
	name = Name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " has been created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) {
	*this = original;
	std::cout << "DiamondTrap " << name << " has been copied\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& original) {
	if (this != &original) {
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
		std::cout << "DiamondTrap " << name << " has been assigned\n";
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " has been destroyed\n";
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "Hi, my DiamondTrap name is " << name << ", and my ClapTrap name is " << ClapTrap::name << "\n";
}
