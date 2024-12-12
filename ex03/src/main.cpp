/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:21:59 by stopp             #+#    #+#             */
/*   Updated: 2024/12/12 15:09:09 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
	AMateria	*created_materia[2];
	for (int i = 0; i < 2; i++)
		created_materia[i] = nullptr;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->print_inventory();
	me->equip(tmp);
	created_materia[0] = tmp;
	me->print_inventory();
	tmp = src->createMateria("cure");
	created_materia[1] = tmp;
	me->equip(tmp);
	me->print_inventory();

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->unequip(0);
	me->use(1, *bob);
	me->unequip(1);

	for (int i = 0; i < 2; i++)
	{
		delete (created_materia[i]);
		created_materia[i] = nullptr;
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}
