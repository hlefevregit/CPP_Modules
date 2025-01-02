/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:02:25 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/02 15:05:31 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstdlib>

class ScalarConvert {
public:
    static void convert(const std::string &input);
private:
    ScalarConvert();
    ScalarConvert(const ScalarConvert &src);
    ScalarConvert &operator=(const ScalarConvert &src);
    ~ScalarConvert();

    static bool isChar(const std::string &input);
    static bool isInt(const std::string &input);
    static bool isFloat(const std::string &input);
    static bool isDouble(const std::string &input);
};

#endif