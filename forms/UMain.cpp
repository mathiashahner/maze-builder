//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::convertClick(TObject *Sender)
{
int I =  1;
int V =  5;
int X = 10;

int count_1, count_2;

char * buff;

   //strcpy( buff, (const char *)input1->Text.c_str() );
   buff = (char *)input1->Text.c_str();

   for( count_1 = 0; count_1 < strlen( buff ); count_1++ )
   {
      if ( 1 )
      {
      int result;
      result = strlen( buff );

         input2->Text = result;
         input2->Text = buff[count_1];
      }
   }
}
//---------------------------------------------------------------------------
