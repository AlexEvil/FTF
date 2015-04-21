//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <Math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
double i(1.001);
double Lg;
int lg;
AnsiString LG;
while (i < 1.999)
 {
  Lg = log10(i);
  Lg *= 100000;
  lg = (int)Lg;
  LG = FloatToStrF(log10(i),2,5,5);
  ListBox2->Items->Add("                RETLW   HIGH    0x"+IntToHex(lg,4)+ "           ;log("+FloatToStrF(i,2,5,5)+")     =    " + LG);
  ListBox2->Items->Add("                RETLW   LOW     0x"+IntToHex(lg,4)+ "           ;log("+FloatToStrF(i,2,5,5)+")     =    " + LG);
  i += 0.001;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
 ListBox2->Items->SaveToFile("TABLE.INC");
 MessageBox(0,"THE TABLE SAVED","Message",MB_OK);
}
//---------------------------------------------------------------------------
