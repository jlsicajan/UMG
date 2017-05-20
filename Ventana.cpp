/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "Ventana.h"

IMPLEMENT_APP(ventana)
        
bool ventana::OnInit(){
    wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Parque de diversiones"));
    frame->CreateStatusBar();
    frame->SetStatusText(_T("Barra de estado"));
    frame->Show(true);
//    SetTopWindow(true);
    return true;
}