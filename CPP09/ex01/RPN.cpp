/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:53:33 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/14 14:57:57 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int RPN ::evaluate(const std::string &expr)
{
	std::stack<int> stack;
	std::stringstream iss(expr);
	std::string token;

	while (iss >> token)
	{
		if (isdigit(token[0]) && token.size() == 1)
		{
			stack.push(atoi(token.c_str()));
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (stack.size() < 2)
				throw std::runtime_error("Error : not enough operands.");
			
			int b = stack.top(); stack.pop();
			int a = stack.top(); stack.pop();
			int result = 0;

			if (token == "+") result = a + b;
			else if (token == "-") result = a - b;
			else if (token == "*") result = a * b;
			else if (token == "/")
			{
				if (b == 0)
					throw std::runtime_error("Error : division by zero.");
				result = a / b;
			}
			stack.push(result);
		}
		else
			throw std::runtime_error("Error : invalid token.");
	}
	if (stack.size() != 1)
		throw std::runtime_error("Error : too many operands.");
	return stack.top();
}