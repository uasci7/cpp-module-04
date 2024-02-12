/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:23:53 by uasci             #+#    #+#             */
/*   Updated: 2024/02/01 08:23:55 by uasci            ###   ########.fr       */
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