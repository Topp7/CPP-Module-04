/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:49:20 by stopp             #+#    #+#             */
/*   Updated: 2024/12/04 15:30:46 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main(void)
{
	Animal	*horde[4] =
	{
		new Cat(),
		new Dog(),
		new Dog(),
		new Cat(),
	};
	horde[0]->setIdea(0,"hello");
	horde[1]->setIdea(0,"hi");
	horde[2]->setIdea(0,"wassup");
	horde[3]->setIdea(0,"hey");
	std::cout << std::endl;
	std::cout << "---------------- Basic Tests ----------------" << std::endl;
	std::cout << "----------------\nCorrect destruction of animal array:\n----------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << std::endl;
		std::cout << "What the " << horde[i]->getType() <<  " wants to say: " << horde[i]->getIdea(0) << std::endl;
		std::cout << "What it actually says: ";
		horde[i]->makeSound();
		delete horde[i];
	}

	std::cout << std::endl;
	std::cout << "----------------\nDeep copy test:\n----------------" << std::endl;
	Dog *OG = new Dog;
	std::cout << "setting the orginal Dogs idea to: i will be copied :)" << std::endl;
	OG->setIdea(0, "I will be copied :)");
	Dog copy = *OG;
	delete OG;
	std::cout << "Idea of the copy: " <<  copy.getIdea(0) << std::endl;
	std::cout << std::endl;

	return 0;
}
