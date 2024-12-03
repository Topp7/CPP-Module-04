/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:40:23 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 15:10:16 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copied!" << std::endl;
	*this = copy;
}
Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assigned/copied" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Dog::makeSound(void)	const
{
	std::cout << "Woof" << std::endl;
}
