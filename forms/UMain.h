//---------------------------------------------------------------------------

#ifndef UMainH
#define UMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
   TComboBox *categoryList;
   TListBoxItem *ListBoxItem1;
   TListBoxItem *ListBoxItem2;
   TListBoxItem *ListBoxItem3;
   TLabel *title;
   TLabel *categoryLabel;
   TComboBox *input2List;
   TComboBox *input1List;
   TEdit *input1;
   TEdit *input2;
   TButton *convert;
   TListBoxItem *Romanos;
   TListBoxItem *Decimal;
   void __fastcall convertClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
   __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif