/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:40:23 by stopp             #+#    #+#             */
/*   Updated: 2024/12/04 15:15:35 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created!" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copied!" << std::endl;
	_brain = new Brain(*copy._brain);
}
Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assigned/copied" << std::endl;
	if (this != &copy)
	{
		delete this->_brain;
		Animal::operator= (copy);
		_brain = copy._brain;
	}
	return (*this);
}

void	Dog::makeSound(void)	const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

std::string	Dog::getIdea(int index) const
{
	return (_brain->getIdea(index));
}
