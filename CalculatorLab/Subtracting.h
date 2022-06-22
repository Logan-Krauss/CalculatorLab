#pragma once
#include "Command.h"
#include "string"
class Subtracting {
public:
	virtual std::string Execute(int one, int two)
	{
		std::string subb = std::to_string(one - two);
		return subb;
	}


};