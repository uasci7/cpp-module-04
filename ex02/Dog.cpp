/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:24:26 by uasci             #+#    #+#             */
/*   Updated: 2024/02/03 15:53:20 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	Animal::type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "woff woff" << std::endl;
}

Dog::Dog(const Dog &copy) {
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        *this->brain = *copy.brain;
        this->type = copy.type;
    }
    return *this;
}

Brain *Dog::getBrain() const{
	return brain;
}