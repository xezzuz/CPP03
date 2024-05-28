/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:07:05 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/26 16:28:50 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"

Vehicule::Vehicule() {
	std::cout << "Base Class Default Constructor Called\n";
	this->brand = "None";
	this->model = "None";
	this->year = 0;
	this->price = 0;
}

Vehicule::Vehicule(std::string brand, std::string model, unsigned int year, unsigned int price) {
	std::cout << "Base Class Parametrized Constructor Called\n";
	this->brand = brand;
	this->model = model;
	this->year = year;
	this->price = price;
}

Vehicule::Vehicule(const Vehicule& original) {
	std::cout << "Base Class Copy Constructor Called\n";
	*this = original;
}

Vehicule&	Vehicule::operator=(const Vehicule& original) {
	std::cout << "Base Class Copy Assignment Operator Called\n";
	brand = original.brand;
	model = original.model;
	year = original.year;
	price = original.price;
	return *this;
}

Vehicule::~Vehicule() {
	std::cout << "Base Class Destructor Called\n";
}

void	Vehicule::displayInfo() {
	std::cout << "Brand: " << brand << "\n";
	std::cout << "Model: " << model << "\n";
	std::cout << "Year: " << year << "\n";
	std::cout << "Price: " << price << "$\n";
}
