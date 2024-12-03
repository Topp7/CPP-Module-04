/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:42:35 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 14:48:53 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog() override;
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);

		void makeSound(void) const override;
};
