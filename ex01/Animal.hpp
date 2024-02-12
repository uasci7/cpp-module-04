/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:31 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:31 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string);
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
		std::string getType() const;
		void setType(std::string);
		virtual void makeSound() const;
};

#endif
