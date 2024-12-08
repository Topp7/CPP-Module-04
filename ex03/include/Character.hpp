/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soren <soren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:32 by stopp             #+#    #+#             */
/*   Updated: 2024/12/05 18:09:13 by soren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materia[4];

	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(const Character &copy);
		Character &operator=(const Character &copy);

		std::string const	&getName() const;
		void				equip(AMateria *mat);
		void				unequip(int index);
		void				use(int index, ICharacter &target);
};
