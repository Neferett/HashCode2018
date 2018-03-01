/*
** EPITECH PROJECT, 2018
** Parser.cpp
** File description:
** Declaration of Parser.cpp
*/

#ifndef Parser_HPP
	#define Parser_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Ride.hpp"

class Parser {
public:
	Parser(char const *);
	void getFirstLineInfos();
	void createRides();
	bool build();
	void processAlgo();
private:
	int rows;
	int columns;
	int vehicules;
	int rides;
	int bonus;
	int steps;
	std::string filename;
	std::vector<std::string> file;
	std::vector<Ride *> ridescontents;
};

#endif /* Parser.cpp_HPP */
