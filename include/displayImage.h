#ifndef DISPLAY_IMAGE_H
#define DISPLAY_IMAGE_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <limits.h>
#include <fstream>

// ##uncomment line ini jika ingin mengaktifkan gambar dengan custom ukuran
// void displayImage(const std::string& fileName, int width, int height);

// ##default menampilkan gambar tanpa custom ukuran
void displayImage(const std::string& fileName);


#endif // DISPLAY_IMAGE_H