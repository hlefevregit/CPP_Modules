/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:22:25 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/08 14:46:53 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

// int main()
// {
//     std::cout << "===== TEST MutantStack =====" << std::endl;

//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
    
//     std::cout << "Top element: " << mstack.top() << std::endl;
//     mstack.pop();
// 	mstack.pop();
//     std::cout << "Size after pop: " << mstack.size() << std::endl;
    
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);

//     std::cout << "\n📌 Contenu du MutantStack (itération normale):" << std::endl;
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     for (; it != ite; ++it)
//         std::cout << *it << " ";
//     std::cout << std::endl;

//     std::cout << "\n📌 Contenu du MutantStack (itération inversée):" << std::endl;
//     MutantStack<int>::reverse_iterator rit = mstack.rbegin();
//     MutantStack<int>::reverse_iterator rite = mstack.rend();
//     for (; rit != rite; ++rit)
//         std::cout << *rit << " ";
//     std::cout << std::endl;

//     std::cout << "\n===== TEST avec std::list =====" << std::endl;
//     std::list<int> lst;
//     lst.push_back(5);
//     lst.push_back(17);
//     lst.pop_back();
// 	lst.pop_back();
//     lst.push_back(3);
//     lst.push_back(5);
//     lst.push_back(737);
//     lst.push_back(0);

//     std::cout << "\n📌 Contenu de la std::list (itération normale):" << std::endl;
//     for (std::list<int>::iterator lit = lst.begin(); lit != lst.end(); ++lit)
//         std::cout << *lit << " ";
//     std::cout << std::endl;

//     return 0;
// }

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}