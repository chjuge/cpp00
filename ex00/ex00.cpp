/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:53:58 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/13 19:20:02 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (size_t x = 0; x < strlen(argv[i]); x++)
        	std::cout << toupper(argv[i][x]);
		std::cout << std::endl;
	}
}
