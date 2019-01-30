/***************************************************************
 * Name:      wxCalcApp.cpp
 * Purpose:   Code for Application Class
 * Author:    H4K0 (h4k0@blahcorp.org)
 * Created:   2018-12-11
 * Copyright: H4K0 (www.blahcorp.org)
 * License:
 **************************************************************/

#include "wxCalcApp.h"

//(*AppHeaders
#include "wxCalcMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxCalcApp);
// -
bool wxCalcApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxCalcFrame* Frame = new wxCalcFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
