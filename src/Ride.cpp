/*
** EPITECH PROJECT, 2018
** Ride
** File description:
** Implementation of Ride
*/

#include "Ride.hpp"

Ride::Ride(std::string line)
{
	this->line = line;
	this->parseLine();
}

void Ride::parseLine()
{
	std::string pa1;
	std::string pa2;
	std::string pb1;
	std::string pb2;
	std::string start;
	std::string finish;
	std::istringstream f(this->line);

	std::getline(f, pa1, ' ');
	std::getline(f, pa2, ' ');
	std::getline(f, pb1, ' ');
	std::getline(f, pb2, ' ');
	std::getline(f, start, ' ');
	std::getline(f, finish, '\0');
	this->from = std::make_pair(atoi(pa1.c_str()), atoi(pa2.c_str()));
	this->to = std::make_pair(atoi(pb1.c_str()), atoi(pb2.c_str()));
	this->start = atoi(start.c_str());
	this->finish = atoi(finish.c_str());
//	this->distance = abs(from.first - to.first) + abs(from.second - to.second);
}

std::pair<int, int> Ride::getFrom() const
{
	return this->from;
}

std::pair<int, int> Ride::getTo() const
{
	return this->to;
}

int Ride::getDistance() const
{
	return this->distance;
}

int Ride::getStart() const
{
	return this->start;
}

int Ride::getFinish() const
{
	return this->finish;
}

Ride::~Ride()
{

}
