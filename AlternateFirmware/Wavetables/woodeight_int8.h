#ifndef WOODEIGHT_H_
#define WOODEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define WOODEIGHT_NUM_CELLS 3089
#define WOODEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) WOODEIGHT_DATA [] = {-1,
0, -1, 1, 0, -7, -9, -2, 2, -18, -33, -23, 18, 22, 15, 38, 50, 30, 15, 19, 15,
-23, -69, -65, -57, -71, -72, -42, -5, 36, 52, 65, 86, 77, 67, 63, 41, -26, -81,
-72, -75, -95, -109, -95, -50, -28, 11, 61, 85, 88, 86, 90, 82, 54, 11, -28,
-61, -107, -128, -116, -106, -91, -54, 7, 54, 69, 84, 100, 103, 90, 64, 30, -9,
-54, -97, -114, -113, -113, -96, -57, -16, 21, 57, 84, 93, 86, 80, 72, 48, 9,
-28, -59, -84, -99, -103, -93, -69, -37, 2, 37, 60, 72, 80, 79, 69, 52, 30, -2,
-42, -67, -76, -79, -75, -65, -44, -17, 14, 37, 53, 61, 60, 59, 52, 37, 14, -14,
-33, -48, -61, -65, -58, -43, -27, -6, 16, 33, 44, 49, 50, 46, 38, 23, 2, -15,
-29, -40, -44, -44, -40, -24, -9, 1, 12, 23, 32, 35, 35, 28, 21, 10, 0, -10,
-20, -24, -25, -25, -23, -17, -5, 6, 12, 16, 19, 21, 18, 12, 7, 4, -2, -8, -10,
-9, -7, -5, -3, -2, 0, 2, 4, 5, 3, 1, 2, 2, 3, 1, 2, 2, 3, 3, 3, 5, 2, -1, -2,
-3, -3, -6, -7, -7, -6, -1, 3, 6, 6, 8, 12, 13, 11, 6, 2, -1, -5, -9, -12, -12,
-12, -10, -6, -2, 4, 10, 14, 17, 17, 16, 12, 6, 0, -5, -10, -14, -18, -19, -15,
-9, -5, 0, 7, 12, 16, 18, 18, 17, 13, 6, -1, -8, -12, -16, -18, -19, -16, -10,
-3, 4, 10, 13, 16, 19, 18, 15, 10, 5, -2, -9, -13, -16, -17, -16, -14, -9, -2,
4, 9, 13, 15, 17, 15, 11, 6, 2, -3, -7, -11, -14, -12, -11, -8, -6, -2, 4, 7,
10, 11, 12, 11, 8, 5, 1, 0, -3, -7, -8, -10, -9, -6, -6, -3, 2, 4, 7, 9, 9, 10,
8, 5, 2, -2, -4, -5, -7, -9, -8, -5, -4, -1, 1, 4, 6, 6, 7, 7, 6, 4, 2, 0, -2,
-4, -5, -5, -5, -4, -2, -1, 0, 2, 3, 4, 5, 5, 4, 3, 3, 2, 1, -1, -3, -4, -4, -4,
-4, -3, -3, -2, 0, 2, 4, 5, 4, 5, 4, 4, 3, 1, -1, -3, -4, -5, -6, -6, -5, -2, 0,
2, 3, 6, 7, 7, 6, 6, 4, 1, -2, -5, -6, -7, -8, -7, -6, -3, 0, 2, 5, 7, 9, 8, 7,
5, 2, 0, -3, -6, -8, -8, -7, -7, -5, -1, 2, 4, 6, 7, 8, 8, 7, 5, 2, -2, -4, -7,
-8, -8, -8, -6, -4, -1, 2, 5, 7, 8, 7, 6, 4, 2, -1, -3, -4, -5, -6, -7, -6, -3,
-1, 1, 3, 4, 4, 5, 5, 4, 1, 0, -1, -2, -3, -3, -3, -2, -1, -1, 0, 1, 2, 2, 1, 1,
1, -1, -2, -2, -1, 0, 1, 0, 0, 1, 1, 1, 0, 0, -1, -2, -3, -3, -2, -1, 0, 0, 1,
2, 3, 3, 3, 3, 3, 1, -1, -2, -3, -4, -5, -4, -4, -3, -2, 1, 3, 4, 5, 6, 5, 4, 2,
1, -1, -3, -7, -7, -7, -6, -5, -3, 0, 2, 4, 6, 7, 7, 6, 5, 2, 0, -3, -6, -7, -8,
-7, -6, -5, -3, 0, 3, 6, 8, 8, 7, 6, 3, 0, -2, -5, -6, -7, -7, -6, -4, -2, -1,
1, 3, 5, 4, 5, 5, 4, 2, -1, -2, -4, -4, -4, -4, -4, -3, -1, 0, 1, 2, 3, 4, 3, 2,
2, 1, 0, -2, -2, -3, -3, -3, -3, -2, -1, 0, 1, 1, 2, 2, 2, 1, 0, 1, 1, 0, -2,
-3, -3, -3, -3, -3, -1, 0, 0, 1, 2, 3, 3, 3, 2, 1, 0, -2, -3, -3, -3, -4, -3,
-2, -1, 1, 2, 3, 3, 2, 2, 2, 0, -1, -2, -3, -4, -3, -3, -2, -1, 0, 1, 2, 2, 2,
2, 2, 1, 0, -1, -1, -2, -2, -2, -2, -3, -2, -1, 0, 2, 2, 2, 1, 2, 1, 1, 0, -2,
-2, -2, -2, -3, -3, -2, -1, 0, 0, 1, 2, 2, 2, 2, 1, 0, -1, -1, -3, -3, -3, -3,
-2, -1, 0, 0, 1, 2, 3, 3, 2, 1, 1, 0, -1, -3, -4, -4, -5, -5, -3, -1, 1, 2, 3,
4, 4, 4, 3, 1, 0, -2, -4, -5, -6, -5, -5, -4, -2, 1, 3, 4, 5, 5, 4, 3, 2, 0, -1,
-3, -5, -6, -6, -5, -4, -2, 0, 2, 3, 4, 4, 4, 4, 3, 1, -1, -3, -4, -5, -6, -5,
-5, -3, -2, 0, 3, 4, 5, 4, 4, 4, 3, 0, -2, -3, -4, -5, -5, -5, -4, -2, -1, 1, 2,
3, 4, 4, 4, 3, 2, 0, -2, -3, -4, -4, -4, -4, -3, -2, -1, 1, 2, 3, 4, 4, 3, 2, 0,
-1, -2, -3, -4, -4, -4, -4, -3, -1, 0, 1, 2, 3, 4, 3, 2, 1, 0, -2, -3, -3, -3,
-3, -3, -2, -1, -1, 0, 2, 3, 3, 2, 1, 0, -1, -2, -2, -3, -3, -2, -2, -2, -1, 0,
1, 1, 1, 1, 1, 1, 0, -1, -1, -2, -3, -2, -2, -2, -1, 0, 1, 1, 2, 2, 2, 0, 0, 0,
-1, -3, -3, -3, -3, -2, -1, 0, 1, 2, 2, 3, 3, 2, 0, -1, -3, -4, -4, -4, -3, -3,
-2, 0, 1, 2, 3, 4, 3, 2, 1, 0, -1, -3, -4, -5, -5, -4, -3, -1, 0, 1, 2, 3, 3, 3,
3, 2, 0, -1, -3, -4, -4, -5, -4, -3, -3, -1, 1, 2, 2, 3, 4, 3, 2, 1, 0, -1, -2,
-3, -4, -5, -5, -4, -2, -1, 0, 2, 3, 4, 3, 3, 3, 1, 0, -1, -3, -4, -5, -5, -4,
-3, -3, -1, 1, 2, 3, 4, 3, 3, 2, 1, -1, -2, -3, -3, -4, -4, -3, -2, -1, 0, 1, 2,
3, 2, 2, 1, 1, 0, -1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0,
-1, -1, -2, -2, -2, -3, -2, -2, -1, 0, 1, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2,
-2, -2, -1, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1,
0, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, 0, 1, 1, 1, 1, 1, 1,
0, 0, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0, 1, 2, 2, 1, 1, 0, -1, -1, -2, -2,
-2, -2, -2, -2, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -1, -1, -2, -2, -1,
0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -1, -2, -3, -3, -2, -1, 0, 0, 1, 1, 2, 2,
2, 1, 0, -1, -2, -3, -3, -3, -3, -3, -2, -1, 0, 1, 3, 3, 3, 3, 2, 1, -1, -2, -2,
-3, -4, -4, -3, -3, -2, 0, 2, 2, 2, 3, 3, 2, 1, 0, -1, -3, -4, -4, -4, -4, -3,
-1, 0, 1, 3, 3, 3, 3, 1, 1, 0, -2, -3, -4, -4, -4, -3, -2, -1, 1, 1, 2, 3, 3, 2,
1, 0, 0, -1, -3, -4, -4, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0, 0, -1, -2, -3,
-4, -3, -2, -2, -2, -1, 0, 1, 1, 2, 2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -2,
-2, -1, 0, 1, 1, 1, 1, 2, 2, 1, 0, -1, -1, -2, -2, -2, -2, -2, -1, -2, -1, -1,
0, 1, 1, 2, 2, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -1, 0, 1, 1, 1, 1, 1, 1,
1, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, -1, -2,
-2, -2, -2, -2, -1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -2, -2, -2,
-1, 0, 0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, 0, 1, 1, 1,
1, 2, 1, 0, -1, -1, -2, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 1, 1, 0, 0, -1, -1,
-2, -2, -2, -2, -2, -1, 0, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-1, -1, 0, 0, 1, 1, 2, 2, 1, 0, -1, -1, -2, -3, -3, -3, -2, -2, -2, -1, 0, 1, 2,
2, 2, 2, 1, 0, -1, -2, -2, -3, -3, -3, -2, -2, -1, -1, 0, 1, 2, 2, 2, 2, 1, 0,
-1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2,
-2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, 0, 1,
1, 1, 1, 1, 1, 1, 0, -1, -2, -2, -3, -3, -3, -2, -1, -1, 0, 1, 1, 1, 1, 1, 1, 0,
0, -1, -2, -2, -3, -3, -2, -2, -1, -1, 0, 1, 1, 1, 2, 1, 0, 0, 0, -1, -2, -2,
-2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2,
-2, -1, -1, -1, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0,
1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, 0, 1, 2, 2, 1, 1, 1, 0,
0, -1, -2, -2, -3, -3, -2, -2, -1, 0, 1, 1, 1, 2, 1, 1, 0, 0, -1, -2, -2, -2,
-2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1,
0, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2, -2, -1, -1, -1, 0, 0, 0,
0, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1,
-1, -1, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1,
0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1,
1, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, 0, 0, 1, 1, 0, 1, 0, 0, 0, -1, -1,
-2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-1, 0, 0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1,
1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 1, 1,
1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, -1,
-1, -2, -2, -2, -2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2,
-2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -1, -1, -1,
0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0,
0, 0, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2,
-2, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -2, -2, -1, -1,
0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0,
0, 0, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -1, -1, -1,
0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0,
-1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2,
-2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, -1, -1, -2,
-2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2,
-2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0,
0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0,
0, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2,
-2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, };

#endif /* WOODEIGHT_H_ */
