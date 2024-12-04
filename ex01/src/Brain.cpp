/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:29:40 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 16:47:38 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copied!" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assigned!" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	_ideas[index] = idea;
}
