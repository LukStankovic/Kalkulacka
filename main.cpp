//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "telesa.cpp"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double a,b,PI=3.14159265358979323846264338327950288419716939937510;
int zakliknuto = 0;

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->ClientHeight = 481;
	Form1->Constraints->MinHeight = 481;
	Form1->Constraints->MaxHeight = 481;

	Form1->ClientWidth = 335;
	Form1->Constraints->MinWidth = 365;
	Form1->Constraints->MaxWidth = 365;
	Pole->Caption = IntToStr(0);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::nulaClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption = 0;
		Postup->Caption = Postup->Caption + 0;
	}
	else{
		Pole->Caption = Pole->Caption + 0;
		Postup->Caption = 0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::jednaClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=1;
		Postup->Caption = Postup->Caption + 1;
	}
	else{
		Pole->Caption=Pole->Caption + 1;
		Postup->Caption = 1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dvaClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=2;
		Postup->Caption=Postup->Caption + 2;
	}
	else{
		Pole->Caption=Pole->Caption + 2;
		Postup->Caption = 2;

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::triClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=3;
       	Postup->Caption=Postup->Caption + 3;
	}
	else{
		Pole->Caption=Pole->Caption + 3;
		Postup->Caption = 3;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ctyriClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=4;
		Postup->Caption=Postup->Caption + 4;
	}
	else{
		Pole->Caption=Pole->Caption + 4;
		Postup->Caption =4;

    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::petClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=5;
		Postup->Caption=Postup->Caption + 5;
	}
	else{
		Pole->Caption=Pole->Caption + 5;
		Postup->Caption = 5;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sestClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=6;
		Postup->Caption=Postup->Caption + 6;
	}
	else{
		Pole->Caption=Pole->Caption + 6;
		Postup->Caption = 6;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sedmClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=7;
		Postup->Caption=Postup->Caption + 7;
	}
	else{
		Pole->Caption=Pole->Caption + 7;
		Postup->Caption = 7;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::osmClick(TObject *Sender)
{	if (Pole->Caption == 0){
		Pole->Caption=8;
		Postup->Caption=Postup->Caption + 8;
	}
	else{
		Pole->Caption=Pole->Caption + 8;
		Postup->Caption = 8;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::devetClick(TObject *Sender)
{
	if (Pole->Caption == 0){
		Pole->Caption=9;
		Postup->Caption=Postup->Caption + 9;
    }
	else{
		Pole->Caption=Pole->Caption + 9;
		Postup->Caption = 9;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::desetinnaClick(TObject *Sender)
{
	 Pole->Caption=Pole->Caption + ",";
	 Postup->Caption=Postup->Caption + ",";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::vymazatClick(TObject *Sender)
{
	Pole->Caption = 0;
	Postup->Caption = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::plusClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Pole->Caption = 0;
		Postup->Caption = Postup->Caption + "+";
		zakliknuto = 1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::minusClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Pole->Caption = 0;
		Postup->Caption = Postup->Caption  + "-";
		zakliknuto = 2;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::kratClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Pole->Caption = 0;
		Postup->Caption = Postup->Caption + "*";
		zakliknuto = 3;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::delenoClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Pole->Caption = 0;
		Postup->Caption = Postup->Caption + "/";
		zakliknuto = 4;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::mocninaClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Postup->Caption = "";
		Postup->Caption = Postup->Caption + a + "^2";
		Pole->Caption = a*a;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::odmocninaClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Postup->Caption = "";
		Postup->Caption = Postup->Caption + "sqrt(" + a + ")";
		Pole->Caption = sqrt(a);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prevracenaClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Pole->Caption = 1/a;
	}
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TForm1::rovnaseClick(TObject *Sender)
{
/*
+ -> 1
- -> 2
* -> 3
/ -> 4
x^y -> 5
*/
	if(zakliknuto == 1){
		b = StrToFloat(Pole->Caption);
		Pole->Caption = a+b;
	}
	if(zakliknuto == 2){
		b = StrToFloat(Pole->Caption);
		Pole->Caption = a-b;
	}
	if(zakliknuto == 3){
		b = StrToFloat(Pole->Caption);
		Pole->Caption = a*b;
	}
	if(zakliknuto == 4){
		b = StrToFloat(Pole->Caption);
		Pole->Caption = a/b;
	}
	if(zakliknuto == 5){
		b = StrToFloat(Pole->Caption);
		Pole->Caption = pow(a,b);
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::konecClick(TObject *Sender)
{
	Application->Terminate();	
}
//---------------------------------------------------------------------------


void __fastcall TForm1::vedeckaClick(TObject *Sender)
{
	 Form1->ClientWidth = 555;
	 Form1->Constraints->MaxWidth = 555;
	 Form1->Constraints->MinWidth = 555;
	 vedecka->Visible = false;
	 standart->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::standartClick(TObject *Sender)
{
	vedecka->Visible = true;
	standart->Visible = false;
	Form1->ClientWidth = 335;
	Form1->Constraints->MinWidth = 365;
	Form1->Constraints->MaxWidth = 365;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sinClick(TObject *Sender)
{
	a = StrToFloat(Pole->Caption);
	if((int)a%360==0||(int)a%360==180)
		Pole->Caption = 0;
	else{
		Pole->Caption = (a*(PI/180.0));
	  }   //CHYBÍ SIN

}
//---------------------------------------------------------------------------

void __fastcall TForm1::cosClick(TObject *Sender)
{

	 if((int)a%360==90||(int)a%360==270)
		Pole->Caption = 0;
	 else
		Pole->Caption = (a*PI/180);   //CHYBÍ COS
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tgClick(TObject *Sender)
{
	a = StrToFloat(Pole->Caption);
	Pole->Caption = tan(a*PI/180);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::factClick(TObject *Sender)
{
	 a = StrToFloat(Pole->Caption);
	 int x = 1;
	 try{
		if(a<0)
			throw 1;
			
		for(int i=1;i<=a;i++)
			x*=i;
		Postup->Caption = "";
		Postup->Caption = Postup->Caption + a + "!";
		Pole->Caption = x;
	 }

	 catch(int err){
		if(err==1)
			ShowMessage("Èíslo musí být kladné.");
	 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::piClick(TObject *Sender)
{
	Postup->Caption = Postup->Caption + PI;
	Pole->Caption = PI;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Xna3Click(TObject *Sender)
{
	a = StrToFloat(Pole->Caption);
	Postup->Caption = "";
	Postup->Caption = Postup->Caption + a + "^3";
	Pole->Caption = a*a*a;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::XnaYClick(TObject *Sender)
{
	if (Pole->Caption != 0){
		a = StrToFloat(Pole->Caption);
		Postup->Caption = Postup->Caption + "^";
		Pole->Caption = 0;
		zakliknuto = 5;
	}	
}
//---------------------------------------------------------------------------


void __fastcall TForm1::expClick(TObject *Sender)
{
	 a = StrToFloat(Pole->Caption);
     Postup->Caption = "";
	 Postup->Caption = Postup->Caption + "10^" + a;
	 Pole->Caption = pow(10,a);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::telesaClick(TObject *Sender)
{
	Telesa_form->Show();	
}
//---------------------------------------------------------------------------

