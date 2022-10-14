/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.classes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:21 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/14 19:27:41 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Contact::Contact(void)
{
	std::cout << "Constructot [contact] called" << std::endl;
	return;
}
Contact::~Contact(void)
{
	std::cout << "Destructor [contact] called" << std::endl;
	return;
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_ph_number(std::string str)
{
	this->ph_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}


PhoneBook::PhoneBook(void)
{
	std::cout << "Constructot [PhoneBook] called" << std::endl;
	this->current = -1;
	this->oldest = -1;
	return;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor [PhoneBook] called" << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	if (current < 0)
	{
		this->current = 0;
		this->oldest = 0;
	}
	else
	{
		if (this->current <= 6)
		{
			this->current += 1;
		}
		else
		{
			this->current = 0;
		}
	}
}

void PhoneBook::set_current(void)
{
	if (this->current < 0 || this->current == 7)
		current = 0;
	else
		current += 1;
}

void	PhoneBook::set_oldest(void)
{
	if (this->oldest == -1)
		oldest = 0;
	else
	{
		
	}
}