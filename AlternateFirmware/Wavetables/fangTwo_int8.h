#ifndef FANGTWO_H_
#define FANGTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define FANGTWO_NUM_CELLS 4513
#define FANGTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) FANGTWO_DATA [] = {-1,
-1, -2, 1, 3, 2, 0, -3, -3, -4, -3, -2, 0, 0, 1, 1, 1, 2, 1, 1, 0, 1, 0, 0, 0,
1, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -3, -4, -7, -5,
-2, 0, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 2, 1, 2, 5, 9, 9, 12, 11, 7, 0, -3, -6, -6,
-6, -6, -4, -3, -2, -2, -1, -1, 0, 1, 1, 1, 2, 1, 1, 2, 2, 3, 3, 5, 4, 0, -2,
-3, -4, -4, -3, -3, -3, -3, -4, -5, -5, -6, -7, -7, -8, -9, -9, -10, -11, -10,
-10, -11, -12, -12, -13, -14, -15, -16, -17, -19, -20, -20, -21, -21, -22, -22,
-22, -23, -23, -25, -26, -29, -31, -33, -33, -35, -37, -42, -50, -61, -77, -91,
-95, -74, -53, -38, -29, -23, -20, -19, -16, -14, -10, -9, -6, -4, -3, -3, -3,
-2, 0, 1, 3, 4, 5, 6, 9, 10, 10, 12, 14, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25,
27, 27, 28, 29, 30, 32, 34, 36, 38, 40, 43, 45, 49, 57, 68, 74, 92, 113, 104,
72, 48, 36, 27, 22, 19, 19, 17, 14, 12, 11, 9, 7, 7, 6, 5, 5, 5, 4, 2, 0, -1,
-4, -7, -9, -8, -6, -6, -7, -7, -9, -11, -12, -12, -14, -15, -16, -16, -18, -19,
-20, -21, -23, -24, -25, -26, -27, -28, -28, -29, -30, -30, -29, -31, -31, -30,
-31, -31, -31, -32, -33, -33, -34, -35, -34, -35, -35, -34, -34, -33, -33, -34,
-35, -36, -37, -38, -40, -42, -44, -45, -50, -57, -72, -84, -94, -87, -59, -37,
-23, -17, -12, -11, -9, -7, -5, -2, 0, 2, 3, 5, 6, 7, 7, 8, 8, 9, 11, 13, 14,
16, 16, 17, 18, 19, 20, 21, 21, 21, 23, 24, 24, 24, 26, 26, 27, 28, 28, 29, 30,
33, 34, 35, 36, 38, 40, 42, 42, 45, 54, 66, 71, 73, 64, 46, 33, 26, 24, 22, 22,
21, 19, 17, 15, 15, 13, 12, 13, 13, 12, 12, 13, 12, 8, 6, 5, 4, 4, 3, 4, 3, 2,
2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -6, -7, -8, -9, -10, -11, -11, -12, -12,
-13, -13, -14, -14, -15, -16, -15, -15, -15, -15, -16, -16, -17, -18, -19, -19,
-19, -20, -20, -19, -19, -19, -19, -18, -19, -21, -22, -22, -24, -25, -26, -28,
-31, -36, -44, -52, -58, -62, -46, -29, -17, -10, -7, -5, -4, -2, 0, 3, 3, 5, 6,
7, 7, 7, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 16, 16, 17, 17, 17, 18, 18,
19, 20, 21, 21, 20, 21, 21, 22, 21, 23, 25, 27, 28, 29, 29, 30, 31, 34, 40, 47,
51, 52, 50, 37, 29, 23, 19, 17, 17, 17, 15, 14, 12, 11, 9, 8, 9, 11, 10, 10, 9,
8, 7, 7, 6, 5, 4, 4, 3, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2, -2, -2, -3, -4, -4, -5,
-7, -7, -8, -8, -8, -8, -8, -9, -10, -10, -10, -10, -10, -10, -10, -10, -11,
-12, -12, -13, -13, -13, -13, -13, -13, -13, -12, -12, -13, -13, -14, -15, -15,
-16, -16, -17, -19, -21, -25, -30, -37, -40, -43, -36, -22, -14, -7, -5, -3, -3,
-1, 0, 2, 2, 3, 4, 5, 5, 6, 6, 6, 6, 7, 8, 8, 9, 9, 10, 11, 11, 11, 12, 12, 13,
13, 13, 13, 13, 15, 15, 15, 14, 14, 14, 15, 16, 17, 17, 18, 19, 19, 20, 21, 22,
24, 28, 32, 37, 36, 36, 28, 21, 17, 15, 14, 14, 15, 13, 10, 8, 8, 7, 7, 6, 7, 7,
7, 7, 6, 6, 5, 4, 3, 2, 2, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -2, -3,
-3, -4, -4, -5, -5, -6, -6, -7, -7, -7, -8, -9, -9, -9, -9, -9, -7, -7, -8, -8,
-9, -10, -11, -11, -10, -11, -10, -10, -10, -11, -10, -10, -11, -12, -12, -12,
-13, -13, -15, -16, -19, -22, -27, -30, -31, -29, -20, -12, -7, -5, -4, -4, -3,
-2, 0, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 8, 7, 8, 7, 8, 9, 10,
11, 11, 11, 12, 11, 10, 10, 10, 11, 11, 11, 12, 13, 13, 14, 15, 16, 17, 20, 22,
26, 24, 23, 20, 13, 12, 11, 11, 9, 9, 8, 7, 6, 5, 5, 4, 4, 4, 4, 4, 4, 3, 3, 2,
2, 2, 1, 1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -3, -3, -3, -3, -4, -4, -5, -5,
-6, -5, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -8, -7, -7, -7, -7, -8, -8, -9,
-9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -10, -10, -11, -11, -12, -14, -16,
-18, -22, -24, -23, -23, -18, -12, -7, -5, -4, -3, -3, -1, -1, 0, 0, 0, 1, 1, 1,
2, 2, 2, 2, 3, 4, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8,
8, 9, 9, 9, 10, 10, 11, 12, 14, 17, 18, 19, 17, 18, 17, 12, 11, 8, 8, 6, 6, 5,
5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2,
-2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -5, -5, -5, -5, -6, -7, -7, -6,
-5, -6, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -8, -7, -8, -8, -8, -8,
-8, -8, -9, -9, -10, -10, -12, -13, -16, -18, -17, -19, -14, -10, -7, -4, -4,
-3, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 5, 4, 4, 4, 5, 5, 6, 6, 5, 5, 4, 4, 4, 7, 8, 9, 9, 11, 12, 14, 13,
12, 13, 9, 7, 5, 4, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3,
-4, -3, -3, -4, -4, -5, -4, -5, -5, -5, -4, -4, -5, -5, -5, -5, -6, -6, -6, -5,
-5, -5, -6, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -8, -8, -9, -11, -11,
-15, -12, -14, -13, -9, -6, -4, -4, -2, -3, -2, -2, -1, 0, 0, 0, 1, 0, -1, -1,
-1, -1, 0, 0, 1, 1, 1, 2, 1, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 3, 4, 4, 5, 6, 5, 3,
3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 10, 7, 8, 7, 6, 4, 3, 3, 2, 2, 2, 2, 1, 1, 1,
0, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -2, -2, -2, -2,
-2, -2, -2, -3, -3, -4, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4,
-5, -5, -5, -6, -7, -7, -8, -8, -9, -8, -8, -9, -6, -5, -4, -3, -2, -2, -2, -2,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 2, 2, 1, 1, 1, 0, -1,
-1, 1, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 3, 3, 3, 5, 5, 6, 5, 4, 6, 4, 3, 2, 2,
1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -2, -3, -3, -3, -3, -4, -4, -4, -3, -2, -2, -2, -3, -2, -3, -3, -3,
-3, -3, -4, -4, -3, -4, -4, -4, -4, -4, -4, -5, -6, -5, -6, -4, -5, -5, -4, -4,
-3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 1, 2, 2, 3, 2, 0, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3,
4, 4, 4, 2, -1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -2, -2, -2,
-2, -2, -2, -2, -1, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -3,
-3, -5, -4, -5, -2, 0, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, -1, -1, -1, -2, -3, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 1, -2, 0, 1, 1, 1, 1, 0, 0,
-1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1,
-2, -2, -2, -1, -2, -1, -1, -1, 0, -2, -2, -3, -2, -2, -1, 1, -1, -1, -1, -2,
-2, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 1, 1, 2, 1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 1, 1, 2,
2, 1, 0, -2, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 1,
1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -2, -2, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1,
-1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1,
-1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1,
-1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
-1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1,
-1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
-1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1,
0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1,
-1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
-1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1,
0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
-1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0,
-1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1,
0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1,
0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1,
0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0,
-1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1,
0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1,
0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, };

#endif /* FANGTWO_H_ */
