//---------------------------------------------------------------------------

#ifndef telesaH
#define telesaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTelesa_form : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *zavrit;
	TButton *ukoncit;
	TLabeledEdit *kvadr_stranaA;
	TLabeledEdit *kvadr_stranaB;
	TLabeledEdit *kvadr_stranaC;
	TLabel *Label1;
	TLabel *vysledek_kvadr;
	TButton *povrch_kvadr;
	TButton *objem_kvadr;
	TButton *objem_valec;
	TButton *povrch_valec;
	TLabeledEdit *valec_vyska;
	TLabeledEdit *valec_polomer;
	TLabel *Label2;
	TLabel *vysledek_valec;
	TButton *objem_koule;
	TLabeledEdit *koule_polomer;
	TLabel *Label3;
	TLabel *vysledek_koule;
	TButton *povrch_koule;
	void __fastcall zavritClick(TObject *Sender);
	void __fastcall ukoncitClick(TObject *Sender);
	void __fastcall povrch_kvadrClick(TObject *Sender);
	void __fastcall objem_kvadrClick(TObject *Sender);
	void __fastcall povrch_valecClick(TObject *Sender);
	void __fastcall objem_valecClick(TObject *Sender);
	void __fastcall povrch_kouleClick(TObject *Sender);
	void __fastcall objem_kouleClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTelesa_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTelesa_form *Telesa_form;
//---------------------------------------------------------------------------
#endif
