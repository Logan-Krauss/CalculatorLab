#include "Calc1.h"

wxIMPLEMENT_APP(Calc1);

Calc1::Calc1()
{

}

Calc1::~Calc1()
{

}

bool Calc1::OnInit()
{
	m_frame1 = new calcMain();
	m_frame1->Show();

	return true;
}