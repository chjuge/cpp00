/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:27:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/14 19:01:40 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string input_field(std::string str)
{
	std::string	res;
	std::cout << "Please, input the " << str;
	std::cin >> res;
	return (res);
}

std::string input_cmd(void)
{
	std::string	str = NULL;

	std::cout << "Please, input the command (ADD | SEARCH | EXIT)	";
	while (1)
	{
		std::cin >> str;
		if (!(str.compare(ADD)) || !(str.compare(SEARCH)) 
			|| !(str.compare(EXIT)));
			break;
	}
}

void	add_contact()
{

}

void	search_contact()
{

}

int	main(void)
{
	PhoneBook book;
	std::string input;

	while(1)
	{
		input = input_cmd();
		if (input.compare(ADD))
			add_contact();
		else if (input.compare(SEARCH))
			search_contact();
		else
			return;
	}
	return;
}