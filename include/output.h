#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
#include "bangunDatar.h"
#include "bangunRuang.h"
#include "color.h"

void outputHasilBangunDatar(BangunDatar &bd, bool hitungLuas, bool hitungKeliling);
void outputHasilBangunRuang(BangunRuang &br, bool hitungVolume, bool hitungLuasPermukaan);

#endif