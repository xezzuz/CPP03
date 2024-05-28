/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:02:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/26 19:20:41 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"

// void		passByValue(Vehicule object) {
// 	std::cout << "<-------passByValue------->\n";
// 	printf("Passed By Value Object Address: %p\n", &object);
// 	std::cout << "<-------passByValue------->\n";
// 	return ;
// }

// Vehicule	returnByValue() {
// 	std::cout << "<-------returnByValue------->\n";
// 	Vehicule	object;
// 	object.brand = "Mercedes";
// 	object.model = "G63";
// 	object.year = 2024;
// 	object.price = 286000;
// 	printf("Returned Local Object Address: %p\n", &object);
// 	std::cout << "<-------returnByValue------->\n";
// 	return object;
// }

int main(void) {
	// Vehicule		firstVehicule("BMW", "M5 CS EDITION", 2022, 99000);
	Truck			firstTruck;

	firstTruck.displayInfo();
	// std::cout << firstTruck.maxCapacity << std::endl;
	std::cout << "End-Of-Main\n";
}
