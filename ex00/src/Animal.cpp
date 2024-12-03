/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:45:48 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 15:04:37 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default animal created!" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << _type << " created!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copied!" << std::endl;
	*this = copy;
}
Animal	&Animal::operator=(const Animal &copy)
{
	std::cout << "Animal assigned/copied" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void)	const
{
	std::cout << "Animal sound" << std::endl;
}
