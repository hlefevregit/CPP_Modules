/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:05:42 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/02 15:21:28 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {}

ScalarConvert::~ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &src) {
	*this = src;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &src) {
	(void)src;
	return *this;
}

bool ScalarConvert::isChar(const std::string &input) {
	return input.length() == 3 && input[0] == '\'' && input[2] == '\'';
}

bool ScalarConvert::isInt(const std::string &input) {
	char *end;
	std::strtol(input.c_str(), &end, 10);
	return *end == '\0';
}

bool ScalarConvert::isFloat(const std::string &input) {
	if (input == "nanf" || input == "+inff" || input == "-inff") {
		return true;
	}
	char *end;
	std::strtof(input.c_str(), &end);
	return *end = 'f' && *(end + 1) == '\0';
}

bool ScalarConvert::isDouble(const std::string &input) {
	if (input == "nan" || input == "+inf" || input == "-inf") {
		return true;
	}
	char *end;
	std::strtod(input.c_str(), &end);
	return *end == '\0';
}

void	ScalarConvert::convert(const std::string &input) {
	char c = 0;
	int i = 0;
	float f = 0;
	double d = 0.0;

	try {
		if (isChar(input)) {
			c = input[1];
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);
		} else if (isInt(input)) {
			char *end;
			i = std::strtol(input.c_str(), &end, 10);
			if (*end != '\0') throw std::invalid_argument("invalid int argument");
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
		} else if (isFloat(input)) {
			char *end;
			f = std::strtof(input.c_str(), &end);
			if (*end != 'f' || *(end + 1) != '\0') throw std::invalid_argument("invalid float argument");
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
		} else if (isDouble(input)) {
			char *end;
			d = std::strtod(input.c_str(), &end);
			if (*end != '\0') throw std::invalid_argument("invalid double argument");
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		} else {
			throw std::invalid_argument("invalid argument");
		}
		if (std::isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else if (i >= 0 && i <= 255) {
			std::cout << "char: Non displayable" << std::endl;
		}
		else {
			std::cout << "char: impossible" << std::endl;
		}

		if (std::isnan(d) || std::isinf(d)) {
			std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << i << std::endl;
		}

		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Error: impossible" << std::endl;
	}
}