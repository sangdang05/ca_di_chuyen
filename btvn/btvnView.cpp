
// btvnView.cpp : implementation of the CbtvnView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "btvn.h"
#endif

#include "btvnDoc.h"
#include "btvnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbtvnView

IMPLEMENT_DYNCREATE(CbtvnView, CView)

BEGIN_MESSAGE_MAP(CbtvnView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CbtvnView construction/destruction

CbtvnView::CbtvnView() noexcept
{
	// TODO: add construction code here
	ca1.thietlap(250, 150, 350, 180);
}

CbtvnView::~CbtvnView()
{
}

BOOL CbtvnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CbtvnView drawing

void CbtvnView::OnDraw(CDC* /*pDC*/)
{
	CbtvnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	ca1.veca(&pDC);
	// TODO: add draw code for native data here
}


// CbtvnView printing

BOOL CbtvnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CbtvnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CbtvnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CbtvnView diagnostics

#ifdef _DEBUG
void CbtvnView::AssertValid() const
{
	CView::AssertValid();
}

void CbtvnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbtvnDoc* CbtvnView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbtvnDoc)));
	return (CbtvnDoc*)m_pDocument;
}
#endif //_DEBUG


// CbtvnView message handlers


void CbtvnView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	check_key = nChar;
	if (check_key == 37)
	{
		kt = 1;
		CClientDC pDC(this);
		CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);
		ca1.veca(&pDC);
		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(0,0,0));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		ca1.cadichuyentrai(&pDC);
		ca1.vecaquaydau(&pDC);
	}
	if (check_key == 39)
	{
		kt = 2;
		CClientDC pDC(this);
		CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);
		ca1.vecaquaydau(&pDC);

		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		ca1.cadichuyenphai(&pDC);
		ca1.veca(&pDC);

	}
	if (check_key == 38)
	{
		CClientDC pDC(this);
		if (kt == 1)
		{
			ca1.cadichuyenquaydaulen(&pDC);
			ca1.vecaquaydau(&pDC);
		}
		else
		{
			ca1.cadichuyenlen(&pDC);
			ca1.veca(&pDC);
		}
		if (kt == 2)
		{
			ca1.cadichuyenlen(&pDC);
			ca1.veca(&pDC);
		}
	}
	if (check_key == 40)
	{
		CClientDC pDC(this);
		if (kt == 1)
		{
			ca1.cadichuyenquaydauxuong(&pDC);
			ca1.vecaquaydau(&pDC);
		}
		else
		{
			ca1.cadichuyenxuong(&pDC);
			ca1.veca(&pDC);
		}
		if (kt == 2)
		{
			ca1.cadichuyenxuong(&pDC);
			ca1.veca(&pDC);
		}
		
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
