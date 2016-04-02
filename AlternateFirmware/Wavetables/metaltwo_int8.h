#ifndef METALTWO_H_
#define METALTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define METALTWO_NUM_CELLS 2303
#define METALTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) METALTWO_DATA [] = {27,
39, 29, -82, -35, 73, 60, 1, -54, -99, -82, -25, -4, 15, -24, -120, -39, 64, 93,
117, 115, 28, -31, -23, -87, -48, 0, 12, -54, 5, 33, -8, 56, 57, -61, -104, -30,
-54, -55, 10, 15, 2, 45, 20, -8, -46, -60, -40, 2, 77, 79, 76, 104, 70, 28, -19,
-31, -38, -72, -18, -7, -14, -24, -10, 55, 38, -20, -17, -72, -77, 4, 3, 1, -25,
-19, 15, -3, -18, -26, 4, 37, 28, 87, 116, 58, 12, 15, 4, -71, -102, -73, 11,
76, 83, 27, -25, -45, -40, 0, -7, -16, -2, 13, 0, -31, -15, 8, 8, 14, 17, 11,
-46, -63, -11, 42, 38, 58, 81, 34, -21, -71, -69, -61, -22, 10, 20, 9, -27, -41,
-34, -34, -32, -12, -8, 12, 18, 11, 56, 74, 23, -4, -5, -23, -33, 3, 25, 27, 34,
51, 56, 43, 36, 2, -36, -68, -78, -16, 26, 16, 28, 23, -12, -29, -34, -16, 29,
69, 78, 71, 54, 10, 7, 25, 4, -20, -20, -26, -42, -19, 0, -4, 15, 17, -7, -41,
-65, -81, -52, 18, 41, 33, 20, 2, -21, -35, -42, -24, -3, -1, 24, 29, 1, -6, -1,
-3, -20, -11, -16, -36, -32, -11, 18, 11, -6, -22, -28, -27, -21, -16, 6, 16,
22, 37, 24, 12, -7, -31, -32, -21, -11, 13, 45, 64, 66, 61, 34, -5, -26, -22,
-17, -3, 3, 5, 3, -10, -5, 17, 34, 13, -21, -49, -46, -18, 21, 57, 74, 45, 13,
-5, -22, -32, -8, 31, 25, 14, 9, 0, -19, -30, -28, -24, -32, -18, 3, -5, -11,
-7, 4, -4, -25, -32, -39, -36, -13, 19, 42, 37, 18, -1, -3, -4, -21, -34, -46,
-48, -15, 24, 38, 29, -9, -21, -25, -24, -8, 0, 2, -4, -7, -4, -6, -1, 11, 9, 4,
-8, -4, 6, 23, 30, 22, 22, 21, 5, -1, -4, -11, -3, 20, 48, 46, 18, -7, -31, -46,
-31, -6, 11, 9, 11, 20, 27, 18, 7, 4, -5, -21, -20, -10, -2, 15, 26, 47, 43, 26,
0, -21, -30, -37, -29, -12, -2, 1, 2, -5, -23, -31, -27, -30, -16, -7, 8, 15,
10, 8, 0, -6, -6, -3, -2, 1, 4, 8, 6, 7, 3, -3, -3, -16, -31, -30, -25, -8, 5,
9, 17, 6, -4, -15, -23, -25, -13, 18, 43, 38, 24, 11, 7, 7, 14, 23, 13, 2, -7,
5, 20, 19, 16, 5, -6, -12, -15, -13, -13, -7, 4, 19, 26, 14, -3, -19, -20, -12,
2, 18, 22, 21, 20, 15, 1, -9, -7, -6, -15, -15, -2, 4, 1, 1, -6, -16, -21, -23,
-19, -24, -25, -16, 3, 18, 17, 13, 2, -15, -27, -24, -16, -6, 12, 24, 28, 21, 7,
-5, -16, -18, -13, -3, 7, 9, 1, -5, -6, -4, -3, -2, -3, -11, -8, 9, 23, 25, 31,
29, 20, 6, -3, -2, -2, 9, 26, 34, 26, 5, -7, -12, -22, -18, -7, -2, -4, -2, 7,
2, -7, -6, -6, -7, -8, -6, 3, 10, 19, 24, 22, 8, -6, -17, -21, -20, -15, -7, -2,
-1, -3, -7, -17, -25, -33, -33, -29, -23, -7, 8, 12, 9, -1, -10, -14, -13, -4,
-2, -2, 1, 5, 11, 12, 10, 2, -6, -16, -23, -20, -10, 4, 18, 22, 13, -3, -18,
-24, -19, -4, 8, 19, 25, 24, 17, 10, 6, -3, -10, -9, 2, 9, 13, 19, 25, 19, 10,
6, -7, -21, -24, -15, -5, 2, 10, 14, 6, -3, -8, -13, -15, -14, -1, 8, 11, 17,
14, 3, -5, -12, -10, -7, -4, 2, 6, 10, 6, -3, -11, -19, -26, -24, -20, -14, -8,
-3, 8, 11, 1, -6, -12, -20, -24, -14, 1, 9, 18, 24, 21, 9, -3, -9, -14, -15,
-12, 0, 6, 6, 9, 10, 5, -1, -3, -2, -7, -4, 2, 8, 19, 24, 26, 19, 2, -8, -8, 0,
10, 18, 24, 20, 12, 6, -1, -9, -15, -16, -10, 0, 8, 14, 18, 16, 7, -4, -10, -13,
-12, -2, 8, 11, 11, 15, 12, 3, -7, -16, -19, -22, -12, 0, 6, 10, 7, 2, -8, -20,
-23, -24, -18, -7, 1, 7, 6, -1, -12, -16, -15, -11, -7, -2, 4, 8, 13, 13, 7, -2,
-11, -16, -16, -12, -2, 8, 15, 15, 13, 7, -2, -9, -13, -15, -11, 0, 12, 19, 16,
9, 1, -5, -8, -7, -3, 0, 4, 11, 18, 20, 17, 9, 0, -8, -12, -9, -2, 5, 13, 17,
14, 6, -3, -12, -16, -16, -11, -4, 4, 9, 7, 7, 1, -12, -21, -18, -14, -6, 3, 10,
10, 7, 6, -1, -10, -16, -17, -15, -12, -6, -1, 0, -2, -3, -6, -14, -21, -21,
-13, -3, 8, 15, 14, 9, -1, -8, -12, -11, -8, -2, 6, 11, 13, 12, 8, 2, -6, -8,
-10, -8, -1, 6, 15, 15, 13, 10, 4, -2, -5, -4, -1, 3, 11, 18, 19, 16, 8, 0, -7,
-10, -9, -4, 3, 10, 14, 10, 2, -6, -11, -11, -11, -10, -7, -3, 3, 8, 8, 2, -6,
-14, -19, -18, -13, -5, 3, 9, 11, 8, 3, -5, -13, -17, -16, -12, -7, -1, 3, 4, 1,
-5, -13, -20, -20, -17, -12, -3, 1, 5, 4, 2, 1, -3, -8, -8, -6, -1, 7, 14, 17,
14, 8, 1, -9, -13, -10, -4, 5, 11, 14, 11, 3, -1, -6, -8, -8, -5, 2, 9, 17, 22,
19, 13, 3, -4, -6, -7, -3, 3, 9, 13, 14, 11, 5, -2, -8, -13, -14, -10, -2, 5,
10, 10, 3, -4, -9, -12, -12, -9, -3, 3, 7, 10, 7, 2, -2, -7, -10, -11, -10, -5,
0, 6, 9, 5, -2, -11, -18, -19, -15, -8, 0, 7, 9, 9, 8, 3, -4, -10, -10, -7, -1,
7, 12, 16, 15, 10, 4, -2, -6, -5, -3, 2, 6, 7, 8, 5, 4, 2, -4, -6, -6, -2, 7,
13, 17, 16, 9, 2, -3, -5, -3, 1, 5, 8, 10, 9, 8, 4, -2, -7, -10, -11, -7, 0, 6,
8, 5, 0, -5, -9, -12, -14, -13, -9, -3, 3, 6, 5, 0, -4, -9, -12, -12, -11, -6,
-1, 3, 3, 1, -4, -9, -12, -13, -11, -8, -4, -1, 1, 2, 2, -1, -5, -10, -11, -9,
-4, 3, 8, 10, 10, 6, 1, -3, -6, -4, 0, 2, 4, 6, 8, 8, 6, 1, -6, -7, -7, -3, 3,
8, 11, 10, 7, 5, 2, -1, -2, -3, -2, 1, 4, 8, 8, 5, 0, -6, -9, -10, -7, -2, 2, 4,
3, -1, -4, -8, -9, -9, -9, -7, -4, -1, 1, 2, 1, -3, -7, -9, -10, -9, -5, -1, 2,
3, 0, -2, -4, -7, -8, -8, -8, -4, 0, 2, 3, 2, 1, -2, -5, -6, -6, -4, 0, 4, 7, 6,
4, 3, 0, -1, 0, -1, 0, 2, 6, 11, 12, 10, 6, 1, -2, -3, 0, 4, 5, 8, 8, 7, 6, 4,
1, -2, -3, -3, -1, 2, 5, 6, 5, 1, -3, -5, -5, -4, -2, 0, 2, 3, 2, 2, -1, -4, -7,
-8, -9, -6, -3, 1, 2, 0, -2, -6, -9, -10, -10, -7, -5, -2, 1, 1, 0, -1, -2, -5,
-7, -7, -4, -2, 2, 5, 5, 3, -1, -4, -5, -5, -3, 0, 3, 5, 5, 5, 4, 3, 1, -1, -1,
0, 3, 7, 10, 10, 8, 4, 0, -2, -1, 1, 2, 3, 6, 8, 7, 6, 4, 0, -3, -5, -3, 0, 3,
7, 8, 7, 3, 0, -2, -4, -4, -3, -1, 0, 2, 2, 2, -1, -4, -7, -9, -9, -6, -3, 0, 1,
0, -1, -5, -7, -8, -8, -7, -4, -2, -1, 0, 0, -1, -4, -6, -7, -7, -4, -1, 2, 4,
3, 1, -3, -6, -7, -7, -4, -1, 1, 3, 4, 4, 4, 2, -1, -3, -4, -1, 3, 6, 9, 8, 5,
2, -1, -1, -1, -1, 1, 3, 4, 5, 6, 5, 2, -1, -3, -4, -2, 1, 4, 5, 5, 3, 0, -3,
-4, -4, -3, -2, -1, 0, 1, 1, 1, -3, -6, -8, -9, -8, -6, -3, 0, 0, -1, -3, -5,
-8, -9, -9, -8, -6, -4, -2, -2, -2, -3, -5, -7, -7, -6, -4, -2, 1, 2, 1, 0, -2,
-3, -4, -3, -2, 0, 1, 2, 3, 4, 3, 1, -1, -2, -2, 0, 3, 6, 6, 5, 3, 1, 0, -1, -1,
0, 1, 2, 4, 5, 5, 4, 2, 0, -3, -2, 0, 2, 3, 3, 2, 1, -1, -2, -3, -4, -4, -4, -3,
-1, 0, 1, 0, -2, -4, -5, -5, -4, -3, -2, -1, -1, -1, -2, -3, -4, -5, -5, -5, -6,
-5, -4, -3, -2, -3, -4, -6, -7, -6, -4, -2, 0, 1, 2, 1, 1, 1, 0, 0, 0, 0, 1, 2,
4, 5, 4, 3, 1, 0, 0, 1, 3, 4, 4, 4, 5, 4, 4, 4, 3, 2, 2, 3, 5, 6, 7, 6, 4, 2, 1,
1, 1, 2, 3, 3, 3, 2, 2, 1, 0, -2, -4, -4, -3, -1, -1, 0, -1, -2, -3, -4, -5, -5,
-4, -3, -3, -2, -1, -1, -2, -3, -5, -6, -6, -4, -3, -2, -1, -1, -2, -4, -5, -5,
-5, -4, -2, -1, -1, 0, 1, 1, 1, 0, -1, -2, -1, 1, 3, 4, 5, 4, 2, 0, 0, 0, 1, 2,
2, 2, 3, 3, 4, 4, 3, 1, 0, -1, 1, 3, 5, 6, 4, 3, 1, 0, 1, 1, 1, 1, 2, 3, 3, 3,
2, -1, -4, -5, -5, -3, -2, -1, 0, -1, -2, -4, -6, -6, -7, -6, -4, -3, -2, -2,
-2, -2, -4, -5, -6, -7, -6, -4, -2, -1, -1, -3, -5, -7, -7, -7, -6, -5, -3, -2,
0, 0, 0, -1, -3, -3, -3, -1, 1, 3, 5, 5, 4, 2, 1, 0, 0, 1, 2, 3, 3, 5, 5, 5, 3,
1, -1, -2, -1, 1, 4, 5, 6, 4, 3, 1, 0, 0, 0, 0, 2, 3, 4, 4, 3, 1, -2, -4, -4,
-4, -3, -1, 0, 0, 0, -2, -3, -5, -6, -6, -5, -4, -2, -1, -1, -2, -3, -5, -7, -8,
-7, -5, -2, 0, 0, -1, -2, -3, -5, -5, -5, -5, -3, -2, 0, 1, 2, 1, 0, -2, -3, -3,
-1, 1, 3, 4, 4, 3, 1, 0, 0, 0, 0, 1, 3, 5, 6, 6, 5, 3, 1, 0, 0, 2, 3, 5, 6, 5,
4, 3, 2, 1, 0, -1, 0, 1, 3, 4, 4, 3, 1, -1, -2, -3, -2, -1, 0, 1, 1, 1, -1, -2,
-3, -4, -4, -4, -4, -3, -2, -1, -1, -3, -4, -5, -6, -5, -4, -2, -1, 0, 0, 0, -2,
-3, -4, -4, -4, -2, -1, 0, 1, 1, 0, -1, -3, -4, -3, -2, -1, 1, 2, 2, 2, 2, 1, 1,
0, -1, 0, 2, 3, 5, 5, 4, 2, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 1, -1, -2, -2, -2, -1,
0, 2, 2, 1, 0, -1, -1, -2, -2, -2, -2, -1, 0, 0, -1, -1, -3, -4, -5, -5, -5, -4,
-2, -2, -2, -2, -3, -4, -5, -5, -4, -4, -3, -2, -1, 0, 0, -1, -2, -3, -4, -3,
-2, -1, 0, 1, 0, -1, -2, -2, -3, -2, -2, -1, 0, 1, 2, 2, 2, 1, -1, -1, -1, 0, 1,
2, 3, 3, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 0, -1, -2, -2, -1, 0, 1, 1, 2, 1,
0, 0, -1, -2, -2, -2, -1, -1, 0, 1, 0, -1, -2, -3, -4, -4, -3, -2, -1, 0, 0, -1,
-2, -3, -3, -4, -3, -3, -2, -1, 0, 0, 0, -1, -2, -2, -2, -2, -1, 0, 0, 1, 0, 0,
-1, -2, -2, -2, -2, -1, 0, 2, 2, 2, 1, 0, -1, -1, 0, 1, 2, 2, 2, 3, 2, 2, 1, 0,
0, 0, 0, 1, 2, 2, 2, 1, 0, -1, -1, -1, -1, 0, 1, 1, 1, 1, 0, -1, -1, -2, -2, -1,
-1, 0, 0, 0, 0, -1, -2, -2, -2, -2, -2, -1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1,
0, 0, 0, 0, 0, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, };

#endif /* METALTWO_H_ */