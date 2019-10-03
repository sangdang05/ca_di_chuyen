#pragma once
#include"hcn.h"
#include"tamgiac.h"
class ca :public hcn
{
public:
	int x2, y2, x4, y4;
	int x5, y5;//dau
	int x6, y6, x7, y7, x8, y8;//duoi
	int x9, y9, x10, y10, x11, y11;//vay tren
	int x12, y12, x13, y13, x14, y14;//vay duoi
	hcn than,food;
	tamgiac dau, duoi, vaytren, vayduoi;
	ca();
	void veca(CClientDC *pDC);
	void vecaquaydau(CClientDC *pDC);
	void dichuyenlen();
	void dichuyenxuong();
	void dichuyenphai();
	void dichuyentrai();
	void cadichuyenlen(CClientDC *pDC);
	void cadichuyenxuong(CClientDC *pDC);
	void cadichuyentrai(CClientDC *pDC);
	void cadichuyenphai(CClientDC *pDC);
	void cadichuyenquaydaulen(CClientDC *pDC);
	void cadichuyenquaydauxuong(CClientDC *pDC);
	~ca();
};

