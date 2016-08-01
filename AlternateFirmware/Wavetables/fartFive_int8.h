#ifndef FARTFIVE_H_
#define FARTFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define FARTFIVE_NUM_CELLS 5644
#define FARTFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) FARTFIVE_DATA [] = {0, 0,
0, 0, 0, 0, -1, 0, 0, 1, 1, 0, 2, 2, 2, -1, 1, 1, 0, -2, 4, 2, 1, 5, 4, 1, -5,
3, -8, -4, -8, -4, -9, -11, -13, -11, -13, -31, -18, -28, -29, -36, -25, -28,
-25, -20, -26, -21, -31, -39, -28, -42, -63, -51, -54, -60, -54, 1, -43, -38,
-11, -11, -16, -6, 71, 53, 78, 56, 90, 64, 18, 43, 76, 83, 47, 118, 108, 82, 36,
23, -7, -15, -9, 7, 40, 34, 13, -11, 25, 3, -14, -48, -31, -1, -5, -9, 12, 38,
-8, -11, -5, -22, -39, -52, -57, -46, -28, -15, -13, -19, -38, -62, -56, -72,
-74, -57, -44, -39, -12, -1, -13, -15, -22, -21, -38, -7, 4, 9, 16, 31, 26, 13,
13, 0, 14, 5, 5, 15, 17, 20, 28, 11, 12, 12, 20, 19, 14, 10, 13, 25, 21, 36, 38,
36, 30, 27, 17, 16, 25, 26, 19, 16, 21, 18, 1, 1, -11, -18, -12, -21, -13, -13,
-21, -22, -22, -23, -23, -20, -15, -16, -6, -20, -11, -6, -5, -3, -13, -1, 4,
-2, -7, -1, -17, -16, -25, -18, -5, -4, -1, -6, -7, -6, -1, -12, 2, 10, -1, 9,
17, 22, 19, 21, 20, 18, 23, 14, 15, 11, 12, 9, 19, 17, 25, 26, 5, 14, 1, -7, -6,
13, 17, 19, 26, 12, 11, -18, -20, -12, -29, -34, -5, 0, -29, -36, -50, -65, -88,
-84, -65, -67, -74, -51, -39, -61, -61, -38, -53, -66, -30, -20, 4, 20, 50, 56,
37, 50, 56, 29, 8, 57, 47, 60, 79, 92, 76, 41, 26, 10, 18, -3, 25, 38, 54, 32,
31, 47, 30, 20, -1, 1, 12, 21, 13, 32, 36, 24, 6, 4, 2, -16, -31, -38, -21, -18,
-15, -8, -5, -19, -45, -45, -40, -49, -36, -32, -33, -18, -13, -6, -29, -24,
-26, -38, -41, -17, -8, -18, -9, -16, -12, -23, -22, -13, -15, -25, -10, -4, -2,
-5, 5, 5, -6, 7, 17, 21, 13, 27, 22, 24, 27, 33, 29, 20, 24, 27, 24, 24, 21, 17,
11, 7, 14, 9, 8, 1, 8, 5, 4, 12, 12, 7, 13, 14, 7, 15, 17, 5, 2, 12, 10, 4, 10,
7, -3, -12, -11, -3, -10, -9, -7, -8, -20, -30, -21, -13, -9, -16, -11, -6, -11,
-13, -14, -3, -8, -11, -2, 8, 13, 5, 14, 2, -1, -6, -6, -5, -15, -14, -14, -8,
-23, -16, -32, -48, -51, -54, -35, -26, -19, -15, 5, 0, 15, 27, 27, 29, 22, 31,
35, 41, 40, 57, 49, 42, 43, 38, 23, -7, -14, -15, -8, -6, 5, 13, 8, -14, -24,
-14, -21, -25, -16, -5, 2, 12, 14, 27, 20, 14, 10, 4, 3, 1, -7, -14, 3, -9, -5,
-3, -5, -19, -35, -32, -32, -30, -27, -7, -11, 1, 7, 5, 1, -1, -8, -12, -3, 14,
32, 22, 26, 26, 20, 4, 9, 14, 8, -2, -3, 8, -1, 0, 0, 1, -5, -4, 3, 3, -2, 1, 8,
7, 16, 25, 22, 20, 14, 7, 8, 7, 8, 4, -2, 0, -1, -13, -17, -19, -28, -34, -32,
-31, -26, -29, -29, -27, -23, -14, -13, -15, -17, -10, -20, -16, -4, 1, -4, 0,
7, -3, -5, -7, -9, -21, -15, -13, -10, -7, -2, -2, -11, -3, -10, -8, -10, 6, 9,
8, 20, 26, 28, 21, 39, 32, 35, 37, 31, 30, 26, 28, 24, 32, 20, 25, 17, 4, 3, 2,
-1, 0, 6, 7, 10, -2, 0, -5, -4, -5, 5, 1, 5, -1, -7, -1, -9, 0, -8, 1, -5, -5,
-26, -21, -21, -33, -24, -15, 0, -18, -23, -33, -27, -46, -36, -19, -10, -13,
-14, -2, -10, -5, -9, -1, -6, 5, 2, 11, 15, 11, 12, 13, 11, 5, 6, 0, -1, -7, 5,
13, 17, 14, 20, 10, 3, 3, 2, 5, 5, 19, 24, 34, 31, 34, 24, 13, 5, 12, 21, 22,
23, 20, 16, 2, -4, -10, -9, -24, -19, -24, -26, -18, -18, -25, -27, -20, -28,
-12, -19, -21, -20, -23, -22, -17, -10, -5, -6, -24, -21, -19, -23, -24, -24,
-25, -20, -23, -20, -22, -28, -27, -33, -30, -14, -1, -10, 1, 7, 19, 32, 46, 62,
59, 52, 55, 63, 45, 51, 58, 61, 52, 61, 66, 52, 25, -1, -3, -7, 0, -7, 14, 14,
1, -11, -7, -8, -16, -16, -19, -4, -9, -4, -3, 0, -4, -4, -12, -19, -24, -40,
-45, -44, -33, -33, -24, -26, -34, -44, -50, -52, -46, -33, -32, -24, -10, -5,
-7, -8, 1, 1, -4, -2, 17, 31, 20, 23, 23, 22, 10, 11, 15, 11, 8, 5, 12, 6, 12,
13, 6, 4, 12, 22, 23, 23, 27, 32, 32, 33, 41, 45, 37, 28, 21, 24, 22, 15, 10, 9,
3, -6, -9, -17, -26, -32, -38, -34, -31, -30, -30, -23, -21, -18, -6, -3, -6,
-11, -4, -11, -7, -2, -1, -6, -11, -14, -20, -25, -33, -29, -38, -40, -41, -39,
-39, -36, -32, -28, -23, -25, -16, -16, -11, -1, 3, 8, 11, 13, 20, 16, 19, 30,
34, 29, 50, 49, 37, 43, 35, 33, 28, 33, 34, 45, 34, 39, 48, 32, 21, 10, 10, 5,
10, 14, 27, 26, 20, 14, 5, -1, -13, -23, -26, -19, -17, -16, -18, -16, -22, -33,
-35, -36, -39, -44, -42, -34, -25, -20, -18, -9, -13, -19, -23, -24, -22, -23,
-8, 0, 8, 15, 14, -1, -3, 0, -11, -11, -1, 9, 6, 5, 10, 9, 4, 0, 7, 13, 13, 18,
18, 19, 21, 25, 20, 17, 19, 21, 18, 10, 16, 21, 16, 11, 21, 21, 13, 6, 0, -1,
-4, -4, -4, -4, -7, -7, -14, -16, -12, -20, -16, -16, -20, -18, -14, -16, -19,
-12, -12, -11, -18, -21, -16, -19, -25, -24, -17, -21, -23, -18, -13, -14, -13,
-14, -12, -12, -8, -10, 0, 4, 3, 9, 6, 10, 1, 6, 2, 11, 3, 0, 10, 1, -2, 5, 18,
5, 14, 19, 22, 21, 29, 45, 42, 40, 39, 47, 40, 27, 31, 48, 40, 27, 40, 40, 18,
-1, -7, -8, -11, -14, -14, -1, -9, -24, -25, -29, -33, -34, -37, -37, -20, -20,
-21, -13, -11, -15, -19, -21, -28, -31, -34, -34, -26, -20, -14, -9, -12, -23,
-25, -20, -30, -23, -14, -6, -1, 6, 16, 14, 12, 9, 9, 1, 17, 18, 22, 28, 25, 24,
24, 20, 22, 27, 14, 17, 18, 19, 12, 17, 18, 16, 18, 16, 23, 20, 16, 11, 19, 20,
18, 19, 17, 16, 8, 5, 4, 0, -7, -17, -19, -19, -22, -25, -27, -33, -40, -39,
-42, -43, -39, -40, -39, -35, -32, -26, -22, -22, -31, -21, -18, -22, -14, -2,
-4, -7, 2, -4, 6, -5, -4, -8, -10, -12, -9, -4, -8, 5, -5, 5, 2, 11, 9, 19, 21,
32, 55, 44, 56, 52, 59, 48, 50, 49, 61, 53, 36, 47, 44, 38, 14, 12, 8, 4, -12,
-5, 2, -3, -14, -20, -17, -21, -27, -32, -22, -22, -13, -20, -10, -7, -18, -26,
-28, -30, -42, -35, -37, -28, -31, -27, -31, -32, -34, -42, -39, -39, -32, -26,
-16, -10, 3, 7, 3, 2, 9, 6, 0, 10, 22, 26, 26, 30, 29, 27, 21, 20, 18, 22, 21,
18, 22, 25, 27, 23, 25, 22, 25, 25, 25, 23, 25, 24, 20, 19, 15, 20, 11, 10, 10,
3, -2, -3, -11, -17, -10, -17, -23, -25, -29, -32, -30, -30, -33, -26, -27, -29,
-30, -23, -22, -24, -24, -21, -15, -20, -20, -15, -11, -24, -17, -14, -15, -13,
-15, -10, -15, -10, -15, -10, -8, -6, -9, -10, -2, -3, -2, -7, 11, 6, 1, 18, 20,
15, 23, 40, 35, 46, 56, 50, 41, 44, 45, 38, 41, 41, 49, 40, 34, 37, 32, 10, -2,
-1, -4, -4, -3, 4, 3, -1, -13, -13, -13, -21, -26, -28, -24, -23, -18, -18, -12,
-14, -23, -31, -36, -40, -42, -42, -37, -28, -29, -23, -26, -31, -29, -34, -31,
-21, -21, -12, -4, -4, 4, 12, 12, 15, 18, 15, 13, 20, 31, 20, 27, 35, 27, 25,
27, 28, 21, 17, 14, 21, 18, 18, 22, 17, 13, 10, 13, 11, 12, 11, 13, 14, 14, 18,
18, 14, 8, 3, -1, -5, -3, -4, -10, -14, -17, -17, -27, -32, -30, -34, -39, -36,
-28, -25, -22, -27, -16, -16, -15, -15, -15, -11, -15, -10, -7, 0, -4, -9, -12,
-9, -11, -18, -14, -19, -23, -25, -19, -16, -19, -12, -18, -17, -9, -7, -6, 3,
10, 7, 18, 23, 33, 36, 46, 55, 51, 52, 49, 51, 37, 40, 44, 52, 41, 39, 43, 28,
14, 0, 1, 2, 3, -4, 10, 5, -3, -10, -13, -9, -14, -19, -18, -10, -13, -14, -19,
-14, -19, -22, -25, -28, -32, -40, -41, -38, -31, -31, -27, -30, -31, -36, -32,
-32, -29, -19, -10, -7, -1, 14, 11, 5, 9, 18, 10, 10, 20, 30, 29, 22, 25, 25,
18, 9, 15, 21, 14, 11, 17, 16, 16, 18, 17, 17, 16, 17, 22, 15, 13, 16, 12, 11,
17, 20, 10, 5, -1, -6, -9, -11, -14, -21, -22, -24, -25, -25, -28, -33, -33,
-31, -34, -28, -28, -28, -29, -29, -20, -20, -18, -24, -18, -20, -26, -19, -10,
-18, -22, -3, -10, -5, 7, 17, 7, 10, 17, 14, 19, 24, 38, 41, 41, 42, 51, 38, 29,
25, 18, 18, 23, 25, 26, 30, 18, 4, 0, 2, -7, -7, -7, 0, 4, 4, 3, 7, 2, -8, -7,
-8, -4, -2, -2, -6, 1, 3, 5, -3, -6, -12, -26, -27, -23, -22, -16, -15, -20, -8,
-13, -18, -21, -19, -22, -20, -7, 7, 11, 10, 11, 2, 3, 0, 2, -1, 3, 6, 6, 8, 10,
4, -4, -3, -12, -9, -4, -4, -9, -3, -1, 3, 1, -1, 8, 5, -4, -3, 6, 5, 6, 8, 13,
16, 8, 4, 2, -2, -9, -7, -7, -10, -2, -4, -6, -9, -10, -9, -11, -16, -13, -14,
-15, -10, -7, 7, 9, 5, 11, 24, 18, 17, 18, 14, 13, 14, 16, 29, 48, 27, 21, 22,
9, -18, -28, -25, -23, -19, -18, -3, -1, -11, -30, -28, -30, -41, -37, -29, -16,
1, 4, 6, 14, 4, -10, -11, -20, -24, -14, -14, -3, 8, 14, 13, 5, -4, -6, -11,
-13, -6, 3, 17, 19, 22, 37, 29, 17, 18, 20, 21, 19, 27, 33, 44, 41, 38, 35, 27,
7, -1, 7, -2, 0, 4, 9, -4, -7, -14, -17, -19, -21, -14, -11, -7, -12, -7, -8,
-5, -15, -10, -11, -21, -22, -26, -19, -24, -27, -26, -7, -22, -31, -28, -42,
-44, -44, -32, -25, -5, -6, -1, 3, -2, 6, -8, -4, 5, 18, 10, 15, 30, 24, 9, 9,
16, -2, -8, -9, -9, -7, -4, 16, 25, 21, 42, 44, 35, 38, 41, 37, 39, 46, 55, 79,
61, 67, 63, 40, 9, -4, -8, -24, -17, -24, -10, -17, -20, -35, -46, -47, -69,
-63, -64, -57, -43, -28, -34, -24, -13, -27, -23, -31, -29, -25, -26, -16, 1, 7,
5, 4, -7, -15, -23, -24, -21, -18, -7, 7, 6, 13, 19, 12, 10, 13, 15, 22, 39, 36,
41, 45, 42, 32, 30, 26, 15, 23, 20, 22, 26, 21, 15, 19, 12, 0, 6, 9, -1, 0, 5,
1, 2, 5, -1, -5, -4, -14, -10, -14, -12, -7, -10, -20, -22, -18, -30, -29, -25,
-30, -32, -27, -30, -27, -21, -28, -30, -22, -27, -16, -19, -20, -18, -18, -16,
-20, -15, -19, -6, -18, -4, 1, 1, 4, -2, 7, 9, 26, 28, 43, 38, 45, 42, 36, 37,
39, 52, 45, 47, 52, 46, 22, 13, 10, 14, 9, 8, 9, 13, 5, -14, -14, -8, -2, -22,
-18, -17, -16, -30, -24, -5, -10, -7, -17, -12, -23, -24, -27, -12, -7, -8, 7,
0, 0, -13, -18, -24, -23, -21, -11, -8, -7, 2, -1, -8, -12, -10, -12, -16, -3,
14, 4, 10, 8, 6, 8, 5, -2, 7, 8, 1, 11, 6, 15, 9, 2, -1, 5, 7, 4, 8, 12, 18, 11,
23, 24, 15, 16, 18, 15, 15, 9, 13, 14, 4, 2, 9, -7, -14, -11, -17, -16, -17,
-10, -7, -10, -21, -5, -5, -13, -7, -6, -12, -9, -2, -7, 0, -2, -9, -21, -20,
-21, -27, -32, -31, -36, -39, -32, -33, -27, -18, -9, -19, -11, 13, 27, 11, 18,
46, 38, 26, 32, 49, 48, 36, 33, 46, 36, 8, -2, -8, -4, -2, -7, 4, 10, -7, -22,
-19, -16, -17, -23, -22, -4, 7, 10, 17, 20, 13, 2, 0, -6, 0, 1, -6, -4, -3, -2,
-6, -1, -14, -20, -26, -29, -26, -18, -6, -5, 10, 17, 20, 7, 8, 8, 0, 5, 20, 26,
22, 24, 14, 7, 0, -10, -11, -14, -23, -13, -10, -14, -8, -10, -20, -18, -19,
-15, 0, -5, -4, 3, 4, 5, 10, 10, 13, 13, 8, 1, 10, 17, 12, 8, 13, 14, 5, 5, -5,
-7, -15, -10, -10, -8, -1, 2, 1, -3, 7, 2, -5, -6, -1, 0, -1, 4, 2, -2, -7, -17,
-9, -18, -16, -20, -29, -25, -19, -17, -18, 5, -12, 6, 14, 17, 16, 15, 31, 20,
17, 25, 58, 40, 40, 51, 43, 22, -18, -18, -17, -29, -37, -22, -12, -18, -31,
-47, -29, -33, -53, -45, -29, -12, -8, 8, 26, 34, 28, 14, 10, 2, 2, -1, 14, 22,
19, 29, 18, 7, -5, -12, -22, -25, -18, -7, 6, 2, 18, 21, 9, -1, 3, 3, -1, 12,
24, 33, 28, 27, 22, 13, 2, 0, 0, -6, -9, -4, -3, -11, -7, -14, -29, -33, -26,
-30, -30, -29, -23, -11, -13, -4, 9, 0, -6, -2, -1, -4, 8, 13, 20, 19, 14, 21,
7, -4, -9, -2, -16, -13, -1, -13, -16, -17, -14, -17, -9, -20, -23, -13, -11,
-1, 3, 12, 16, 11, 9, 13, 19, 11, 7, 7, 0, 0, 2, 4, -5, 11, -3, -14, 1, -10,
-12, -10, -7, -9, 0, -11, -9, -1, -14, -3, -6, 5, 5, -4, 5, 5, 12, 24, 41, 36,
44, 32, 22, 28, 5, 12, 18, 20, 21, 33, 30, 13, -9, -28, -29, -34, -24, -10, 5,
8, -13, -18, -11, -24, -30, -37, -25, -9, 1, -1, 13, 17, 5, 6, -10, -2, -8, -13,
-18, 0, 15, 18, 20, 15, 11, -12, -18, -15, -10, -4, 4, 11, 22, 34, 26, 10, 8, 3,
-3, -5, 6, 14, 12, 13, 11, 8, 1, -5, -17, -16, -22, -27, -18, -12, -8, -5, -15,
-25, -12, -20, -30, -28, -18, -16, -16, -9, -1, 9, 6, 2, -2, 10, 5, 4, 11, 4, 6,
2, -2, -6, -5, -21, -20, -15, -18, -10, -18, -19, -18, -15, -11, -1, 6, 9, 11,
4, 4, 8, 9, 5, 6, 15, 20, 22, 14, 1, 5, -9, -16, -18, -17, -11, -10, -21, -17,
6, -17, -3, 9, 0, -7, 16, 14, 18, 61, 65, 76, 77, 70, 42, 35, 7, 8, 38, 36, 40,
46, 36, -7, -31, -67, -78, -61, -51, -42, -19, -5, -28, -34, -32, -37, -42, -46,
-34, -3, 6, -4, 15, 27, 12, 5, -8, -16, -13, -23, -25, -6, 17, 16, 20, 20, 4,
-13, -16, -11, -13, 13, 22, 32, 45, 53, 40, 24, 22, 16, 10, 10, 29, 29, 26, 20,
15, 8, -9, -30, -18, -20, -31, -25, -13, -15, -17, -8, -14, -13, -21, -9, -12,
-14, -11, -2, 10, 10, 15, 11, 16, 4, 0, -9, -2, -1, -10, -6, 2, -7, -16, -15,
-26, -25, -25, -26, -32, -13, -13, -14, -17, -12, -3, -3, -1, -3, 12, 3, 1, -4,
4, 2, -4, 5, 9, 8, -3, -6, -12, -7, -13, -18, -4, 11, 7, 8, 10, 17, 15, 16, 25,
27, 17, 16, 18, 7, 14, 17, 17, 19, 15, 1, -9, -14, -19, -22, -17, -12, -5, -12,
-9, -17, -26, -25, -19, -13, -15, 5, 4, 1, -6, 7, 20, 23, 25, 31, 40, 18, 12, 3,
-5, -7, 5, 15, 19, 24, 13, -8, -33, -35, -39, -32, -18, 0, 8, 7, -2, 5, 3, -18,
-17, -14, 2, 9, 19, 19, 34, 28, 25, 24, 10, 12, -3, -3, 1, 20, 26, 32, 31, 28,
16, -6, 0, -8, -13, -9, 2, 12, 20, 18, 6, -6, -17, -18, -28, -31, -16, -12, -13,
-14, 1, -3, -27, -34, -25, -39, -47, -30, -19, -11, -13, -7, 0, -10, -19, -13,
-27, -31, -13, -1, 5, 11, 17, 13, 0, -14, -11, -19, -20, -12, -15, -13, -8, -6,
-18, -19, -16, -10, -21, -9, 10, 4, 10, 36, 48, 53, 68, 59, 55, 38, 33, 34, 37,
26, 37, 37, 34, 35, 6, -14, -34, -31, -47, -40, -26, -2, -12, -18, -11, -23,
-20, -35, -26, -8, 3, 2, 22, 26, 18, 22, 14, 21, 21, 8, -1, -5, -3, 1, 2, 5, 7,
0, -11, -23, -29, -28, -41, -33, -4, -5, -3, 4, 3, -5, -16, -10, -4, -4, -1, 12,
9, 15, 13, 1, 6, -5, -10, -9, -13, -4, 2, -4, -1, 10, -1, 4, 3, -6, -4, -3, 6,
10, 15, 18, 20, 19, 18, 9, 3, 1, -7, -7, -3, -12, -5, -2, -15, -23, -28, -29,
-33, -33, -35, -20, -20, -2, 25, 31, 22, 23, 19, 4, 4, 7, 22, 29, 42, 48, 54,
35, 6, -24, -33, -35, -40, -28, -15, 4, -7, -16, -21, -23, -40, -46, -36, -30,
-4, 11, 35, 43, 41, 37, 33, 27, 17, 12, 4, 15, 25, 32, 34, 32, 23, -2, -19, -22,
-40, -36, -25, -18, -9, 1, 3, -1, -3, -21, -17, -22, -6, 2, 6, 14, 11, 5, 4, 10,
-5, -9, -19, -17, -14, -19, -13, -10, -13, -14, -19, -17, -11, -16, -19, -7, -3,
0, 10, 12, 8, 4, 9, 17, 18, 23, 21, 12, 9, 6, 4, 0, -2, -8, -7, -13, -9, 2, -2,
-8, -11, -1, 0, -1, 0, 11, 15, 20, 24, 22, 23, 15, 7, 6, 12, 14, 17, 17, 20, 13,
0, 2, -6, -12, -14, -12, -13, -5, -11, -11, -12, -26, -22, -24, -23, -19, -9,
-9, 2, -1, 0, 8, -4, -4, -3, -4, -7, -2, 2, -3, -11, -13, -19, -27, -23, -23,
-32, -21, -26, -21, -6, -8, -4, 6, 19, 30, 39, 22, 30, 34, 17, 14, 26, 38, 29,
27, 23, 18, -5, -27, -31, -29, -30, -26, -4, 1, -6, -13, -13, -8, -5, -11, -9,
14, 28, 29, 35, 47, 48, 39, 30, 26, 21, 9, 2, 5, 8, 8, 5, -2, -10, -23, -34,
-36, -39, -35, -29, -24, -13, -3, -3, -6, -8, -10, -8, -7, 7, 16, 15, 20, 27,
24, 13, 2, 2, -4, -15, -8, -8, -17, -11, -12, -24, -24, -25, -18, -21, -22, -11,
-1, -4, 2, 10, 8, 16, 12, 15, 10, 13, 13, 7, -1, 4, 4, -7, -4, -9, -10, -18,
-14, -15, -19, -16, -6, -5, -10, 5, 8, 5, 5, 23, 13, 9, 18, 20, 7, 1, 7, 6, 13,
5, 15, -3, -4, -9, -15, -22, -19, -10, -16, -10, -13, 4, -8, -1, 0, -5, -1, 2,
9, 15, 22, 22, 31, 25, 21, 16, 4, 2, -4, -13, -6, -6, -6, -9, -13, -12, -17,
-21, -25, -20, -17, -5, -8, 1, 11, 5, 10, 7, 14, 4, 10, 17, 13, 4, 15, 14, -2,
20, 16, 2, -6, 1, -10, -16, -15, -10, -16, -11, 6, 1, -5, -15, -16, -28, -29,
-25, 1, 2, 3, 5, 3, 5, -3, -6, -16, -6, -7, 3, 12, 19, 16, 9, 8, 3, 6, -3, -7,
2, 7, 12, 21, 23, 17, 13, 8, 1, -5, -3, -2, -5, 3, 11, 12, 15, 6, -4, -4, -15,
-10, 3, 5, 1, 9, 7, 0, -4, 2, 0, -11, -5, -1, -7, 2, 7, 2, 0, -3, 3, 0, -1, -8,
-5, -8, -1, -5, 0, 1, -8, -8, -18, -15, -16, -19, -23, -15, -17, -12, -17, -20,
-12, -20, -22, -8, -4, -5, 1, -1, 6, 9, 13, 13, 8, 11, 10, 3, 4, 5, -2, 5, 1, 3,
7, -2, -4, -7, -11, -15, -9, -1, 13, 12, 14, 16, 8, 11, 11, 17, 25, 31, 24, 26,
25, 21, 15, 13, 18, 5, 8, 2, -7, -13, -10, -12, -13, -11, -17, -13, -26, -26,
-21, -13, -12, -5, 13, 12, 5, -5, -3, -10, -10, -6, 3, 6, -4, -5, -20, -29, -33,
-34, -31, -18, -20, -19, -3, -2, -14, 9, 47, 38, 35, 46, 36, 11, 18, 14, 21, 33,
20, 26, 23, 5, -36, -62, -76, -63, -63, -58, -20, -5, -8, -24, -8, -3, -12, -18,
-5, 23, 45, 47, 58, 87, 78, 56, 47, 27, 13, -1, -22, -9, 8, 10, 2, 2, -13, -37,
-58, -59, -52, -50, -29, -15, 2, 19, 21, 14, 8, 12, 5, 8, 21, 37, 38, 39, 30,
16, 16, -4, -13, -13, -24, -37, -27, -25, -25, -31, -30, -30, -30, -23, -11, -9,
-12, 3, 14, 23, 24, 34, 34, 34, 30, 20, 17, 15, 3, -1, 4, 1, -4, -8, -28, -35,
-38, -37, -35, -32, -15, -17, -13, -8, 13, 11, 15, 14, 21, 24, 16, 19, 18, 27,
19, 18, 24, 21, 0, -13, -19, -31, -38, -38, -24, -13, -16, -14, -19, -19, -17,
-16, -11, 4, 11, 12, 24, 28, 32, 28, 34, 35, 34, 25, 9, 0, -1, -3, -6, -8, -6,
-5, -20, -31, -22, -30, -37, -22, -10, -5, 1, 13, 15, 12, 15, 24, 20, 23, 31,
26, 17, 14, 8, 1, -7, -8, -12, -20, -22, -30, -32, -32, -25, -21, -16, -23, -16,
-7, -9, 6, 11, 14, 14, 15, 16, 16, 8, -1, 7, 2, 4, -7, -8, -9, -20, -21, -31,
-21, -22, -19, -27, -8, -8, -15, -6, 1, 13, 5, 19, 19, 24, 22, 24, 21, 28, 34,
28, 30, 21, 20, 18, 5, 6, 13, 3, -6, 1, -6, -15, -9, -12, -10, -13, -10, -12, 1,
1, 0, 7, 3, 8, 15, 22, 12, 24, 12, 10, 14, 12, 2, -3, -1, -11, -6, -25, -22,
-28, -22, -33, -24, -22, -21, -19, -20, -7, -10, -7, -9, 11, 1, 7, 7, 14, 9, 5,
-2, -3, 3, -10, -4, -9, -4, -22, -11, -14, -12, -10, -8, -2, -3, 9, -4, 12, 10,
18, 9, 12, 16, 8, 13, 11, 14, 0, 11, 2, 1, -4, -12, -17, -12, -9, -9, -3, 6, 7,
-1, 3, 0, -6, -9, 8, 13, 24, 19, 24, 20, 13, 8, -3, 3, 3, 1, -3, 10, -1, -6, -3,
-6, -13, -13, -11, -13, -16, -9, -13, -13, -3, 0, -5, -5, -1, -10, -7, -17, -9,
-6, -1, -2, 2, 1, -6, -11, -7, 0, -6, 0, -1, 4, 6, 6, -1, 7, 8, 5, 2, -1, -2,
-5, 1, 0, 2, 4, 1, -4, -7, -5, -12, -9, -4, 8, 14, 12, 17, 11, 8, -2, -1, -1, 6,
8, 5, 12, 7, -2, -7, -5, -14, -23, -14, -13, -9, -6, 3, 6, 6, 12, 7, 5, -2, 6,
7, 12, 16, 16, 18, 14, 7, -2, -3, -7, -11, -6, -10, -5, -5, -4, -1, 3, 1, -4, 8,
2, 5, 8, 9, 7, 16, 21, 18, 17, 8, 8, 0, -4, -4, -1, -2, -4, -5, -11, -12, -15,
-18, -18, -12, -16, -13, -6, -11, -7, -6, -2, -4, 3, -2, 0, 3, 0, 7, 7, 10, 0,
8, 1, -2, -6, -7, -8, -11, -5, -14, -11, -13, -16, -15, -14, -12, -6, -9, -1, 0,
3, -2, 10, 15, 15, 18, 13, 20, 3, 19, -2, 11, 6, 5, 3, -1, 6, -14, 5, -18, -5,
-6, -6, -11, 3, 12, -2, 13, 10, 14, 7, 5, 7, 5, 9, 8, 8, 13, 2, 8, -12, -4, -12,
-17, -12, -10, 1, -21, 3, -15, -2, -15, -4, 1, -8, 8, -6, 19, -9, 11, 3, 8, 9,
0, 6, -13, -1, -17, -4, -17, -9, -10, -17, -16, -19, -9, -25, -10, -7, -9, -2,
2, 3, 5, 10, 5, 16, 20, 17, 15, 11, 14, 7, 9, 6, 12, 1, -3, -3, -12, -6, -19,
-10, -12, -1, -10, 1, 1, 2, 3, 4, 17, 5, 24, 13, 16, 14, 13, 15, 12, 10, 6, 5,
-5, -4, -8, -13, -8, -13, -12, -9, -10, -10, -13, -5, -12, 1, -2, 5, 9, 6, 11,
2, 11, 2, 6, 5, 2, 1, -1, -2, -10, -3, -14, -8, -12, -13, -9, -16, -11, -12, -8,
-8, -4, -3, -3, 2, 0, 3, 10, 8, 8, 12, 11, 8, 10, 6, 7, 4, 1, 3, -5, -4, -8,
-11, -11, -13, -7, -9, -7, -8, -6, -4, -6, -1, -2, 7, 4, 10, 8, 11, 11, 7, 8, 2,
9, -4, 3, 0, -3, -3, -6, -8, -12, -9, -14, -9, -9, -3, -4, 0, 1, -2, 4, 1, 3, 8,
6, 10, 10, 7, 7, 4, 1, 0, 0, -4, -2, -4, -5, -4, -5, -5, -4, -2, -5, -3, 0, 1,
2, 4, 10, 6, 12, 9, 4, 7, 2, 0, 1, 1, -2, 0, -6, -5, -6, -10, -7, -11, -9, -10,
-6, -9, -6, -4, -3, -1, 1, 5, 5, 6, 4, 6, 5, 4, 4, 5, 4, -1, 0, -5, -10, -9,
-13, -10, -12, -12, -13, -10, -9, -7, -4, -2, 4, -1, 5, 4, 7, 5, 7, 8, 9, 12, 6,
9, 3, 0, -2, -3, -4, -5, -5, -6, -6, -8, -5, -5, -6, -3, -3, 1, 1, 3, 8, 7, 9,
9, 9, 6, 6, 2, 2, 3, 0, 0, 0, -4, -5, -7, -9, -7, -7, -8, -6, -5, -6, -4, -5,
-2, -2, -2, -1, 1, 2, 2, 1, 0, 0, 0, 0, -1, -1, -1, -4, -7, -6, -6, -6, -7, -7,
-6, -7, -7, -7, -6, -3, -5, -2, -1, 1, 3, 4, 5, 7, 9, 6, 10, 6, 9, 6, 4, 6, 3,
3, 0, 2, -3, -2, -4, -4, -3, -5, 0, -2, -1, 0, -1, -1, 1, 3, 3, 6, 5, 5, 4, 2,
6, 1, 2, 2, 1, 1, -2, -2, -5, -6, -9, -5, -6, -4, -4, -2, -2, -3, -1, -2, -2, 0,
-2, -1, 2, 0, 0, 0, 1, -2, -1, -3, -2, -3, -3, -1, -1, 1, 0, 0, -1, 0, -3, 0,
-1, 1, 2, 3, 3, 3, 3, 2, 2, -1, 3, 0, 2, 1, 2, 2, -1, 1, 0, 0, 0, 2, 0, 2, 1, 1,
2, 2, 1, 1, 0, 1, 0, 2, 2, 3, 2, 2, 1, 1, 1, -2, 0, 0, -1, 0, -1, -2, -1, -2,
-2, -2, -1, -1, -1, -1, 2, 0, 0, 2, 0, 1, -1, 1, -1, 1, 0, 0, 1, -1, 0, -1, 0,
-1, 1, 0, 0, 0, -2, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, -2, -2, -2,
-3, -2, -1, -2, 0, -1, -3, -1, -2, -2, 0, -2, -2, -1, -2, -2, -1, -1, -1, -1,
-1, -1, -2, -1, -2, -1, -1, -1, -1, -1, 0, -3, -2, -3, -1, -2, -1, 0, -1, 0, -1,
0, 0, 2, 1, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 1,
1, 2, 3, 3, 3, 2, 2, 1, 1, 1, 0, -1, 0, -2, -2, -3, -3, -3, -3, -2, -3, -3, -4,
-2, -3, -2, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -2, -3, -3, -4, -3, -5, -5,
-5, -5, -5, -4, -3, -2, -2, -2, -1, -1, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 0, 0, 0,
0, 0, 0, -1, -1, -1, -2, 0, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2,
2, 2, 1, 1, 0, 0, -1, 0, -2, -1, -2, -1, -2, -2, -1, -2, 0, -1, 1, 0, 1, 1, 1,
0, -1, -1, -1, 0, -1, -1, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -1, -2, -1,
-1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -3, -2, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -2, -1, -1, -1, -1, -2, -1, -1, -1, 0, 0, -1, 0, 0, 0, 1, 1, 1, 1, 0, 1,
0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2,
2, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -3, -2, -2, -1, -1, -1, -1, -1, -1, 0,
0, 0, 1, 0, 1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1,
-2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-2, -1, -1, -2, -1, -1, -1, -1, -2, -1, -2, -1, -1, -1, -1, 0, -1, 0, 0, -1, 0,
0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0,
1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -2, -2, -2, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0,
-1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, 0, 0, -1, 0, };

#endif /* FARTFIVE_H_ */
