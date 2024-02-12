/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:24:00 by uasci             #+#    #+#             */
/*   Updated: 2024/02/03 15:53:18 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	Animal::type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meawwww" << std::endl;
}

Cat::Cat(const Cat &copy) {
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        *this->brain = *copy.brain;
        this->type = copy.type;
    }
    return *this;
}

Brain *Cat::getBrain() const {
	return brain;
}