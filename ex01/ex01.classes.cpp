/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.classes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:21 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 11:42:51 by mproveme         ###   ########.fr       */
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
void	Contact::set_contact(void)
{
	this->set_first_name(input_field(FNAME));
	this->set_last_name(input_field(LNAME));
	this->set_nickname(input_field(NNAME));
	this->set_ph_number(input_field(NUMBER));
	this->set_secret(input_field(SECRET));
}
std::string Contact::get_first_name(void)
{
	return (this->first_name);
}
std::string Contact::get_last_name(void)
{
	return (this->last_name);
}
std::string Contact::get_nickname(void)
{
	return (this->nickname);
}
std::string Contact::get_ph_number(void)
{
	return (this->ph_number);
}
std::string Contact::get_secret(void)
{
	return (this->secret);
}

void	Contact::display_contact(void)
{
	display_tab(this->get_first_name(),
				this->get_last_name(),
				this->get_nickname(),
				this->get_ph_number(),
				this->get_secret());
}

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructot [PhoneBook] called" << std::endl;
	this->current = -1;
	this->saved = 0;
	return;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor [PhoneBook] called" << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	this->set_current();
	this->contacts[this->current].set_contact();
	this->set_saved();
}

void PhoneBook::set_current(void)
{
	this->current += 1;
	if (this->current >= 8)
		this->current -= 8;
}

void PhoneBook::set_saved(void)
{
	if (this->saved < 8)
		this->saved += 1;
}

void PhoneBook::display_header(void)
{
	display_tab(FNAME, LNAME, NNAME, NUMBER, SECRET);
}

void PhoneBook::search_contact(void)
{
	if (this->saved == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	this->display_header();
	for (int i = 0; i < this->saved; i++)
	{
		this->contacts[i].display_contact();
	}
}
