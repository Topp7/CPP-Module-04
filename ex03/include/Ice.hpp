/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soren <soren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:45 by stopp             #+#    #+#             */
/*   Updated: 2024/12/05 18:40:00 by soren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
	~Ice();

	AMateria	*clone() const;
	void		use(ICharacter &target);
};
