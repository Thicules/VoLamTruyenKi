﻿#include "Header.h"

int main()
{
	fullScreen();
	fullScreen(); // Chỉnh toàn bộ màn hình
	removeScrollBar(); // xóa thanh cuộn
	getWHConsole(); // lấy ra biến toàn cục của width và height của màn hình hiện tại
	hideCur(); // ẩn trỏ chuột
	Intro x;
	x.Out();
	clrscr();
	return 0;
}