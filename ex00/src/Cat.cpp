/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:38:03 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 15:10:04 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed!" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copied!" << std::endl;
	*this = copy;
}
Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assigned/copied" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Cat::makeSound(void)	const
{
	std::cout << "Meow" << std::endl;
}
