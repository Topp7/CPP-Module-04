/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:38:03 by stopp             #+#    #+#             */
/*   Updated: 2024/12/04 14:43:29 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created!" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destroyed!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copied!" << std::endl;
	_brain = new Brain(*copy._brain);
}
Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assigned/copied" << std::endl;
	if (this != &copy)
	{
		Animal::operator= (copy);
		_brain = copy._brain;
	}
	return (*this);
}

void	Cat::makeSound(void)	const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) const
{
	return (_brain->getIdea(index));
}
