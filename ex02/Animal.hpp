/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:23:39 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:23:40 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

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
		virtual void makeSound() const = 0;
};

#endif
