#ifndef BANGUN_DATAR_H
#define BANGUN_DATAR_H

#include <iostream>
#include <cmath>
#include "enums/EnumsBangunDatar.h"

struct BangunDatar {
    EnumsBangunDatar jenisBangunDatar;
    double input1,input2,input3,input4,input5;
};

void hitungBangunDatar(const BangunDatar &bd, double &luas, double &keliling);

#endif // BANGUN_DATAR_H