/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 11:11:23 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap     diamondtrap("Diamonda");

    // diamondtrap.highFiveGuys();
    // diamondtrap.whoAmI();
    diamondtrap.attack("target1");
    diamondtrap.takeDamage(3);
    diamondtrap.beRepaired(5);
    diamondtrap.attack("target2");
    diamondtrap.takeDamage(20);
    diamondtrap.attack("target3");
    diamondtrap.beRepaired(10);
    return 0;
}
