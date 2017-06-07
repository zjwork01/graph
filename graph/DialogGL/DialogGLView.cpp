
// DialogGLView.cpp : implementation of the CDialogGLView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DialogGL.h"
#endif

#include "DialogGLDoc.h"
#include "DialogGLView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDialogGLView

IMPLEMENT_DYNCREATE(CDialogGLView, CView)

BEGIN_MESSAGE_MAP(CDialogGLView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDialogGLView construction/destruction

CDialogGLView::CDialogGLView()
{
	// TODO: add construction code here

}

CDialogGLView::~CDialogGLView()
{
}

BOOL CDialogGLView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDialogGLView drawing

void CDialogGLView::OnDraw(CDC* /*pDC*/)
{
	CDialogGLDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CDialogGLView printing

BOOL CDialogGLView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDialogGLView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDialogGLView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CDialogGLView diagnostics

#ifdef _DEBUG
void CDialogGLView::AssertValid() const
{
	CView::AssertValid();
}

void CDialogGLView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDialogGLDoc* CDialogGLView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDialogGLDoc)));
	return (CDialogGLDoc*)m_pDocument;
}
#endif //_DEBUG


// CDialogGLView message handlers
