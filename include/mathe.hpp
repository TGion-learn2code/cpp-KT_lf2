//============================================================================
// Name        : mathe.hpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : Karriere Tutor Übungsblatt LF2 - Templates
//============================================================================

#ifndef MATHE_HPP_
#define MATHE_HPP_

#include <cmath>
#include <string>

namespace Mathe {
        template <typename T = int>
        T add (const T& a, const T& b) {
                return a + b;
        }

        template <>
        std::string add (const std::string& a, const std::string& b) {
                return std::to_string (add (std::stod(a), std::stod(b)));
        }
        
        template <typename T = int>
        T sub (const T& a, const T& b) {
                return a - b;
        }

        template <>
        std::string sub (const std::string& a, const std::string& b) {
                return std::to_string (sub (std::stod(a), std::stod(b)));
        }

        template <typename T = int>
        T div (const T& a, const T& b) {
                if (b == 0) {
                        std::cerr << "div through zero will brake the universe!\n"; 
                        return 0;
                }
                return a / b;
        }

        template <>
        std::string div (const std::string& a, const std::string& b) {
                return std::to_string (div (std::stod(a), std::stod(b)));
        }

        template <typename T = int>
        T times (const T& a, const T& b) {
                return a * b;
        }

        template <>
        std::string times (const std::string& a, const std::string& b) {
                return std::to_string (times (std::stod(a), std::stod(b)));
        }

        template <typename T = int>
        T pow (const T& a, const int& b) {
                return static_cast<T>(std::pow(a, b));
        }

        template <typename T = int>
        std::string pow (const std::string& a, const std::string& b) {
                return std::to_string (pow (std::stod(a), std::stoi(b)));
        }

        template <typename T = int>
        T mod (const int& a, const int& b) {
                if (b == 0) {
                        std::cerr << "mod through zero will brake the universe!\n"; 
                        return 0;
                }
                return (a % b);
        }

        template <typename T = int>
        std::string mod (const std::string& a, const std::string& b) {
                return std::to_string (mod (std::stoi(a), std::stoi(b)));
        }

}


#endif // MATHE_HPP_