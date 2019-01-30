/***************************************************************
 * Name:      wxCalcMain.h
 * Purpose:   Defines Application Frame
 * Author:    H4K0 (h4k0@blahcorp.org)
 * Created:   2018-12-11
 * Copyright: H4K0 (www.blahcorp.org)
 * License:
 **************************************************************/

#ifndef WXCALCMAIN_H
#define WXCALC
//MAIN_H

//(*Headers(wxCalcFrame)
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/radiobox.h>
#include <wx/statbmp.h>
//*)

class wxCalcFrame: public wxFrame
{
    public:

        wxCalcFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxCalcFrame();

    private:

        //(*Handlers(wxCalcFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButtonAceptarClick(wxCommandEvent& event);
        void OnButtonCancelarClick(wxCommandEvent& event);
        void OnMenuGuardar(wxCommandEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        void OnRadioBoxOperacionSelect(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxCalcFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_RADIOBOX1;
        static const long ID_STATICBITMAP1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuGuardar;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxCalcFrame)
        wxTextCtrl* TextCtrlNumero2;
        wxPanel* PanelCalc;
        wxStatusBar* StatusBar1;
        wxRadioBox* RadioBoxOperacion;
        wxButton* ButtonCancelar;
        wxStaticText* StaticTextSigno;
        wxMenuItem* MenuItem3;
        wxTextCtrl* TextCtrlNumero1;
        wxStaticBitmap* StaticBitmap1;
        wxTextCtrl* TextCtrlResultado;
        wxButton* ButtonAceptar;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXCALCMAIN_H
