#include <iostream>
#include "shipping.h"
using namespace std;

int main()
{
    double khoiluong, khoangcach;

    cout << "Nhap khoi luong hang (kg): ";
    cin >> khoiluong;
    cout << "Nhap khoang cach van chuyen (km): ";
    cin >> khoangcach;

    double cuocphi = cuocphivanchuyen(khoiluong, khoangcach);
    cout << "Cuoc phi van chuyen: " << cuocphi << " VND" << endl;

    return 0;
}
