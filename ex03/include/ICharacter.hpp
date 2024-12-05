/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soren <soren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:48 by stopp             #+#    #+#             */
/*   Updated: 2024/12/05 18:13:01 by soren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual						~ICharacter();
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *mat) = 0;
		virtual void				unequip(int index) = 0;
		virtual void				use(int index, ICharacter &target) = 0;
};
