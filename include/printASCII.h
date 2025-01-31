#ifndef PRINT_ASCII_H
#define PRINT_ASCII_H

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <limits.h>

void printAsciiArt(const std::string& fileName, const std::string& colorCode);

#endif // PRINT_ASCII_H