// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "DialogGLHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CDialogGLHandlersModule _AtlModule;

class CDialogGLHandlersApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CDialogGLHandlersApp, CWinApp)
END_MESSAGE_MAP()

CDialogGLHandlersApp theApp;

BOOL CDialogGLHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
	return CWinApp::InitInstance();
}

int CDialogGLHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
