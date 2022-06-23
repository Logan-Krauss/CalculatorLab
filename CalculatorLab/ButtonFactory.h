#pragma once
#include "Calc1.h"
#include "calcMain.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();

	wxButton* Create(calcMain* temp, int id, std::string label, int x, int y);
	//wxButton* Clear(calcMain* temp);

};

