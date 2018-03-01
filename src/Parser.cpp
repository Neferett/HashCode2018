/*
** EPITECH PROJECT, 2018
** Parser.cpp
** File description:
** Implementation of Parser.cpp
*/

#include "Parser.hpp"

void Parser::getFirstLineInfos()
{
	std::string rows;
	std::string columns;
	std::string vehicules;
	std::string rides;
	std::string bonus;
	std::string steps;
	std::istringstream f(this->file[0]);

	std::getline(f, rows, ' ');
	std::getline(f, columns, ' ');
	std::getline(f, vehicules, ' ');
	std::getline(f, rides, ' ');
	std::getline(f, bonus, ' ');
	std::getline(f, steps, '\0');
	this->rows = atoi(rows.c_str());
	this->columns = atoi(columns.c_str());
	this->vehicules = atoi(vehicules.c_str());
	this->rides = atoi(rides.c_str());
	this->bonus = atoi(bonus.c_str());
	this->steps = atoi(steps.c_str());
}

void Parser::createRides()
{
	for (int i = 1; i <= this->rides; i++)
		this->ridescontents.push_back(new Ride(this->file[i]));
}

Parser::Parser(char const *filename) : rows(0), columns(0), vehicules(0), rides(0), bonus(0), steps(0)
{
	this->filename = filename;
	if (!this->build())
		throw std::logic_error("Error opening file");
	this->getFirstLineInfos();
	this->createRides();
	this->processAlgo();
}

bool Parser::build()
{
	std::string buff;
	std::ifstream stream(this->filename);

	if (!stream)
		return false;
	while (getline(stream, buff))
		this->file.push_back(buff);
	return true;
}

void Parser::processAlgo()
{
	std::ofstream output;
	int j = 0;
	int base = rides / vehicules;

	output.open(std::string("outputs/out") + filename[6], std::fstream::out);
	for (int i = 0; i < this->vehicules; ++i)
	{
		output << base;
		for (int k = 0; k < base; ++k)
		{
			output << " " << j + k;
		}
		output << std::endl;
		j += base;
	}
	output.close();
}
