/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:15:15 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 14:27:16 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr(5);
        for (unsigned int i = 0; i < arr.size(); i++)
            arr[i] = i * 10;

        std::cout << "Tableau : ";
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;


        Array<int> arrCopy = arr;
        arrCopy[2] = 999;

        std::cout << "Tableau copié modifié : ";
        for (unsigned int i = 0; i < arrCopy.size(); i++)
            std::cout << arrCopy[i] << " ";
        std::cout << std::endl;

        std::cout << arr[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}