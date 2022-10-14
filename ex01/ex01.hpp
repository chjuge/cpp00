/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:27:09 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/14 19:15:43 by mproveme         ###   ########.fr       */
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
# define FNAME	"first name:"
# define LNAME	"first name:"
# define NNAME	"nickname:"
# define NUMBER	"phone number:"
# define SECRET	"darkest secret:"

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
};


class PhoneBook
{
	Contact 	arr[8];
	// std::time_t time_of_entry[8];
	int		oldest;
	int		current;

public:
	PhoneBook(void);
	~PhoneBook(void);
	void set_oldest(void);
	void set_current(void);
	void add_contact(void);
};

#endif
