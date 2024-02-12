/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:54 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:55 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &);
		Dog &operator=(const Dog &);
		~Dog();
		void makeSound() const;
		Brain *getBrain() const;
};
#endif
