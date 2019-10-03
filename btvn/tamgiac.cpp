#include "stdafx.h"
#include "tamgiac.h"


tamgiac::tamgiac()
{
}
void tamgiac::thietlap(int mx1, int my1, int mx2, int my2, int mx3, int my3)
{
	x1 = mx1; y1 = my1;
	x2 = mx2; y2 = my2;
	x3 = mx3; y3 = my3;
}
void tamgiac::vetg(CClientDC *pDC)
{
	pDC->MoveTo(x1, y1); pDC->LineTo(x2, y2);
	pDC->MoveTo(x2, y2); pDC->LineTo(x3, y3);
	pDC->MoveTo(x3, y3); pDC->LineTo(x1, y1);
}
tamgiac::~tamgiac()
{
}
