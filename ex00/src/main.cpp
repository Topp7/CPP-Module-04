/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:49:20 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 16:14:54 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main(void)
{
	const Animal 		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal 		*i = new Cat();
	const WrongAnimal	*wrong=  new WrongCat();
	WrongCat			w_cat;

	std::cout << std::endl;
	meta->makeSound();

	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();

	std::cout << std::endl;

	std::cout << wrong->getType() << " ";
	wrong->makeSound();
	std::cout << w_cat.getType() << " ";
	w_cat.makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrong;
	return 0;
}
