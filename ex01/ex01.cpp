/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:27:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 12:09:09 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string input_field(std::string str)
{
	std::string	res;
	std::cout << "Please, input the " << str << ":	";
	std::cin >> res;
	std::cin.clear();
	return (res);
}

std::string input_cmd(void)
{
	std::string	str;

	std::cout << "Please, input the command (ADD | SEARCH | EXIT)	";
	while (1)
	{
		std::cin >> str;
		if ((str.compare(ADD))== 0 
			|| (str.compare(SEARCH)== 0) 
			|| (str.compare(EXIT))== 0)
			break;
		std::cin.clear();
	}
	return (str);
}

void	display_pipe(void)
{
	// std::cout << std::setw(W);
	std::cout << "|";
}

void	display_part(std::string p)
{
	std::cout << std::setw(W);
	std::cout << p;
}

void display_tab(std::string p1, std::string p2, std::string p3, std::string p4, std::string p5)
{
	display_part(p1);
	display_pipe();
	display_part(p2);
	display_pipe();
	display_part(p3);
	display_pipe();
	display_part(p4);
	display_pipe();
	display_part(p5);
	std::cout << std::endl;
}
int	main(void)
{
	PhoneBook phonebook;
	std::string input;

	while(1)
	{
		input = input_cmd();
		if (input.compare(ADD) == 0)
			phonebook.add_contact();
		else if (input.compare(SEARCH) == 0)
			phonebook.search_contact();
		else
			break;
	}
	return (0);
}