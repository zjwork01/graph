
// DialogGLView.h : interface of the CDialogGLView class
//

#pragma once


class CDialogGLView : public CView
{
protected: // create from serialization only
	CDialogGLView();
	DECLARE_DYNCREATE(CDialogGLView)

// Attributes
public:
	CDialogGLDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDialogGLView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DialogGLView.cpp
inline CDialogGLDoc* CDialogGLView::GetDocument() const
   { return reinterpret_cast<CDialogGLDoc*>(m_pDocument); }
#endif

