#include "stdafx.h"
#include "ca.h"


ca::ca()
{
}
void ca::veca(CClientDC *pDC)
{
	x2 = x3; y2 = y1;
	x4 = x1; y4 = y3;
	//ve than
	than.thietlap(x1, y1, x3, y3);
	than.vehcn(pDC);
	//ve dau
	x5 = x2 + 20; y5 = (y3 + y2) / 2;
	dau.thietlap(x2, y2, x3, y3, x5, y5);
	dau.vetg(pDC);
	//ve duoi
	x6 = x1 - 20; y6 = y1;
	x7 = x1; y7 = (y4 + y1) / 2;
	x8 = x4 - 20; y8 = y4;
	duoi.thietlap(x6, y6, x7, y7, x8, y8);
	duoi.vetg(pDC);
	//ve vay tren
	x9 = ((x1 + x2) / 2); y9 = y1 - 20;
	x10 = ((x1 + x2) / 2) + 20; y10 = y1;
	x11 = x9; y11 = y1;
	vaytren.thietlap(x9, y9, x10, y10, x11, y11);
	vaytren.vetg(pDC);
	//ve vay duoi
	x12 = x9; y12 = y4 + 20;
	x13 = ((x1 + x2) / 2) + 20; y13 = y4;
	x14 = x9; y14 = y4;
	vayduoi.thietlap(x12, y12, x13, y13, x14, y14);
	vayduoi.vetg(pDC);
}
void ca::vecaquaydau(CClientDC *pDC)
{
	x2 = x3; y2 = y1;
	x4 = x1; y4 = y3;
	//ve than
	than.thietlap(x1, y1, x3, y3);
	than.vehcn(pDC);
	//dau
	x5 = x1 - 20; y5 = (y4 + y1) / 2;
	dau.thietlap(x1, y1, x4, y4, x5, y5);
	dau.vetg(pDC);
	//duoi
	x6 = x2 + 20; y6 = y2 - 5;
	x7 = x2; y7 = (y3 + y2) / 2;
	x8 = x3 + 20; y8 = y3 + 5;
	duoi.thietlap(x6, y6, x7, y7, x8, y8);
	duoi.vetg(pDC);
	//vay tren
	x9 = ((x1 + x2) / 2); y9 = y1 - 20;
	x10 = ((x1 + x2) / 2) - 10; y10 = y1;
	x11 = x9; y11 = y1;
	vaytren.thietlap(x9, y9, x10, y10, x11, y11);
	vaytren.vetg(pDC);
	//vay duoi
	x12 = x9; y12 = y4 + 20;
	x13 = ((x1 + x2) / 2) - 10; y13 = y4;
	x14 = x9; y14 = y4;
	vayduoi.thietlap(x12, y12, x13, y13, x14, y14);
	vayduoi.vetg(pDC);
}
void ca::dichuyenlen()
{
	y1 -= 10; y3 -= 10;
}
void ca::dichuyenxuong()
{
	y1 += 10; y3 += 10;
}
void ca::dichuyentrai()
{
	x1 -= 10; x3 -= 10;
}
void ca::dichuyenphai()
{
	x1 += 10; x3 += 10;
}
void ca::cadichuyenlen(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		veca(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		veca(pDC);
		dichuyenlen();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void ca::cadichuyenxuong(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		veca(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		veca(pDC);
		dichuyenxuong();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void ca::cadichuyentrai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		vecaquaydau(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		vecaquaydau(pDC);
		dichuyentrai();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void ca::cadichuyenphai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		veca(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		veca(pDC);
		dichuyenphai();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void ca::cadichuyenquaydaulen(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		vecaquaydau(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		vecaquaydau(pDC);
		dichuyenlen();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void ca::cadichuyenquaydauxuong(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 3)
	{
		vecaquaydau(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		vecaquaydau(pDC);
		dichuyenxuong();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}

ca::~ca()
{
}
