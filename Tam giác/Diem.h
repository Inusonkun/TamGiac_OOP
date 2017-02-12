#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float x, y;
public:
	void Nhap();
	void Xuat();
	float DoDaiDuongThang(Diem);
	Diem ToaDoDuongThang(Diem);
	Diem PhuongTrinhDuongThang(Diem b, Diem c);
};

