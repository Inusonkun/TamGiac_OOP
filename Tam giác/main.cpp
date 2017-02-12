#include "TamGiac.h"
int main()
{
	/*Diem a, b;
	cout << "\nNhap toa do diem A: ";
	a.Nhap();
	cout << "\nNhap toa do diem B: ";
	b.Nhap();

	float dd = a.DoDaiDuongThang(b);
	Diem C = a.ToaDoDuongThang(b);

	cout << "\nDo dai duong thang AB = " << dd;
	cout << "\nToa do duong thang AB"; C.Xuat();*/

	TamGiac tg;
	Diem A, B, C;
	A.Nhap();
	B.Nhap();
	C.Nhap();
	Diem H = A.PhuongTrinhDuongThang(B, C);
	H.Xuat();

	cout << "\nNhap vao cac dinh cua tam giac: ";
	tg.Nhap();
	tg.Xuat();
	

	float cv = tg.ChuVi();
	float dt1 = tg.DienTich_C1();
	float dt2 = tg.DienTich_C2();
	

	cout << "\nChu vi cua tam giac ABC la: " << cv;
	cout << "\nDien tich tam giac ABC la _ Cach 1: " << dt1;
	cout << "\nDien tich tam giac ABC la _ Cach 2: " << dt2;

	system("pause");
	system("cls");
	return main();
}