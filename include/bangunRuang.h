#ifndef BANGUN_RUANG_H
#define BANGUN_RUANG_H

#include <iostream>
#include <cmath>
#include "enums/EnumsBangunRuang.h"

struct BangunRuang {
    EnumsBangunRuang jenisBangunRuang;
    double input1,input2,input3,input4,input5;
};

void hitungBangunRuang(const BangunRuang &br, double &volume, double &luasPermukaan);

#endif // BANGUN_RUANG_H