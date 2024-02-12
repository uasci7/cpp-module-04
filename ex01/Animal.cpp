/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:27 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:28 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
	*this = copy;
	std::cout << "Animal constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
	this->type = copy.type;
	return(*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
	return(type);
}

void Animal::setType(std::string diffType){
	this->type = diffType;
}

void Animal::makeSound() const{
	std::cout << "No animal sounds" << std::endl;
}