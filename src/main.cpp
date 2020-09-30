//============================================================================
// Name        : main.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : Karriere Tutor Übungsblatt LF2 - Templates
//============================================================================

#include <iostream>
#include <string>

#include "../include/mathe.hpp"

int main () {

int ia = 5, ib = 10;
double da = 9.83, db = 1.23;
std::string sa = "50", sb = "19";

std::cout << "Mathe::add\n";
std::cout << Mathe::add<int> (ia, ib) << "\n";
std::cout << Mathe::add<double> (da, db) << "\n";
std::cout << Mathe::add<std::string> (sa, sb) << "\n";

std::cout << "Mathe::sub\n";
std::cout << Mathe::sub<int> (ia, ib) << "\n";
std::cout << Mathe::sub<double> (da, db) << "\n";
std::cout << Mathe::sub<std::string> (sa, sb) << "\n";

std::cout << "Mathe::div\n";
std::cout << Mathe::div<int> (ia, ib) << "\n";
std::cout << Mathe::div<double> (da, db) << "\n";
std::cout << Mathe::div<std::string> (sa, sb) << "\n";

std::cout << "Mathe::times\n";
std::cout << Mathe::times<int> (ia, ib) << "\n";
std::cout << Mathe::times<double> (da, db) << "\n";
std::cout << Mathe::times<std::string> (sa, sb) << "\n";

std::cout << "Mathe::pow\n";
std::cout << Mathe::pow<int> (ia, ib) << "\n";
std::cout << Mathe::pow<double> (da, db) << "\n";
std::cout << Mathe::pow<std::string> (sa, sb) << "\n";

std::cout << "Mathe::mod\n";
std::cout << Mathe::mod<int> (ia, ib) << "\n";
std::cout << Mathe::mod<double> (da, db) << "\n";
std::cout << Mathe::mod<std::string> (sa, sb) << "\n";

std::cout << "Mathe::add - default int\n";
std::cout << Mathe::add (ia, ib) << "\n";
std::cout << Mathe::add (da, db) << "\n";
std::cout << Mathe::add (sa, sb) << "\n";

return 0;
}