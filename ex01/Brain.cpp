/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:35 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:36 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    for(int i = 0; i < 100; i++){
        ideas[i] = "God Is Dead, and We Have Killed Him.";
    }
    std::cout << "Brain - Default Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain - Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain - Copy Brain constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
    for (size_t i = 0; i < copy.ideas->size(); i++)
        ideas[i] = copy.ideas[i];
    return(*this);
}
