/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.classes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:06:41 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 14:06:48 by mproveme         ###   ########.fr       */
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

void	Contact::display_contact(int index)
{
	display_tab(std::to_string(index),
				this->get_first_name(),
				this->get_last_name(),
				this->get_nickname());
}

void	Contact::display_full_contact(void)
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->ph_number << std::endl;
	std::cout << this->secret << std::endl;
}

void	Contact::fill_template(void)
{
	this->set_first_name("Vasya");
	this->set_last_name("Pupkin");
	this->set_nickname("npocto_noBeJlutelb");
	this->set_ph_number("8 800 555 35 35");
	this->set_secret("Proshe pozvonit', chem u kogo-to zanimat'");
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
	display_tab("Index", FNAME, LNAME, NNAME);
}

void PhoneBook::display_all(void)
{
	this->display_header();
	for (int i = 0; i < this->saved; i++)
	{
		this->contacts[i].display_contact(i + 1);
	}
}

void PhoneBook::display_one(int index)
{
	if (index <= this->saved)
		this->contacts[index].display_full_contact();
	else
		std::cout << "There no contact of index " << index << std::endl;
}

void PhoneBook::search_contact(void)
{
	if (this->saved == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	else
		this->display_all();
	
	std::string res;
	int	ind;
	while (1)
	{
		std::cout << "[EXIT] to exit search, [index] to show contact (1-8), [ALL] to show all contacts";
		std::cout << std::endl;
		std::cin >> res;
		std::cin.clear();
		if (res.compare(EXIT) == 0)
			break;
		if (res.compare("ALL") == 0)
			this->display_all();
		else
		{
			ind = atoi(res.c_str());
			if (ind < 1 || ind > 8)
				std::cout << "You inputed wrong data" << std::endl;
			else
				this->display_one(ind - 1);
		}
	}
}

void PhoneBook::fill_templates(void)
{
	for (int i = 0; i < 8; i++)
	{
		this->contacts[i].fill_template();
		this->set_current();
		this->set_saved();
	}
}