/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:33:49 by stopp             #+#    #+#             */
/*   Updated: 2024/12/01 16:41:42 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		~Cat() override;
		Cat(const Cat &copy);
		Cat &operator=(const Cat &other);

		void makeSound(void) const override;
};
