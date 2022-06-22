#pragma once
#include "Command.h"
#include "string"
class Addition {
public:
	virtual std::string Execute(int one, int two)
	{
		std::string add = std::to_string(one + two);
		return add;
	}


};