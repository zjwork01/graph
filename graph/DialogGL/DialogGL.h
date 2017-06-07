
// DialogGL.h : main header file for the DialogGL application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDialogGLApp:
// See DialogGL.cpp for the implementation of this class
//

class CDialogGLApp : public CWinApp
{
public:
	CDialogGLApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDialogGLApp theApp;
