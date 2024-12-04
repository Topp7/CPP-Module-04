/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:42:35 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 17:30:13 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		~Dog() override;
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);

		std::string	getIdea(int index) const override;
		void		setIdea(int index, std::string idea) override;
		void 		makeSound(void) const override;
};
