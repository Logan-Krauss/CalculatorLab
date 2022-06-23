#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {

}
ButtonFactory::~ButtonFactory() {

}
wxButton* ButtonFactory::Create(calcMain* temp, int id, std::string label, int x, int y)
{
	wxButton* tmp_btn = new wxButton(temp, id, label, wxPoint(x, y), wxSize(50, 50));
	return tmp_btn;
}