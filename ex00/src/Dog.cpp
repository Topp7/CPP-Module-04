/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:40:23 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 17:53:55 by stopp            ###   ########.fr       */
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

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copied!" << std::endl;
}
Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assigned/copied" << std::endl;
	if (this != &copy)
		Animal::operator= (copy);
	return (*this);
}

void	Dog::makeSound(void)	const
{
	std::cout << "Woof" << std::endl;
}
