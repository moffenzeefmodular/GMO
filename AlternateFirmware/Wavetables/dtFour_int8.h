#ifndef DTFOUR_H_
#define DTFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DTFOUR_NUM_CELLS 4567
#define DTFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DTFOUR_DATA [] = {-1, 2,
-5, 16, -21, -58, 39, -5, -74, 18, 12, -77, -22, 7, -57, 21, 6, -71, -67, 27,
31, 34, 106, 94, 45, -23, -39, -71, -3, -8, -73, -65, -13, 73, 107, 105, 95, 86,
38, -51, -24, 49, 46, 59, -6, -90, -57, -61, -97, -69, -81, -73, -22, 56, 100,
96, 90, 28, -27, -8, -39, -80, -38, 1, -20, -54, -50, 4, 12, -64, -74, -67, -40,
-18, -39, -14, 61, 115, 114, 86, 95, 71, -16, -66, -27, 57, 34, -51, -68, -45,
32, 84, 22, -14, 60, 55, 1, 73, 100, 71, 5, -57, 0, 38, -32, -89, -83, -64, -7,
34, 76, 103, 92, 78, 44, -2, -69, -65, -45, -68, -44, 8, 37, 55, 65, 21, -54,
-86, -89, -85, -78, -46, 34, 82, 74, 1, 4, 14, -43, -15, 22, 7, 22, 53, 37, 50,
83, 37, -38, -53, -55, -29, 30, 22, 15, 52, 87, 54, 10, 36, -14, -81, -63, -12,
8, -5, 23, 49, -1, -30, -41, -42, -2, 25, 20, -17, -15, -12, 23, 39, 0, 1, 40,
12, -50, -72, -64, -37, -38, -24, -1, 22, 23, 14, 34, 4, -59, -82, -77, -56, 11,
49, 12, 40, 25, -36, 4, 37, -34, -39, -3, 10, 68, 14, -44, -30, 40, 43, 18, 34,
41, 61, 39, -10, -60, -36, -41, -61, -22, -17, -8, 43, 63, 51, 64, 31, -1, 35,
-18, -6, 59, 25, -54, -62, -72, -65, -13, -26, -27, -36, 11, 35, 36, 54, 48,
-18, -58, -59, -21, -10, -26, -11, 9, 7, -33, -2, -17, -43, -49, -30, -4, -17,
-13, 30, 70, 49, 8, 16, -5, -20, 2, 16, 22, 30, 42, -1, -22, 14, 41, -1, -5, -2,
-33, -46, -47, -35, 30, 68, 39, 19, 27, 25, -35, -37, -31, -32, -43, -31, 21,
73, 72, 27, 13, -32, -28, -4, -28, -42, -11, 14, 0, 7, 31, 8, -37, -55, -48,
-33, 8, 31, 19, 47, 56, 22, 27, 15, -7, -23, -35, -13, -4, 24, 5, 7, 31, 12, -7,
-13, -28, -52, -57, -47, -8, 4, -13, 20, 54, 48, 42, 4, -18, -12, -4, 4, 9, 13,
22, 9, -12, -27, -38, -25, -26, -27, 6, 32, 50, 49, 22, 10, 1, -1, -22, -7, -1,
-17, -11, 26, 43, 22, 2, -24, -8, -16, -25, -32, -38, -18, -9, 8, 15, 19, 7,
-12, -9, -7, -14, -5, 14, 38, 16, -1, 20, 16, 26, 2, -26, -26, -16, 11, 2, -9,
14, 21, 6, 0, 8, -18, -22, -10, -13, -6, -7, 9, 10, 22, 22, 8, -15, -6, 9, -6,
-5, -11, -3, -6, 9, 13, -4, -3, -5, -25, -10, 12, -11, -21, -7, 8, 13, 2, -8, 1,
-3, -7, 1, 19, 27, 27, 3, 0, 6, 5, 13, -9, -5, -11, -24, -11, 6, 10, 2, 15, 6,
7, 9, -1, 10, 8, -7, -8, 2, 1, 2, -8, -11, -4, 3, -7, -22, -6, 6, 1, -6, -14,
-1, 15, 14, 5, -9, -4, 2, 3, 8, 18, 15, 5, -3, 1, 1, -9, -5, -8, -5, -3, -11, 1,
-2, -11, -6, -1, 16, 9, 3, -1, 1, 11, -4, 0, 12, 10, 0, -7, -6, 0, 7, 11, -2,
-14, -4, -2, -1, 5, 13, -4, -15, -3, -2, 5, 4, -1, -3, -3, 4, 3, 3, 6, -1, -4,
-6, 14, 15, -6, -3, 4, 2, -1, 5, 5, 10, -4, -12, -1, -1, 2, 1, -8, -1, 11, -2,
-4, -4, -6, -2, -5, -5, 2, 7, 7, -2, -5, -1, -4, 1, 5, 1, -1, 0, -1, 5, 3, 5, 7,
4, 6, 3, -3, 5, 3, -10, -4, -2, -2, 1, 6, 9, 1, -13, -14, -6, 1, -4, -2, 1, -4,
-4, -5, -2, 7, 5, -7, -5, 5, 5, 5, 3, 1, 8, -1, -3, -6, -3, 0, -4, -1, 0, 5, 7,
7, -1, 8, 2, -5, -4, -2, 3, -1, -4, -7, 3, 3, -3, -2, 1, 4, -1, 1, 2, 3, 4, 2,
1, 3, -2, -8, -2, 0, 2, -2, -1, 6, 5, -2, -6, -1, 0, -4, -3, -2, -5, 1, -1, 0,
-1, -3, -1, 4, 7, 0, -1, 0, 0, -1, -3, -1, -1, 2, 0, -3, -3, 1, 3, -3, 1, 0, 0,
-4, -5, 2, -3, -1, 3, 2, 3, 4, 4, -1, 2, 1, -2, 3, -2, -5, -4, -1, 0, 1, 2, 0,
-1, -1, -1, 1, 4, -1, -1, -1, 1, -5, -8, 1, -4, -7, 2, 5, 0, 0, 5, 2, -4, 0, 5,
0, 1, -1, -5, -5, -2, 3, 0, 1, 0, 0, -1, -2, 2, 0, -4, -2, -1, -1, 1, -1, 1, -6,
-5, 0, 2, 0, -1, 3, -1, 1, -3, -4, 1, 2, -1, -2, -1, 2, 5, 1, -2, 0, 2, -1, -4,
0, 5, 2, -2, 0, 3, -1, -1, 1, -4, -4, 0, -1, -1, 3, 3, 1, 0, 2, 0, -4, -1, 1,
-1, 2, -1, -1, 0, 1, -2, -2, 0, -6, -7, 1, 3, -1, 0, -4, 1, -1, -2, 1, 2, 1, -2,
-3, -5, 3, -1, -6, -1, 0, 0, 2, 1, -2, -2, 0, 2, 3, 0, -1, 0, -1, -2, -3, -5,
-5, 0, 3, 1, 0, 1, 3, 3, -2, -1, -2, -3, 0, -1, 1, 3, -2, -2, 4, 0, -1, 0, -1,
0, 1, 3, 3, 2, 0, 2, 0, -2, 1, 1, 1, -2, 1, 1, -1, -2, -2, 1, 0, 0, -1, 3, 5, 2,
0, -1, 0, -3, -3, -1, -1, -2, -4, -1, 2, 2, 0, -2, -3, 1, 0, -1, 2, 1, 1, 0, -1,
-2, -2, -3, -4, -2, -2, 0, 2, 2, 2, 2, 2, 0, -1, -2, -1, -3, -2, 2, 1, 0, 0, 0,
-2, -3, -2, -3, -1, 3, 3, 1, 0, -1, -1, 0, 1, -1, -1, 0, 0, 1, 3, 0, -2, -1, 0,
3, 4, 4, 2, 1, 0, 1, -1, -2, -2, -2, -2, -3, 0, 1, 2, 1, -1, -1, -2, -3, -2, -4,
-1, 1, -1, 1, 1, 1, -1, -1, 0, -1, 0, 0, -2, -2, 0, 0, 0, 2, 2, 1, 1, 1, 1, -3,
-4, -2, -2, 0, 2, 2, 1, 0, 0, 0, 0, -2, -1, -1, 1, 0, 1, 0, -2, 2, -1, -4, -1,
1, -1, 1, 2, 0, 0, 2, -1, 0, 1, -3, -4, 0, 1, -1, 0, 1, 1, -2, 0, -1, 0, 2, -1,
-1, 0, 1, 0, 0, -1, -2, 0, -1, -1, 1, 1, 1, 0, 0, 1, 0, -2, -3, -2, 0, 0, -1, 0,
2, 1, 0, -2, -3, -1, 0, 0, 0, 2, 1, -1, 0, 0, 0, -2, -3, -1, 0, 1, 1, -1, 1, 3,
0, -2, 0, -2, -2, -2, 0, 1, 0, 1, 1, 1, 0, 1, 1, -2, -3, -1, -1, 0, 1, 2, 1, 1,
0, -1, 0, 1, -1, -1, -1, 0, 1, 2, 1, 0, 0, -1, -2, -1, 0, -2, -3, 0, 1, 0, 1, 0,
-1, -2, -2, -1, -2, -1, 1, 2, 1, 1, 1, 1, -1, -1, -1, -1, 0, -1, -2, 0, -1, -1,
0, -1, -2, -1, 0, -1, 0, 0, -1, -2, 0, 0, -2, 0, -1, -2, 2, 3, 2, 1, 0, 0, 0, 0,
1, 0, 0, -1, -1, 1, 1, 0, -1, 0, -1, 0, 1, 0, 1, 0, -1, -2, -1, -1, -1, 0, 0, 0,
-1, -1, -1, 0, -2, -3, 0, 2, 0, -2, -1, -1, -3, -2, -1, -1, -1, 0, 0, -1, 2, 2,
0, 0, 1, 0, -1, -1, 0, 1, 1, 0, -1, 1, 1, 0, 0, 0, 0, -1, 0, 1, 1, 1, 0, 0, -1,
-1, -2, -2, -1, 0, 0, 0, 0, 0, 0, -1, -2, -1, -1, -1, 0, 1, 1, 0, 0, -1, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1,
-2, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 1, 1, 0, 0, -1, 0, 0, 0, -1, 0,
-1, -1, -1, 0, 2, 1, 0, 0, -1, -1, -1, -2, -2, -1, -1, 0, 0, 0, 1, -1, -2, -1,
0, 0, -1, -1, -1, 0, 0, 1, 1, 0, 0, -2, -1, 1, 1, 0, 0, 0, -1, -1, 1, 1, 0, -1,
-2, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0,
0, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1,
-1, 0, 1, 0, -1, -2, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1,
0, 1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1, -2, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0,
0, 0, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, 0, -1, 0, 0, 1, 1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0,
-1, -1, -1, 0, 0, 0, -1, 0, -1, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1,
-1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0,
0, 1, 1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0,
-1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
-1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0,
-1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0,
0, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1,
-1, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0,
-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1,
0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1,
0, -1, -1, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, };

#endif /* DTFOUR_H_ */
