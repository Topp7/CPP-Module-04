/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:52 by stopp             #+#    #+#             */
/*   Updated: 2024/12/11 12:47:09 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(const Character &copy) : Character(copy.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i]->clone();
		else
			this->_materia[i] = nullptr;
	}
}

Character	&Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		_name = copy.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i])
				delete this->_materia[i];
			this->_materia[i] = nullptr;
			if (copy._materia[i])
				this->_materia[i] = copy._materia[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = nullptr;
		}
	}
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (m == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == nullptr)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materia[idx])
		delete (this->_materia[idx]);
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_materia[idx])
		this->_materia[idx]->use(target);
}
