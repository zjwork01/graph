// dllmain.h : Declaration of module class.

class CDialogGLHandlersModule : public ATL::CAtlDllModuleT< CDialogGLHandlersModule >
{
public :
	DECLARE_LIBID(LIBID_DialogGLHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DIALOGGLHANDLERS, "{8A77D6E8-3CC9-4310-A64F-A56B13113C6E}")
};

extern class CDialogGLHandlersModule _AtlModule;
