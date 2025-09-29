#include "shipping.h"
#include <stdexcept> // để dùng exception

double cuocphivanchuyen(double khoiluong, double khoangcach)
{
    double cuocphi = 0.0;

    if (khoiluong <= 5 && khoiluong > 0)
    {
        cuocphi = 10000;
    }
    else if (khoiluong > 5)
    {
        cuocphi = 10000 + (khoiluong - 5) * 2000;
    }
    else
    {
        throw std::invalid_argument("Khoi luong khong hop le!");
    }

    if (khoangcach >= 10)
    {
        cuocphi += 10000;
    }
    else if (khoangcach < 0)
    {
        throw std::invalid_argument("Khoang cach khong hop le!");
    }

    return cuocphi;
}
