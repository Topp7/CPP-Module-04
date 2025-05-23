/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:27 by stopp             #+#    #+#             */
/*   Updated: 2024/12/11 12:46:00 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria() {}
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);

		const std::string	&getType() const; //Retrurns ther materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;
};
