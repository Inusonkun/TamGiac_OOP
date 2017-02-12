#include "TamGiac.h"

void TamGiac::Nhap()
{
	bool check;
	do{
		check = true;
		cout << "\nNhap diem A: ";
		A.Nhap();
		cout << "\nNhap diem B: ";
		B.Nhap();
		cout << "\nNhap diem C: ";
		C.Nhap();

		check = KiemTraTinhHopLe();

		if (check == false)
		{
			cout << "\nBa diem nhap vao khong the tao thanh mot tam giac! Hay nhap lai!!";
		}
	} while (check == false);
	
}

bool TamGiac::KiemTraTinhHopLe()
{
	float AB = A.DoDaiDuongThang(B);
	float AC = A.DoDaiDuongThang(C);
	float BC = B.DoDaiDuongThang(C);

	if (AB + AC <= BC || AB + BC <= AC || BC + AC <= AB)
	{
		return false;
	}
	return true;
}

void TamGiac::Xuat()
{
		cout << "\nA"; A.Xuat();
		cout << "\nB"; B.Xuat();
		cout << "\nC"; C.Xuat();	
}

float TamGiac::ChuVi()
{
	float AB = A.DoDaiDuongThang(B);
	float AC = A.DoDaiDuongThang(C);
	float BC = B.DoDaiDuongThang(C);

	return AB + AC + BC;
}

float TamGiac::DienTich_C1()
{
	float AB = A.DoDaiDuongThang(B);
	float AC = A.DoDaiDuongThang(C);
	float BC = B.DoDaiDuongThang(C);
	float cv = ChuVi();
	float p = cv / 2;

	return sqrt(p*(p - AC)*(p - AB)*(p - BC));
}
Diem Diem::PhuongTrinhDuongThang(Diem b, Diem c)
{
	Diem temp1, temp2;
	temp1.x = (b.y - y) * (-1);
	temp1.y = b.x - x;

	float d, c1, c2, dx, dy;
	c1 = temp1.x * (-b.x) + temp1.y * (-b.y);
	cout << "\nPhuong trinh thu nhat AB: ";
	cout << temp1.x << " * x + " << temp1.y << " * y + (" << c1 <<") = 0";

	c2 = (-1)*(b.x - x) * c.x - (b.y - y) * c.y;
	cout << "\nPhuong trinh thu hai (CH.AB = 0): ";
	cout << (b.x - x) << " * x + " << (b.y - y) << " * y + (" << c2 << ") = 0";

	d = temp1.x * (b.y - y) - temp1.y * (b.x - x);
	dx = (c1 * (b.y - y)) - (c2 * temp1.y);
	dy = temp1.x * c2 - (b.x - x) * c1;

	temp2.x = dx / d;
	temp2.y = dy / d;

	return temp2;
}

float TamGiac::DienTich_C2()
{
	Diem H;
	H = A.PhuongTrinhDuongThang(B, C);
	float AB = A.DoDaiDuongThang(B);
	float CH = C.DoDaiDuongThang(H);

	return (AB * CH) / 2;
}