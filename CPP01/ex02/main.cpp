/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:31:09 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:31:54 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    // Step 1: Declare and initialize the string variable
    std::string str = "HI THIS IS BRAIN";
    
    // Step 2: Declare a pointer to the string
    std::string *stringPTR = &str;
    
    // Step 3: Declare a reference to the string
    std::string &stringREF = str;
    
    // Step 4: Print the memory address of the string variable
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    
    // Step 5: Print the memory address held by stringPTR
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    
    // Step 6: Print the memory address held by stringREF
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    
    // Step 7: Print the value of the string variable
    std::cout << "Value of the string variable: " << str << std::endl;
    
    // Step 8: Print the value pointed to by stringPTR
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    
    // Step 9: Print the value pointed to by stringREF
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}