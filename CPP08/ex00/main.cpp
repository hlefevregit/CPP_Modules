/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:00:46 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 19:04:11 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec = {10, 20, 30, 40, 50};
        std::list<int> lst = {5, 15, 25, 35, 45};

        std::cout << "Recherche dans le vecteur..." << std::endl;
        std::vector<int>::iterator itVec = easyfind(vec, 30);
        std::cout << "Valeur trouvée : " << *itVec << std::endl;

        std::cout << "Recherche dans la liste..." << std::endl;
        std::list<int>::iterator itLst = easyfind(lst, 25);
        std::cout << "Valeur trouvée : " << *itLst << std::endl;

        std::cout << "Recherche d'une valeur inexistante..." << std::endl;
        easyfind(vec, 100);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}