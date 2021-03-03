#include <fmx.h>
#pragma hdrstop
#pragma package(smart_init)
#pragma resource "*.fmx"

#include "UMain.h"
#include <modInclude.h>
#include <TCommonRoutines.h>
#include <TTemperature.h>

TFormMain *FormMain;

__fastcall TFormMain::TFormMain(TComponent* Owner)
   : TForm(Owner)
{
}

void __fastcall TFormMain::ConvertButtomClick(TObject *Sender)
{
int category, inputOption;

   category = CategoryList->ItemIndex;

   switch ( category )
   {
      case 0: // NULL Option
      {
         MessageBoxA( NULL, "Choose a category to continue!", "Invalid Option", 0 );
         //MessageBoxA( NULL, "Enter a valid entry!", "Invalid Input", 0 );

         break;
      }
      case 1: // Distance
      {
         break;
      }
      case 2: // Numbers
      {
         break;
      }
      case 3: // Temperature
      {
         inputOption = Input1List->ItemIndex;

         switch ( inputOption )
         {
            case 0:
            {
            }
            case 1:
            {
               float temperature;

               Input2->Text = CelciusToKelvin( StrToFloat( Input1->Text ));
            }
            default:
            {
               break;
            }
         }
         break;
      }
      default:
      {
         break;
      }
   }
}
