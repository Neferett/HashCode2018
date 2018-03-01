/*
** EPITECH PROJECT, 2018
** Ride
** File description:
** Declaration of Ride
*/

#ifndef Ride_HPP
	#define Ride_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Ride {
public:
	Ride(std::string line);

	void parseLine();
	std::pair<int, int> getFrom() const;
	std::pair<int, int> getTo() const;
	int getStart() const;
	int getFinish() const;
	int getDistance() const;
	~Ride();
private:
	std::string line;
	std::pair<int, int> from;
	std::pair<int, int> to;
	int start;
	int finish;
	int distance;
};

#endif /* Ride_HPP */
