/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:27:18 by tblaase           #+#    #+#             */
/*   Updated: 2025/02/21 17:34:44 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include "ClapTrap.hpp"

// classes

class FragTrap: virtual public ClapTrap
{
	private:

	public:
	// Constructors
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

	// Deconstructors
		~FragTrap();

	// Overloaded Operators
		FragTrap &operator=(const FragTrap &src);

	// Public Methods
		void highFivesGuys(void);
	// Getter

	// Setter

};
