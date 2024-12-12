/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:32 by stopp             #+#    #+#             */
/*   Updated: 2024/12/12 14:28:48 by stopp            ###   ########.fr       */
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
		~Character() override;
		Character(const Character &copy);
		Character &operator=(const Character &copy);

		std::string const	&getName() const  override;
		void				equip(AMateria *mat) override;
		void				unequip(int idx) override;
		void				use(int idx, ICharacter &target) override;
		void				print_inventory(void) override;
};
