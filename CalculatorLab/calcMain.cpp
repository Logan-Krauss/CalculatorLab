#include "calcMain.h"
#include "ButtonFactory.h"
#include "Singleton.h"
#include "Command.h"
#include <vector>
#include <iostream>
#include "Addition.h"
#include "Subtracting.h"
#include "Multiplication.h"
#include "Division.h"

wxBEGIN_EVENT_TABLE(calcMain, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()

int one = 0;
int two = 0;
std::string sone = "";
std::string stwo = "";
std::string symbol = "";
bool symbCheck = false;

calcMain::calcMain() : wxFrame(/*parent*/ nullptr, wxID_ANY, "Calculator by Logan", wxPoint(50,50), wxSize(600,800))
{
	wxFont font(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	m_display = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 1), wxSize(590, 100));
	m_btn1 = new wxButton(this, 1, "C", wxPoint(20, 70), wxSize(1, 30));
	m_btn2 = new wxButton(this, 2, "", wxPoint(30, 70), wxSize(30, 30));
	m_btn3 = new wxButton(this, 3, "%", wxPoint(10, 70), wxSize(30, 30));
	m_btn4 = new wxButton(this, 4, "/", wxPoint(10, 70), wxSize(30, 30));
	m_btn5 = new wxButton(this, 5, "7", wxPoint(10, 70), wxSize(30, 30));
	m_btn6 = new wxButton(this, 6, "8", wxPoint(10, 70), wxSize(30, 30));
	m_btn7 = new wxButton(this, 7, "9", wxPoint(10, 70), wxSize(30, 30));
	m_btn8 = new wxButton(this, 8, "*", wxPoint(10, 70), wxSize(30, 30));
	m_btn9 = new wxButton(this, 9, "4", wxPoint(10, 70), wxSize(30, 30));
	m_btn10 = new wxButton(this, 0, "5", wxPoint(10, 70), wxSize(30, 30));
	m_btn11 = new wxButton(this, wxID_ANY, "6", wxPoint(10, 70), wxSize(30, 30));
	m_btn12 = new wxButton(this, wxID_ANY, "-", wxPoint(10, 70), wxSize(30, 30));
	m_btn13 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 70), wxSize(30, 30));
	m_btn14 = new wxButton(this, wxID_ANY, "2", wxPoint(10, 70), wxSize(30, 30));
	m_btn15 = new wxButton(this, wxID_ANY, "3", wxPoint(10, 70), wxSize(30, 30));
	m_btn16 = new wxButton(this, wxID_ANY, "+", wxPoint(10, 70), wxSize(30, 30));

	m_btn17 = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));
	m_btn18 = new wxButton(this, wxID_ANY, "0", wxPoint(10, 70), wxSize(30, 30));
	m_btn19 = new wxButton(this, wxID_ANY, ".", wxPoint(10, 70), wxSize(30, 30));
	m_btn20 = new wxButton(this, wxID_ANY, "=", wxPoint(10, 70), wxSize(30, 30));

	//Bin hex dec
	m_btn21 = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));
	m_btn22 = new wxButton(this, wxID_ANY, "BIN", wxPoint(10, 70), wxSize(30, 30));
	m_btn23 = new wxButton(this, wxID_ANY, "HEX", wxPoint(10, 70), wxSize(30, 30));
	m_btn24 = new wxButton(this, wxID_ANY, "DEC", wxPoint(10, 70), wxSize(30, 30));

	m_btna = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));
	m_btnb = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));
	m_btnc = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));
	m_btnd = new wxButton(this, wxID_ANY, "", wxPoint(10, 70), wxSize(30, 30));

	

	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 8, 8);

	//Space for the text display to go
	grid->Add(m_btna, 0, wxEXPAND);
	grid->Add(m_btnb, 0, wxEXPAND);
	grid->Add(m_btnc, 0, wxEXPAND);
	grid->Add(m_btnd, 0, wxEXPAND);

	//calculator buttons
	grid->Add(m_btn1, 0, wxEXPAND);
	grid->Add(m_btn2, 0, wxEXPAND);
	grid->Add(m_btn3, 0, wxEXPAND);
	grid->Add(m_btn4, 0, wxEXPAND);
	grid->Add(m_btn5, 0, wxEXPAND);
	grid->Add(m_btn6, 0, wxEXPAND);
	grid->Add(m_btn7, 0, wxEXPAND);
	grid->Add(m_btn8, 0, wxEXPAND);
	grid->Add(m_btn9, 0, wxEXPAND);
	grid->Add(m_btn10, 0, wxEXPAND);
	grid->Add(m_btn11, 0, wxEXPAND);
	grid->Add(m_btn12, 0, wxEXPAND);
	grid->Add(m_btn13, 0, wxEXPAND);
	grid->Add(m_btn14, 0, wxEXPAND);
	grid->Add(m_btn15, 0, wxEXPAND);
	grid->Add(m_btn16, 0, wxEXPAND);
	grid->Add(m_btn17, 0, wxEXPAND);
	grid->Add(m_btn18, 0, wxEXPAND);
	grid->Add(m_btn19, 0, wxEXPAND);
	grid->Add(m_btn20, 0, wxEXPAND);
	grid->Add(m_btn21, 0, wxEXPAND);
	grid->Add(m_btn22, 0, wxEXPAND);
	grid->Add(m_btn23, 0, wxEXPAND);
	grid->Add(m_btn24, 0, wxEXPAND);

	m_display->SetFont(font);
	m_btn1->SetFont(font);
	m_btn2->SetFont(font);
	m_btn3->SetFont(font);
	m_btn4->SetFont(font);
	m_btn5->SetFont(font);
	m_btn6->SetFont(font);
	m_btn7->SetFont(font);
	m_btn8->SetFont(font);
	m_btn9->SetFont(font);
	m_btn10->SetFont(font);
	m_btn11->SetFont(font);
	m_btn12->SetFont(font);
	m_btn13->SetFont(font);
	m_btn14->SetFont(font);
	m_btn15->SetFont(font);
	m_btn16->SetFont(font);
	m_btn17->SetFont(font);
	m_btn18->SetFont(font);
	m_btn19->SetFont(font);
	m_btn20->SetFont(font);
	m_btn21->SetFont(font);
	m_btn22->SetFont(font);
	m_btn23->SetFont(font);
	m_btn24->SetFont(font);
	

	nField = new int[nFieldWidth * nFieldHeight];	
	//for (int x = 0; x < nFieldWidth; x++)
	//{
	//	for (int y = 0; y < nFieldHeight; y++)
	//	{
	//		btn[y * nFieldWidth + x] = new wxButton(this, 10000 + (y * nFieldWidth + x));
	//		grid->Add(btn[y * nFieldWidth + x], 1, wxEXPAND | wxALL); //Keep track of wxExpand

	//		btn[y * nFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &calcMain::OnButtonClicked, this);
	//		nField[y * nFieldWidth + x] = 0;
	//	}
	//}

	this->SetSizer(grid);
	grid->Layout();
}

calcMain::~calcMain() {}

void calcMain::OnButtonClicked(wxCommandEvent& evt)
{
	std::string temp = "";
	std::string temp2 = "";
	wxButton* tst = dynamic_cast<wxButton*>(evt.GetEventObject());
	temp2 = tst->GetLabel();
	Singleton* processor = Singleton::GetInstance();

	//.c_strfunction
	//isdigit
	if (isdigit(temp2[0]))
	{
		if (symbCheck == true)
		{
			if (two != 0)
			{
				stwo = std::to_string(two);
				stwo += tst->GetLabel();
			}
			else
			{
				stwo += tst->GetLabel();
			}
		}
	}
	if (tst == m_btn1)
	{
		m_display->Clear();
	}
	else if (tst == m_btn16)
	{
		sone = m_display->GetValue();
		symbol = "+";
		m_display->AppendText("+");
		symbCheck = true;
	}
	else if (tst == m_btn12)
	{
		sone = m_display->GetValue();
		symbol = "-";
		m_display->AppendText("-");
		symbCheck = true;
	}
	else if (tst == m_btn4)
	{
		sone = m_display->GetValue();
		symbol = "/";
		m_display->AppendText("/");
		symbCheck = true;
	}
	else if (tst == m_btn8)
	{
		sone = m_display->GetValue();
		symbol = "*";
		m_display->AppendText("*");
		symbCheck = true;
	}
	else if (tst == m_btn22) //bin
	{
		processor->SetBaseNumber(wxAtoi(m_display->GetValue()));
		m_display->Clear();
		m_display->AppendText(processor->GetBinary());
	}
	else if (tst == m_btn23) //hex
	{
		processor->SetBaseNumber(wxAtoi(m_display->GetValue()));
		m_display->Clear();
		m_display->AppendText(processor->GetHexaDecimal());
	}
	else if (tst == m_btn24) //dec
	{
		processor->SetBaseNumber(wxAtoi(m_display->GetValue()));
		m_display->Clear();
		m_display->AppendText(processor->GetDecimal());
	}
	else if (tst == m_btn20)
	{
		symbCheck = false;
		if (symbol == "+")
		{
			one = wxAtoi(sone);
			two = wxAtoi(stwo);
			m_display->Clear();
			Addition* addd = new Addition();
			m_display->AppendText(addd->Execute(one, two));
		}
		if (symbol == "-")
		{
			one = wxAtoi(sone);
			two = wxAtoi(stwo);
			m_display->Clear();
			Subtracting* subbb = new Subtracting();
			m_display->AppendText(subbb->Execute(one, two));
		}
		else if (symbol == "/")
		{
			one = wxAtoi(sone);
			two = wxAtoi(stwo);
			m_display->Clear();
			Division* divv = new Division();
			m_display->AppendText(divv->Execute(one, two));
		}
		else if (symbol == "*")
		{
			one = wxAtoi(sone);
			two = wxAtoi(stwo);
			m_display->Clear();
			Multiplication* divv = new Multiplication();
			m_display->AppendText(divv->Execute(one, two));
		}
		
		sone.clear();
		stwo.clear();
		one = 0;
		two = 0;
	}
	else
	{
		temp += tst->GetLabel();
		m_display->AppendText(temp);
	}


	std::vector<Command*> commands;

	
	/*evt.Skip();*/
	
	
}