/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:37:26 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 14:40:56 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat created!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copied!" << std::endl;
	*this = copy;
}
WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat assigned/copied" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void)	const
{
	std::cout << "Meow" << std::endl;
}
