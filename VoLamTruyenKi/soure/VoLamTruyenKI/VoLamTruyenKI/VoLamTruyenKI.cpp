﻿#include "Header.h"
int main()
{
	//backgroundColor(15);
	//NhanVat* a;
	////QuaiVat* QV;
	//fullScreen(); // Chỉnh toàn bộ màn hình
	//removeScrollBar(); // xóa thanh cuộn
	//getWHConsole(); // lấy ra biến toàn cục của width và height của màn hình hiện tại
	//hideCur(); // ẩn trỏ chuột
	//Intro x;
	//x.Out();
	//SelectCharacters c;
	//clrscr();//xóa màn hình
	//c.Titile();
	//c.painMenu();
	//string NV="";
	//c.select(NV);
	clrscr();
	XuLi GAME;
	string NV = "Tieu Long Nu";
	GAME.KhoiTaoNhanVat(NV);
	GAME.Start();
	return 0;
}