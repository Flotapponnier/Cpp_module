/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:09:29 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:09:33 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			for(size_t j = 0; j < std::strlen(argv[i]); j++)
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
	  		std::cout << " ";
		}
	}
	std::cout << std::endl;
}
