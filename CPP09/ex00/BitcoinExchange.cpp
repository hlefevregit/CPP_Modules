/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:24:09 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/10 17:55:02 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { 
	loadDatabase("data.csv");
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isLapYear(const int &year) const {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool BitcoinExchange::isDateValid(const std::string &date) const {
	int year, month, day;

	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return false;
	
	if (year < 2009 || month < 1 || month > 12 || day < 1)
		return false;

	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (isLapYear(year))
		daysInMonth[1] = 29;
	return day <= daysInMonth[month - 1];
}

void BitcoinExchange::loadDatabase(std::string filename)
{
	std::ifstream file(filename.c_str());
	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date, rate;
		std::getline(ss, date, ',');
		std::getline(ss, rate, ',');
		_rate[date] = std::strtod(rate.c_str(), NULL);
	}
	file.close();
}

double BitcoinExchange::getRate(std::string &date) const
{
	std::map<std::string, double>::const_iterator it = _rate.lower_bound(date);

	if (it == _rate.end())
		return (--it)->second;
	if (it->first == date)
		return it->second;
	if (it != _rate.begin())
		return (--it)->second;
	return 0.0;
}

void BitcoinExchange::processInput(const std::string &filename) const
{
	std::ifstream file(filename.c_str());

	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
	
	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date, amount;

		if (!std::getline(ss, date, '|') || !std::getline(ss, amount))
		{
			std::cerr << "Error: invalid input." << std::endl;
			continue ;
		}

		if (!isDateValid(date))
		{
			std::cerr << date << "Error: invalid date." << std::endl;
			continue ;
		}
		
		date.erase(0, date.find_first_not_of(" \t"));
		date.erase(date.find_last_not_of(" \t") + 1);
		amount.erase(0, amount.find_first_not_of(" \t"));
		amount.erase(amount.find_last_not_of(" \t") + 1);
		
		double value;

		try {
			value = std::strtod(amount.c_str(), NULL);
		} catch (...) {
			std::cerr << "Error: invalid input." << std::endl;
			continue ;
		}

		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (value > 1000)
		{
			std::cerr << "Error: too large amount." << std::endl;
			continue ;
		}

		double rate = getRate(date);
		std::cout << date << " ==> " << value << " = " << (value * rate) << std::endl;
	}
	file.close();
}