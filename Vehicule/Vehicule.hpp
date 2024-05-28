/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:37:45 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/26 19:21:36 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Vehicule {
	// private:
	public:
		std::string		brand;
		std::string		model;
		unsigned int	year;
		unsigned int	price;
		Vehicule();
		Vehicule(std::string brand, std::string model, unsigned int year, unsigned int price);
		Vehicule(const Vehicule& object);
		Vehicule&	operator=(const Vehicule& obj);
		~Vehicule();

		void	displayInfo();
};

class Truck : public Vehicule {
	public:
		unsigned int	maxCapacity;

		Truck() {
			std::cout << "Derived Class Default Constructor Called\n";
			maxCapacity = 55;
		}
		void	displayInfo() {
			std::cout << "Max Capacity: " << maxCapacity << "t\n";
		}
};
