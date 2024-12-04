/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:33:49 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 17:22:23 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		~Cat() override;
		Cat(const Cat &copy);
		Cat &operator=(const Cat &other);

		std::string	getIdea(int index) const override;
		void		setIdea(int index, std::string idea) override;
		void makeSound(void) const override;
};
