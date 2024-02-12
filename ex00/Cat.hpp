/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:21:38 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:21:39 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &);
		~Cat();
		void makeSound() const;
};
#endif
