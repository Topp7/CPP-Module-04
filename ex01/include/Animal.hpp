/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:35 by stopp             #+#    #+#             */
/*   Updated: 2024/12/03 17:40:37 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class	Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);

		//methods
		virtual std::string	getIdea(int index) const = 0;
		virtual void		setIdea(int index, std::string idea) = 0;
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};
