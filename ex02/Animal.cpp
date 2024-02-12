/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:23:31 by uasci             #+#    #+#             */
/*   Updated: 2024/02/03 15:50:39 by uasci            ###   ########.fr       */
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
