/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

# include "Parser.hpp"

int main(int const argc, char const * const * argv)
{
	Parser *parser;

	if (argc < 2)
		return 84;
	parser = new Parser(argv[1]);
	(void)parser;
	return 0;
}
