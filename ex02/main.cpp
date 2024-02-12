/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:24:38 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:24:39 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* b1 = new Cat();
    Animal* b2 = new Cat();
    Cat *b = dynamic_cast<Cat*>(b1);
    std::cout << b->getBrain()->ideas[1] <<std::endl;
    b->getBrain()->ideas[1] = "God Leave";
    Cat a = *b;
    std::cout << a.getBrain()->ideas[1] <<std::endl;
    delete b1;
    delete b2;
    return 0;
}
