/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:19:44 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/10 17:50:25 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();

		void loadDatabase(std::string filename);
		double getRate(std::string &date) const;
		void processInput(const std::string &filename) const;
		bool isDateValid(const std::string &date) const;
		bool isLapYear(const int &year) const;

	private:
		std::map<std::string, double> _rate;
};

#endif