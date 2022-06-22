#pragma once
#include "Command.h"
#include "string"
class Multiplication {
public:
	virtual std::string Execute(int one, int two)
	{
		std::string Multt = std::to_string(one * two);
		return Multt;
	}


};