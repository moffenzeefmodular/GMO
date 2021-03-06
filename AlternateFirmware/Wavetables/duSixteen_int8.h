#ifndef DUSIXTEEN_H_
#define DUSIXTEEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DUSIXTEEN_NUM_CELLS 798
#define DUSIXTEEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DUSIXTEEN_DATA [] = {0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 2, 3, 4, 5, 5, 2, 1, -2, -4, -7, -9,
-10, -11, -13, -13, -13, -12, -11, -8, -6, -4, -1, 1, 4, 5, 8, 9, 11, 12, 15, 4,
-6, -6, -2, 2, 7, 15, 21, 28, 31, 35, 34, 35, 31, 29, 24, 19, 13, 8, 2, -4, -11,
-18, -24, -29, -31, -35, -35, -40, -36, -42, -16, 9, 6, 3, -14, -29, -48, -63,
-84, -98, -101, -90, -68, -40, -15, 8, 28, 44, 56, 63, 67, 67, 65, 61, 55, 48,
41, 34, 26, 19, 11, 9, 7, -8, -15, -19, -29, -36, -41, -40, -33, -23, -10, 1,
15, 27, 37, 43, 46, 46, 41, 34, 24, 13, 4, -7, -14, -21, -24, -28, -26, -29,
-18, 19, 26, 29, 25, 16, 4, -10, -25, -38, -47, -55, -60, -65, -57, -45, -30,
-20, -8, 0, 10, 17, 25, 31, 36, 38, 39, 38, 37, 35, 33, 30, 14, 30, 49, 59, 55,
41, 21, -4, -28, -46, -49, -54, -51, -44, -36, -31, -22, -17, -11, -8, -6, -6,
-6, -7, -7, -7, -7, -6, -5, -2, -4, 24, 34, 33, 29, 9, -6, -22, -38, -52, -56,
-59, -48, -30, -4, 19, 33, 44, 52, 55, 53, 48, 38, 27, 15, 4, -7, -15, -22, -26,
-29, -29, -34, -53, -66, -64, -47, -27, -7, 15, 38, 54, 61, 65, 64, 62, 56, 47,
38, 27, 17, 7, -3, -12, -21, -28, -34, -37, -40, -39, -40, -35, -36, -20, 15,
23, 27, 23, 14, 2, -12, -26, -37, -47, -56, -57, -55, -51, -44, -32, -17, 2, 19,
36, 47, 56, 56, 54, 47, 42, 34, 29, 22, 20, 9, -30, -39, -44, -41, -22, 4, 40,
60, 87, 105, 93, 76, 54, 41, 25, 6, 3, -5, -14, -13, -13, -13, -18, -26, -37,
-55, -65, -69, -75, -83, -95, -95, -93, -93, -85, -80, -66, -48, -29, -6, 17,
39, 60, 77, 88, 95, 100, 110, 115, 110, 107, 99, 88, 72, 48, 23, -6, -32, -58,
-78, -94, -108, -116, -120, -121, -113, -102, -90, -73, -50, -21, 2, 21, 37, 51,
61, 67, 71, 72, 73, 73, 71, 72, 69, 67, 65, 55, 41, 23, 8, -6, -15, -22, -28,
-35, -42, -47, -51, -52, -52, -50, -49, -46, -44, -43, -43, -40, -36, -40, -40,
-36, -25, -8, 10, 28, 48, 63, 74, 84, 84, 83, 77, 67, 55, 42, 28, 14, 1, -13,
-24, -31, -36, -42, -42, -42, -43, -43, -46, -47, -43, -36, -29, -20, -9, 1, 11,
21, 30, 37, 41, 48, 56, 61, 62, 56, 44, 29, 10, -9, -26, -39, -47, -51, -52,
-50, -44, -39, -30, -22, -13, -5, 2, 8, 13, 15, 14, 14, 15, 16, 18, 19, 18, 18,
14, 11, 6, 1, -5, -11, -17, -24, -29, -34, -35, -35, -37, -36, -31, -26, -20,
-13, -8, -4, 1, 5, 9, 12, 15, 17, 19, 21, 22, 23, 26, 27, 30, 33, 34, 32, 27,
21, 13, 5, -2, -9, -14, -18, -21, -22, -22, -22, -21, -21, -20, -20, -18, -15,
-11, -6, -2, 1, 6, 11, 17, 21, 23, 22, 20, 16, 13, 10, 8, 6, 5, 4, 4, 3, 3, 2,
2, 2, 2, 4, 3, 0, -3, -6, -8, -9, -8, -8, -7, -6, -5, -4, -4, -4, -4, -5, -8,
-12, -16, -19, -21, -21, -20, -19, -16, -12, -8, -4, 0, 5, 8, 10, 13, 13, 13,
13, 10, 8, 5, 3, 2, 1, -1, -3, -5, -7, -7, -6, -5, -4, -2, 0, 2, 3, 3, 4, 4, 3,
2, 1, 0, -2, -2, -2, -2, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 1, 2, 2, 3, 4, 5,
5, 6, 6, 6, 5, 5, 4, 4, 3, 3, 2, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3,
-3, -4, -4, -5, -6, -6, -5, -5, -4, -3, -3, -2, -1, -1, -1, -1, -1, -1, -2, -3,
-3, -3, -3, -3, -3, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 2, 1, 0,
-1, -2, -2, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 0, 0,
-1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, };

#endif /* DUSIXTEEN_H_ */
