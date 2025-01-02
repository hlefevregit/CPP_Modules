/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:32:23 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/02 15:35:16 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>


int main()
{
	Data originalData;
	originalData.name = "John";
	originalData.id = 42;
	originalData.value = 42.42f;

	std::cout << "Original data:" << std::endl;
	std::cout << "Address: " << &originalData << std::endl;
	std::cout << "Name: " << originalData.name << std::endl;
	std::cout << "ID: " << originalData.id << std::endl;
	std::cout << "Value: " << originalData.value << std::endl;

	uintptr_t serializedData = Serializer::serialize(&originalData);
	std::cout << std::endl << "Serialized uintptr_t: " << serializedData << std::endl;

	Data *deserializedData = Serializer::deserialize(serializedData);
	std::cout << std::endl << "Deserialized data:" << std::endl;
	std::cout << "Address: " << deserializedData << std::endl;
	std::cout << "Name: " << deserializedData->name << std::endl;
	std::cout << "ID: " << deserializedData->id << std::endl;
	std::cout << "Value: " << deserializedData->value << std::endl;
	
	if (deserializedData == &originalData)
		std::cout << "\nSuccess: Deserialized data is the same as the original data" << std::endl;
	else
		std::cout << "\nError: Deserialized data is not the same as the original data" << std::endl;
}