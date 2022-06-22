#pragma once
#include "Command.h"
#include "string"
class Division {
public:
	virtual std::string Execute(int one, int two)
	{
		std::string divv = std::to_string(one / two);
		return divv;
	}


};