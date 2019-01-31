/***************************************************************
 * Name:      wxCalcMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    H4K0 (h4k0@blahcorp.org)
 * Created:   2018-12-11
 * Copyright: H4K0 (www.blahcorp.org)
 * License:
 **************************************************************/

#include "wxCalcMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxCalcFrame)
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxCalcFrame)
const long wxCalcFrame::ID_BUTTON1 = wxNewId();
const long wxCalcFrame::ID_BUTTON2 = wxNewId();
const long wxCalcFrame::ID_TEXTCTRL1 = wxNewId();
const long wxCalcFrame::ID_STATICTEXT1 = wxNewId();
const long wxCalcFrame::ID_TEXTCTRL2 = wxNewId();
const long wxCalcFrame::ID_TEXTCTRL3 = wxNewId();
const long wxCalcFrame::ID_RADIOBOX1 = wxNewId();
const long wxCalcFrame::ID_STATICBITMAP1 = wxNewId();
const long wxCalcFrame::ID_PANEL1 = wxNewId();
const long wxCalcFrame::idMenuQuit = wxNewId();
const long wxCalcFrame::idMenuGuardar = wxNewId();
const long wxCalcFrame::idMenuAbout = wxNewId();
const long wxCalcFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxCalcFrame,wxFrame)
    //(*EventTable(wxCalcFrame)
    //*)
END_EVENT_TABLE()

wxCalcFrame::wxCalcFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxCalcFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("Simple wxWindows - BlahCorp"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(424,424));
    Move(wxPoint(-1,-1));
    SetMinSize(wxSize(-1,-1));
    SetMaxSize(wxSize(-1,-1));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("/home/h4k0/Documentos/Proyectos/CodeBlocks/wxCalc/img/Professor-icon2.png"))));
    	SetIcon(FrameIcon);
    }
    PanelCalc = new wxPanel(this, ID_PANEL1, wxPoint(0,-32), wxSize(384,352), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    PanelCalc->SetMinSize(wxSize(-1,-1));
    PanelCalc->SetMaxSize(wxSize(-1,-1));
    ButtonAceptar = new wxButton(PanelCalc, ID_BUTTON1, _("Aceptar"), wxPoint(280,256), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    ButtonCancelar = new wxButton(PanelCalc, ID_BUTTON2, _("Cancelar"), wxPoint(168,256), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrlNumero1 = new wxTextCtrl(PanelCalc, ID_TEXTCTRL1, _("Número 1"), wxPoint(112,112), wxDefaultSize, wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticTextSigno = new wxStaticText(PanelCalc, ID_STATICTEXT1, _("+"), wxPoint(224,128), wxSize(16,16), 0, _T("ID_STATICTEXT1"));
    TextCtrlNumero2 = new wxTextCtrl(PanelCalc, ID_TEXTCTRL2, _("Número 2"), wxPoint(248,112), wxDefaultSize, wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrlResultado = new wxTextCtrl(PanelCalc, ID_TEXTCTRL3, _("Resultado"), wxPoint(16,240), wxSize(144,64), wxTE_READONLY|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    wxString __wxRadioBoxChoices_1[8] =
    {
    	_("Sumar"),
    	_("Restar"),
    	_("Multiplicar"),
    	_("Dividir"),
    	_("Porcentaje"),
    	_("Raiz Cuadrada"),
    	_("Factorial"),
    	_("Logaritmo")
    };
    RadioBoxOperacion = new wxRadioBox(PanelCalc, ID_RADIOBOX1, _("Seleccione una operacion:"), wxPoint(16,160), wxSize(392,80), 8, __wxRadioBoxChoices_1, 2, wxRA_SPECIFY_ROWS, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBoxOperacion->SetMaxSize(wxSize(-1,-1));
    StaticBitmap1 = new wxStaticBitmap(PanelCalc, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/media/h4k0/cherryjazper/H4K0/gnu.png")).Rescale(wxSize(112,112).GetWidth(),wxSize(112,112).GetHeight())), wxPoint(0,8), wxSize(112,112), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuItem3 = new wxMenuItem(Menu1, idMenuGuardar, _("Guardar\tCtrl-G"), _("Genere una copia de la operaciones generadas"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxCalcFrame::OnButtonAceptarClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxCalcFrame::OnButtonCancelarClick);
    Connect(ID_RADIOBOX1,wxEVT_COMMAND_RADIOBOX_SELECTED,(wxObjectEventFunction)&wxCalcFrame::OnRadioBoxOperacionSelect);
    PanelCalc->Connect(wxEVT_PAINT,(wxObjectEventFunction)&wxCalcFrame::OnPanel1Paint,0,this);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxCalcFrame::OnQuit);
    Connect(idMenuGuardar,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxCalcFrame::OnMenuGuardar);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxCalcFrame::OnAbout);
    //*)
}

wxCalcFrame::~wxCalcFrame()
{
    //(*Destroy(wxCalcFrame)
    //*)
}

void wxCalcFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxCalcFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    msg = wxString("Develop by H4K0@BLAHCORP\nPowered by GNU/Linux\nUsing:\n\t" + msg);
    wxMessageBox(msg, ("Informatica BlahCorp"));
}

void wxCalcFrame::OnButtonAceptarClick(wxCommandEvent& event)
{
    wxString resultado;
    wxString text1;
    wxString text2;
    int num1;
    int num2;
    int in;
    double numd1;
    double numresultado;
    double const squr = (1/2);

    text1 = wxString(TextCtrlNumero1->GetValue());
    text2 = wxString(TextCtrlNumero2->GetValue());
    num1 = wxAtoi(text1);
    num2 = wxAtoi(text2);

    in = RadioBoxOperacion->GetSelection();
    /*
    RadioBox Index:
        0 = Sumar
        1 = Restar
        2 = Multiplicar
        3 = Dividir
        4 = Porcentaje
    	5 = Raiz Cuadrada
    	6 = Factorial
    	7 = Logaritmo
    */

    if (in == 0) numresultado = num1 + num2;
    if (in == 1) numresultado = num1 - num2;
    if (in == 2) numresultado = num1 * num2;
    if (in == 3) numresultado = num1 / num2;
    if (in == 4) numresultado = (num1 * num2)/100;
    if (in == 5) {
        //numd1 = num1;
        //numresultado = numd1*squr;
    }
    if (in == 6) {
        int c = 1, p = 1;
        while(c <= num1){
            p = p * c;
            c++;
        }
        numresultado = p;
    }



    resultado << numresultado;
    TextCtrlResultado->SetValue(wxString(resultado));

}

void wxCalcFrame::OnButtonCancelarClick(wxCommandEvent& event)
{
    wxMessageBox("Informatica BlahCorp");
    Close();
}

void wxCalcFrame::OnMenuGuardar(wxCommandEvent& event)
{

}

void wxCalcFrame::OnPanel1Paint(wxPaintEvent& event)
{
}

void wxCalcFrame::OnRadioBoxOperacionSelect(wxCommandEvent& event)
{
    int in;
    in = RadioBoxOperacion->GetSelection();
    /*
    RadioBox Index:
        0 = Sumar
        1 = Restar
        2 = Multiplicar
        3 = Dividir
        4 = Porcentaje
    	5 = Raiz Cuadrada
    	6 = Factorial
    	7 = Logaritmo
    */
    if (in == 0) StaticTextSigno->SetLabel("+");
    if (in == 1) StaticTextSigno->SetLabel("-");
    if (in == 2) StaticTextSigno->SetLabel("*");
    if (in == 3) StaticTextSigno->SetLabel("/");
    if (in == 4) StaticTextSigno->SetLabel("%");
    if (in == 5) StaticTextSigno->SetLabel("Squ");
    if (in == 6) StaticTextSigno->SetLabel("!");
    if (in == 7) StaticTextSigno->SetLabel("Log");
}
