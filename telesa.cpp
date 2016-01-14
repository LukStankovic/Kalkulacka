//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "telesa.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTelesa_form *Telesa_form;

//---------------------------------------------------------------------------
__fastcall TTelesa_form::TTelesa_form(TComponent* Owner)
	: TForm(Owner)
{
	
}
//---------------------------------------------------------------------------
void __fastcall TTelesa_form::zavritClick(TObject *Sender)
{
	Telesa_form->Close();
}
//---------------------------------------------------------------------------
void __fastcall TTelesa_form::ukoncitClick(TObject *Sender)
{
	Application->Terminate();	
}
//---------------------------------------------------------------------------
void __fastcall TTelesa_form::povrch_kvadrClick(TObject *Sender)
{
	float a=StrToFloat(kvadr_stranaA->Text),
			b=StrToFloat(kvadr_stranaB->Text),
			c = StrToFloat(kvadr_stranaC->Text);
	vysledek_kvadr->Caption = 2*(a*b+b*c+a*c);
}
//---------------------------------------------------------------------------
void __fastcall TTelesa_form::objem_kvadrClick(TObject *Sender)
{
	float a=StrToFloat(kvadr_stranaA->Text),
			b=StrToFloat(kvadr_stranaB->Text),
			c = StrToFloat(kvadr_stranaC->Text);

	vysledek_kvadr->Caption = a*b*c;
}
//---------------------------------------------------------------------------
void __fastcall TTelesa_form::povrch_valecClick(TObject *Sender)
{
	float r = StrToFloat(valec_polomer->Text),v = StrToFloat(valec_vyska->Text);
	vysledek_valec->Caption = 2*3.1415*r*(r+v);
}
//---------------------------------------------------------------------------

void __fastcall TTelesa_form::objem_valecClick(TObject *Sender)
{
    float r = StrToFloat(valec_polomer->Text),v = StrToFloat(valec_vyska->Text);
	vysledek_valec->Caption = 3.1415*r*r*v;
}
//---------------------------------------------------------------------------

void __fastcall TTelesa_form::povrch_kouleClick(TObject *Sender)
{
	
	float r = StrToFloat(koule_polomer->Text);
	vysledek_koule->Caption = 4*3.1415*r*r;
}
//---------------------------------------------------------------------------


void __fastcall TTelesa_form::objem_kouleClick(TObject *Sender)
{
	float r = StrToFloat(koule_polomer->Text);
	vysledek_koule->Caption = (4/3.0)*3.1415*r*r*r;	
}
//---------------------------------------------------------------------------

