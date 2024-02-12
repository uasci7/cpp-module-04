/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:57 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:58 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

    Animal* animals[4];

    for (int i = 0; i < 4; ++i) {
        if (i < 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    Dog* dogPtr = dynamic_cast<Dog*>(animals[2]);
  
    Cat* catPtr = dynamic_cast<Cat*>(animals[0]);
    
    std::cout << "Cat brains : " << catPtr->getBrain()->ideas[1] << std::endl;
    std::cout << "Dog brains : " << dogPtr->getBrain()->ideas[1] << std::endl;

    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }
    return 0;
}

