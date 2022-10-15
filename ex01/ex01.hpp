/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:27:09 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 14:16:19 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
# define EX01_HPP
# include <iostream>
# include <cstring>
# include <string>
# include <iomanip>
# include <ctime>
# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"
# define W	10
# define FNAME	"First Name"
# define LNAME	"Last Name"
# define NNAME	"Nickname"
# define NUMBER	"Phone Number"
# define SECRET	"Darkest secret"
# define TEMPL	"TEMPLATE"

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string ph_number;
	std::string secret;

public:
	Contact(void);
	~Contact(void);

	void set_first_name(std::string str);
	void set_last_name(std::string str);
	void set_nickname(std::string str);
	void set_ph_number(std::string str);
	void set_secret(std::string str);

	void set_contact(void);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_ph_number(void);
	std::string get_secret(void);

	void fill_template(void);
	void display_contact(int index);
	void display_full_contact(void);

};


class PhoneBook
{
	Contact	contacts[8];
	int		current;
	int		saved;

	void set_current(void);
	void set_saved(void);
	void display_header(void);

public:
	PhoneBook(void);
	~PhoneBook(void);
	void add_contact(void);
	void search_contact(void);
	void display_one(int index);
	void display_all(void);
	void fill_templates(void);
};

std::string input_field(std::string str);
std::string input_cmd(void);
void		display_pipe(void);
void 		display_tab(std::string p1, std::string p2,
						std::string p3, std::string p4);

#endif
