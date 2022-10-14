/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:53:58 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/14 13:23:10 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (size_t i = 1, len; i < (size_t)argc; i++)
		{
			len = strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
			{
				if (isupper(argv[i][j]))
					std::cout << (char)argv[i][j];
				else
					std::cout << (char)toupper(argv[i][j]);	
			}
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
}
