#include "wxLayout.h"

//(*InternalHeaders(wxLayout)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//(*IdInit(wxLayout)
//*)

BEGIN_EVENT_TABLE(wxLayout,wxFrame)
	//(*EventTable(wxLayout)
	//*)
END_EVENT_TABLE()

wxLayout::wxLayout(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(wxLayout)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	//*)
}

wxLayout::~wxLayout()
{
	//(*Destroy(wxLayout)
	//*)
}

                                                                                                                                                                                                                                                