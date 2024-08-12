/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:01:35 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 16:35:47 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	replaceInFile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inFile(filename);
	if (!inFile.is_open()) {
		std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
	}
	std::stringstream buffer;
	buffer << inFile.rdbuf();
	std::string	content = buffer.str();

	inFile.close();
	
	if (s1.empty()) {
        std::cerr << "Error: The string to replace (s1) cannot be empty." << std::endl;
        return;
    }
	
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}

	std::ofstream outFile(filename +  ".replace");
	if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return;
	}
	
	outFile << content;

	outFile.close();
	std::cout << "Replacement complete. The output has been saved to " << filename << ".replace" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	
	std::string filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	
	replaceInFile(filename, s1, s2);

	return (0);
}