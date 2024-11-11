// bai8_So_ngay_cua_thang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "CAC THANG TRONG NAM\n";
	int(Thang);
	cout << "nhap Thang\n";
	cin >> Thang;
	switch (Thang)
	{
	case 1:
		cout << "Co 31 ngay\n";
		break;
	case 2:
		cout << "Co 29 ngay\n";
		break;
	case 3:
		cout << "Co 31 ngay\n";
		break;
	case 4:
		cout << "co 30 ngay\n";
		break;
	case 5:
		cout << " co 31 ngay\n";
		break;
	case 6:
		cout << "co 30 ngay\n";
		break;
	case 7:
		cout << "Co 31 ngay\n";
		break;
	case 8:
		cout << "Co 31 ngay\n";
		break;
	case 9:
		cout << "Co 30 ngay\n";
		break;
	case 10:
		cout << "Co 31 ngay\n";
		break;
	case 11:
		cout << "Co 30 ngay\n";
		break;
	case 12:
		cout << "Co 31 ngay\n";
		break;
	default:
		cout << "khong phai cac thang trong nam";
	}
	return 0;

}