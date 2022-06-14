#pragma once

#include "wx/wx.h"
#include "calcMain.h"

//app launcher
class Calc1 : public wxApp
{
public:
	Calc1();
	~Calc1();

private: 
	calcMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

