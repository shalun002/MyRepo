#pragma once
#include <iostream>
#include <string>

class Question
{
public:

	Question();
	~Question();

	std::string content;
	std::string variants[4];
	std::string right;

};

