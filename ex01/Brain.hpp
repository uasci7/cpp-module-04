/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:22:38 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:22:38 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &c);
        Brain &operator=(const Brain &);
        virtual ~Brain();
};

#endif