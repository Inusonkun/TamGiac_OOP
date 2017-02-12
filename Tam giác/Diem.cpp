#include "Diem.h"

void Diem::Nhap()
{
	cout << "\nNhap x = ";
	cin >> x;
	cout << "\nNhap y = ";
	cin >> y;
}

void Diem::Xuat()
{
	cout << "(" << x << ", " << y << ")";
}

float Diem::DoDaiDuongThang(Diem a)
{
	return sqrt(pow((a.x - x), 2) + pow((a.y - y), 2));
}

Diem Diem::ToaDoDuongThang(Diem a)
{
	Diem temp;
	temp.x = a.x - x;
	temp.y = a.y - y;
	return temp;
}

