/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:21:44 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:21:45 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog &);
		Dog &operator=(const Dog &);
		~Dog();
		void makeSound() const;
};
#endif
