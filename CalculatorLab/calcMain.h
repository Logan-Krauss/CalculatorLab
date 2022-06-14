#pragma once
#include "wx/wx.h"

//User Interface
class calcMain : public wxFrame
{
public:
	calcMain();
	~calcMain();

public:
	int nFieldWidth = 7;
	int nFieldHeight = 4;
	wxButton** btn;

	int* nField = nullptr;
	bool bFirstClick = true;

	wxTextCtrl* m_display = nullptr;

	wxButton* m_btna = nullptr;
	wxButton* m_btnb = nullptr;
	wxButton* m_btnc = nullptr;
	wxButton* m_btnd = nullptr;

	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;
	wxButton* m_btn10 = nullptr;
	wxButton* m_btn11 = nullptr;
	wxButton* m_btn12 = nullptr;
	wxButton* m_btn13 = nullptr;
	wxButton* m_btn14 = nullptr;
	wxButton* m_btn15 = nullptr;
	wxButton* m_btn16 = nullptr;
	wxButton* m_btn17 = nullptr;
	wxButton* m_btn18 = nullptr;
	wxButton* m_btn19 = nullptr;
	wxButton* m_btn20 = nullptr;
	wxButton* m_btn21 = nullptr;
	wxButton* m_btn22 = nullptr;
	wxButton* m_btn23 = nullptr;
	wxButton* m_btn24 = nullptr;


	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};


