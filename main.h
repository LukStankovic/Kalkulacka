//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *nula;
	TButton *jedna;
	TButton *dva;
	TButton *tri;
	TButton *ctyri;
	TButton *sest;
	TButton *pet;
	TButton *sedm;
	TButton *devet;
	TButton *osm;
	TPanel *Panel3;
	TButton *deleno;
	TButton *krat;
	TButton *minus;
	TButton *plus;
	TButton *vymazat;
	TButton *rovnase;
	TButton *desetinna;
	TButton *prevracena;
	TButton *odmocnina;
	TButton *mocnina;
	TLabel *Pole;
	TLabel *Postup;
	TButton *konec;
	TButton *telesa;
	TButton *vedecka;
	TButton *standart;
	TPanel *Panel4;
	TButton *XnaY;
	TButton *exp;
	TButton *Xna3;
	TButton *tg;
	TButton *pi;
	TButton *sin;
	TButton *fact;
	TButton *cos;
	void __fastcall nulaClick(TObject *Sender);
	void __fastcall jednaClick(TObject *Sender);
	void __fastcall dvaClick(TObject *Sender);
	void __fastcall triClick(TObject *Sender);
	void __fastcall ctyriClick(TObject *Sender);
	void __fastcall petClick(TObject *Sender);
	void __fastcall sestClick(TObject *Sender);
	void __fastcall sedmClick(TObject *Sender);
	void __fastcall osmClick(TObject *Sender);
	void __fastcall devetClick(TObject *Sender);
	void __fastcall desetinnaClick(TObject *Sender);
	void __fastcall vymazatClick(TObject *Sender);
	void __fastcall plusClick(TObject *Sender);
	void __fastcall rovnaseClick(TObject *Sender);
	void __fastcall minusClick(TObject *Sender);
	void __fastcall kratClick(TObject *Sender);
	void __fastcall delenoClick(TObject *Sender);
	void __fastcall mocninaClick(TObject *Sender);
	void __fastcall odmocninaClick(TObject *Sender);
	void __fastcall prevracenaClick(TObject *Sender);
	void __fastcall konecClick(TObject *Sender);
	void __fastcall vedeckaClick(TObject *Sender);
	void __fastcall standartClick(TObject *Sender);
	void __fastcall sinClick(TObject *Sender);
	void __fastcall cosClick(TObject *Sender);
	void __fastcall factClick(TObject *Sender);
	void __fastcall piClick(TObject *Sender);
	void __fastcall Xna3Click(TObject *Sender);
	void __fastcall XnaYClick(TObject *Sender);
	void __fastcall expClick(TObject *Sender);
	void __fastcall telesaClick(TObject *Sender);
	void __fastcall tgClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *hlOkno;
//---------------------------------------------------------------------------
#endif
