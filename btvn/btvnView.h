
// btvnView.h : interface of the CbtvnView class
//

#pragma once
#include"hcn.h"
#include"tamgiac.h"
#include"ca.h"

class CbtvnView : public CView
{
protected: // create from serialization only
	CbtvnView() noexcept;
	DECLARE_DYNCREATE(CbtvnView)

// Attributes
public:
	CbtvnDoc* GetDocument() const;

// Operations
public:
	ca ca1;
	int check_key;
	int kt;
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
	virtual ~CbtvnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in btvnView.cpp
inline CbtvnDoc* CbtvnView::GetDocument() const
   { return reinterpret_cast<CbtvnDoc*>(m_pDocument); }
#endif

