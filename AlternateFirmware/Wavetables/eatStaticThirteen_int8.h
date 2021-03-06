#ifndef EATSTATICTHIRTEEN_H_
#define EATSTATICTHIRTEEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EATSTATICTHIRTEEN_NUM_CELLS 8350
#define EATSTATICTHIRTEEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EATSTATICTHIRTEEN_DATA []
= {-20, 29, 127, 35, -78, -124, -74, 115, 115, 101, -36, -37, 2, -2, 86, -19,
38, 30, -3, 36, -121, -61, 35, 54, 101, -39, -20, -24, -30, 66, 29, 10, -102,
-67, -14, -40, 28, -48, -26, -46, -66, 84, 1, 12, 23, 7, 57, -89, -83, -34, 34,
117, 26, -46, -125, -63, 88, 107, 101, -48, -17, 26, -49, -14, -81, 25, 97, 51,
-9, -127, -97, 20, 110, 112, -27, -66, -61, -11, 42, -24, 30, 4, 46, 29, -87,
-40, -29, 75, 105, 8, -13, -77, 1, 61, 46, 54, -27, 2, -4, 23, 64, 1, 13, -32,
-12, 21, -35, 12, -13, 20, 26, -49, -43, -82, 10, 88, 56, -24, -128, -92, -18,
41, 50, -39, -31, -43, -22, -1, -63, 8, 66, 116, 32, -112, -105, -46, 86, 109,
21, -34, -89, -11, 43, 23, 29, 10, 78, 41, -41, -62, -56, 49, 63, 40, -17, -92,
-36, 10, 62, 42, -25, -6, -25, 6, 16, 2, 12, -32, -3, 2, -12, -3, -8, 47, 37, 9,
-25, -62, 10, 63, 96, 36, -77, -71, -30, 59, 76, 11, -10, -30, 0, -18, -56, -28,
21, 86, 38, -71, -120, -90, 37, 91, 49, -40, -101, -45, -15, -2, -13, -18, 30,
20, -14, -64, -70, 9, 71, 84, 3, -64, -49, -5, 54, 41, 16, -5, -23, 17, 25, 25,
21, 11, 33, 14, -2, -8, -4, 23, 29, 23, -27, -65, -35, 29, 82, 38, -36, -69,
-53, 19, 45, 25, -13, -36, -10, -11, -39, -46, 6, 78, 69, -7, -90, -85, 4, 82,
90, 4, -63, -51, -10, 17, -2, -5, 25, 36, 12, -46, -73, -29, 43, 73, 21, -54,
-83, -40, 18, 31, 10, -27, -34, -17, -9, -4, -9, -6, 8, 6, -8, -24, -20, 11, 42,
39, 0, -38, -35, 19, 68, 65, 15, -39, -37, 15, 56, 51, 19, 4, 15, 14, -13, -29,
-6, 48, 74, 23, -62, -98, -43, 51, 76, 22, -44, -63, -30, -5, -5, -17, -7, 17,
11, -34, -82, -61, 14, 65, 47, -26, -66, -47, 4, 44, 30, -2, -22, -14, 3, -1,
-5, 1, 18, 22, 2, -17, -29, -4, 29, 36, 11, -42, -53, -18, 26, 47, 9, -35, -52,
-25, 19, 25, 9, -9, -1, 8, -13, -30, -25, 28, 72, 51, -12, -70, -43, 34, 84, 69,
0, -31, -16, 14, 24, 7, 15, 35, 42, 9, -49, -52, -6, 55, 63, 0, -55, -70, -23,
22, 19, -4, -34, -29, -20, -23, -22, -27, -5, 5, -5, -28, -53, -29, 6, 32, 19,
-26, -42, -32, 15, 47, 30, -4, -36, -18, 13, 24, 22, 4, 13, 16, 3, -15, -31, 9,
52, 58, 10, -61, -61, -11, 49, 56, 5, -31, -40, -9, 8, -3, -1, 12, 36, 17, -33,
-53, -29, 40, 67, 36, -20, -55, -19, 24, 46, 30, -3, -1, 1, 6, -1, -9, 13, 23,
24, -5, -37, -29, -5, 32, 26, -13, -43, -52, -12, 15, 16, -10, -44, -38, -24,
-5, -4, -18, -7, -5, -6, -28, -47, -19, 20, 51, 23, -35, -55, -30, 36, 59, 34,
-5, -26, 0, 13, 14, 9, 16, 45, 34, 0, -37, -35, 23, 60, 55, 0, -48, -35, -1, 33,
23, -2, -11, -13, -2, -13, -18, -6, 10, 26, -1, -30, -39, -19, 25, 31, 12, -25,
-41, -12, 15, 33, 14, -13, -16, -11, 8, 5, 0, 5, 8, 13, -12, -34, -27, 4, 42,
28, -17, -56, -52, -1, 29, 25, -13, -38, -27, -16, -6, -16, -11, 14, 18, 1, -42,
-51, -11, 36, 56, 16, -29, -38, -9, 33, 35, 22, 6, 5, 16, 6, 2, 5, 24, 44, 28,
1, -25, -14, 23, 40, 33, -8, -31, -22, 1, 24, 11, -8, -22, -21, -8, -12, -12,
-12, -2, 5, -15, -35, -43, -16, 23, 27, 2, -43, -50, -16, 20, 33, 7, -16, -18,
-7, 3, -6, -2, 14, 28, 20, -20, -41, -26, 20, 49, 27, -16, -44, -29, 5, 20, 12,
-8, -11, -6, -9, -17, -21, -1, 21, 21, -2, -32, -30, -1, 31, 36, 8, -17, -19, 3,
27, 29, 17, 4, 4, 11, 12, 9, 9, 21, 28, 18, -6, -23, -10, 21, 39, 21, -19, -42,
-28, 4, 20, 7, -18, -28, -22, -17, -21, -24, -12, 6, 6, -21, -50, -49, -11, 26,
26, -7, -40, -38, -9, 16, 16, 4, -3, 1, 3, -5, -11, 1, 24, 34, 17, -14, -27, -8,
24, 36, 19, -11, -24, -11, 9, 17, 8, -4, -7, -4, -4, -9, -9, 2, 15, 13, -7, -27,
-23, 5, 31, 30, 1, -25, -22, 4, 27, 27, 10, -2, 0, 5, 3, -2, 5, 22, 29, 11, -21,
-35, -13, 22, 35, 11, -25, -39, -23, 0, 6, -5, -15, -15, -14, -21, -31, -27, -6,
11, 5, -22, -43, -34, -4, 20, 15, -8, -25, -20, 0, 14, 13, 5, 3, 6, 7, 2, 0, 9,
25, 29, 14, -8, -16, 3, 29, 36, 17, -12, -22, -6, 15, 21, 9, -4, -7, -4, -7,
-13, -10, 5, 18, 11, -16, -37, -27, 5, 29, 21, -9, -29, -22, 0, 13, 10, 1, 0, 3,
-1, -11, -14, 1, 21, 24, 2, -24, -29, -8, 17, 22, 2, -20, -25, -14, -1, 0, -6,
-10, -9, -10, -16, -22, -17, -1, 9, 2, -19, -31, -21, 5, 22, 15, -8, -21, -13,
7, 20, 17, 8, 6, 9, 9, 3, 3, 15, 31, 32, 12, -12, -15, 8, 33, 35, 13, -12, -17,
-3, 10, 10, 2, -2, -2, -5, -16, -24, -16, 3, 13, 1, -25, -38, -26, 0, 13, 4,
-16, -25, -18, -5, 1, 0, -3, -1, 0, -5, -11, -10, 3, 17, 17, -1, -19, -19, 0,
19, 20, 2, -17, -18, -6, 6, 7, -1, -5, -5, -6, -12, -17, -9, 8, 15, 4, -19, -29,
-14, 12, 26, 15, -7, -16, -7, 9, 15, 13, 11, 13, 13, 6, -3, 0, 17, 32, 29, 7,
-13, -11, 8, 25, 23, 5, -11, -13, -4, 1, -1, -5, -5, -5, -11, -21, -25, -17, -2,
3, -9, -28, -35, -22, -2, 6, -3, -19, -25, -16, -3, 2, 0, -2, 0, 1, -4, -9, -5,
10, 23, 19, 0, -17, -12, 9, 25, 22, 4, -11, -10, 0, 7, 6, 3, 4, 4, -3, -13, -16,
-4, 13, 17, 3, -18, -23, -8, 11, 19, 8, -5, -9, -3, 5, 8, 7, 9, 12, 9, 1, -6,
-1, 14, 23, 17, -1, -14, -10, 6, 17, 12, -3, -15, -14, -7, -2, -4, -8, -9, -9,
-15, -23, -24, -14, -1, 2, -12, -29, -32, -17, 2, 8, -3, -16, -19, -11, -1, 2,
2, 5, 8, 6, -2, -8, 0, 17, 27, 20, 2, -10, -4, 14, 24, 20, 6, -3, -1, 4, 6, 5,
5, 7, 5, -3, -12, -13, -2, 11, 11, -3, -18, -20, -7, 7, 10, 0, -10, -12, -6, 0,
2, 1, 3, 4, 1, -6, -10, -4, 10, 17, 9, -8, -18, -11, 5, 14, 8, -6, -14, -13, -7,
-4, -5, -5, -3, -5, -13, -22, -21, -8, 5, 5, -10, -24, -24, -10, 5, 7, -1, -9,
-10, -4, 1, 3, 5, 10, 12, 8, 0, -3, 5, 20, 26, 18, 3, -4, 3, 16, 22, 17, 6, 0,
1, 4, 5, 4, 4, 4, 1, -7, -15, -14, -3, 6, 4, -10, -23, -23, -10, 2, 2, -7, -16,
-16, -11, -6, -5, -4, 0, 2, -4, -12, -14, -4, 10, 15, 6, -9, -15, -7, 6, 12, 7,
-2, -7, -6, -3, -3, -3, 1, 3, 0, -9, -16, -13, -2, 7, 5, -7, -17, -15, -4, 6, 7,
0, -5, -4, 0, 3, 4, 7, 11, 12, 8, 0, 0, 8, 20, 23, 14, 1, -3, 4, 15, 19, 12, 3,
-2, -2, 0, 0, -1, 1, 1, -3, -13, -20, -17, -6, 2, -3, -16, -26, -24, -13, -4,
-4, -11, -16, -15, -12, -10, -8, -4, 1, 2, -4, -10, -10, 0, 11, 14, 6, -5, -7,
0, 10, 13, 8, 2, -1, 0, 1, 1, 2, 5, 6, 2, -6, -11, -7, 3, 9, 5, -6, -14, -11, 0,
7, 6, 0, -4, -4, -1, 1, 3, 7, 10, 10, 4, -3, -3, 7, 17, 18, 8, -3, -6, 1, 9, 11,
6, -1, -4, -5, -5, -6, -5, -2, -1, -7, -16, -21, -17, -7, -2, -7, -17, -23, -20,
-11, -5, -6, -10, -12, -11, -9, -8, -5, 0, 4, 4, -1, -6, -4, 5, 15, 15, 8, -1,
-2, 6, 13, 15, 11, 6, 4, 3, 4, 4, 5, 9, 8, 3, -6, -9, -4, 5, 9, 3, -7, -13, -10,
-2, 3, 2, -3, -5, -6, -5, -5, -3, 3, 6, 4, -3, -8, -7, 2, 10, 10, 2, -6, -7, -2,
4, 5, 2, -3, -5, -6, -7, -7, -4, -1, -2, -7, -15, -17, -12, -4, 0, -6, -14, -18,
-14, -7, -2, -3, -6, -7, -7, -6, -4, -1, 4, 8, 7, 1, -3, 0, 9, 17, 16, 9, 2, 2,
8, 14, 15, 12, 8, 6, 4, 3, 3, 6, 8, 7, 1, -7, -10, -5, 2, 4, -2, -11, -15, -12,
-6, -3, -5, -8, -9, -10, -10, -10, -7, -2, 0, -2, -7, -11, -8, 0, 6, 5, -2, -7,
-6, -1, 4, 5, 2, 0, -2, -3, -4, -4, 0, 3, 2, -4, -11, -12, -6, 1, 3, -2, -10,
-12, -9, -3, 1, 0, -2, -3, -3, -3, -2, 2, 7, 10, 7, 2, -1, 3, 10, 16, 15, 8, 3,
4, 8, 12, 12, 9, 7, 4, 2, 0, 0, 3, 5, 3, -4, -11, -12, -8, -2, -2, -8, -15, -17,
-15, -10, -8, -9, -11, -12, -13, -13, -12, -8, -3, -1, -4, -9, -11, -6, 2, 7, 5,
0, -4, -2, 2, 6, 7, 6, 4, 2, 0, -1, 1, 5, 7, 5, -1, -7, -7, -1, 4, 5, 0, -6, -8,
-5, -1, 1, 1, 0, -1, -2, -3, -2, 2, 6, 8, 5, 0, -2, 2, 8, 12, 10, 4, 1, 1, 5, 7,
7, 5, 3, 0, -2, -4, -3, 0, 1, -2, -8, -13, -14, -9, -5, -5, -10, -15, -17, -15,
-11, -9, -9, -10, -11, -12, -12, -10, -6, -1, 1, -2, -6, -7, -2, 5, 9, 7, 3, 1,
2, 6, 9, 9, 9, 8, 5, 3, 3, 4, 7, 9, 6, 1, -4, -3, 1, 4, 4, -1, -5, -7, -5, -2,
-1, -1, -2, -3, -5, -6, -5, -1, 3, 3, 0, -5, -5, -1, 4, 6, 4, 0, -3, -2, 0, 3,
3, 2, 0, -2, -5, -6, -4, -1, 0, -3, -8, -12, -12, -8, -4, -4, -8, -12, -13, -11,
-8, -6, -6, -6, -7, -8, -8, -6, -2, 2, 3, 1, -2, -2, 2, 8, 10, 9, 6, 4, 5, 8,
10, 11, 10, 9, 7, 4, 4, 5, 8, 9, 5, 0, -4, -3, 0, 2, 1, -3, -7, -9, -8, -6, -5,
-5, -5, -8, -10, -10, -9, -5, -2, -2, -5, -9, -9, -5, 0, 2, 1, -3, -4, -4, -1,
1, 2, 2, 0, -2, -4, -4, -2, 1, 2, -1, -5, -8, -7, -4, -1, -2, -5, -7, -8, -7,
-5, -3, -2, -2, -4, -5, -5, -3, 1, 4, 5, 2, 0, 0, 4, 9, 10, 9, 7, 5, 6, 8, 9,
10, 10, 8, 5, 3, 2, 4, 6, 5, 2, -3, -6, -6, -3, -2, -3, -7, -10, -12, -11, -10,
-9, -8, -9, -11, -13, -13, -11, -7, -5, -5, -7, -10, -9, -5, -1, 1, 0, -2, -2,
-2, 1, 3, 4, 5, 3, 1, 0, 0, 3, 5, 5, 2, -2, -3, -2, 0, 2, 1, -2, -4, -5, -4, -2,
-1, 0, -1, -2, -4, -4, -1, 2, 4, 4, 1, -1, 0, 3, 7, 8, 7, 5, 3, 3, 5, 6, 7, 6,
4, 2, -1, -1, 1, 2, 1, -2, -6, -8, -8, -6, -5, -6, -9, -12, -13, -12, -11, -10,
-9, -9, -11, -12, -12, -10, -6, -4, -4, -6, -7, -6, -2, 1, 3, 3, 2, 1, 2, 4, 6,
8, 8, 6, 4, 3, 4, 6, 7, 7, 5, 1, 0, 0, 2, 3, 2, 0, -3, -4, -4, -2, -1, 0, -2,
-3, -5, -5, -3, -1, 1, 0, -2, -4, -3, -1, 2, 3, 2, 1, -1, -1, 1, 2, 3, 3, 1, -2,
-3, -3, -1, 0, -1, -4, -7, -8, -8, -6, -5, -6, -8, -10, -11, -10, -9, -7, -6,
-7, -8, -9, -9, -6, -3, -1, -1, -3, -3, -2, 1, 4, 6, 5, 4, 4, 4, 6, 8, 9, 9, 8,
6, 5, 5, 7, 8, 7, 5, 2, 0, 0, 1, 2, 1, -1, -4, -5, -5, -5, -4, -4, -5, -7, -8,
-8, -6, -5, -4, -4, -6, -7, -6, -4, -2, -1, -2, -2, -3, -3, -1, 0, 1, 1, 0, -2,
-2, -2, -1, 0, 0, -2, -4, -5, -4, -3, -2, -3, -4, -6, -7, -6, -5, -4, -4, -4,
-5, -5, -4, -3, -1, 0, 1, 0, 0, 1, 3, 5, 6, 6, 5, 5, 6, 7, 8, 8, 8, 7, 6, 5, 5,
5, 5, 4, 2, 1, -1, -1, -1, -2, -3, -5, -6, -8, -8, -8, -8, -8, -9, -10, -10,
-10, -9, -8, -8, -8, -8, -8, -7, -6, -4, -3, -3, -2, -2, -1, 0, 1, 1, 2, 2, 1,
1, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 4, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, -1,
-2, -3, -4, -4, -6, -6, -8, -7, -10, -8, -11, -9, -11, -9, -11, -9, -11, -8, -9,
-7, -8, -6, -5, -5, -2, -5, 1, -5, 6, -8, 18, -64, 12, 86, -34, 6, -13, -18, 71,
7, -70, 36, 24, -4, 23, -44, -10, 79, -26, -55, 44, -4, -8, 25, -44, -10, 60,
-31, -33, 26, -14, 9, 13, -49, 14, 41, -39, -3, 21, -24, 24, 9, -44, 25, 30,
-35, 10, 9, -17, 26, -3, -35, 34, -16, -124, -119, -123, -119, -123, -120, -112,
-25, -38, 44, 67, -120, -47, 12, -117, -102, 1, -70, -12, 39, 42, 109, 118, 118,
119, 66, 85, 89, -3, 56, 123, 66, 7, 17, -39, -128, -91, 3, -4, 54, 127, 78, 24,
-16, -100, -121, -116, -79, -29, -104, -58, -15, -115, -119, -22, -52, -32, 66,
29, 33, 63, 39, 16, 6, 28, 5, -82, -52, 36, 17, 55, 120, 118, 109, 106, 82, 7,
29, 102, 72, 61, 114, 59, -39, -62, -65, -64, -51, 19, 91, 50, 39, 76, -19, -71,
-19, -58, -91, -40, -42, -57, -29, -1, -3, -34, -15, 21, -16, -1, 90, 107, 92,
114, 85, 13, -7, -3, -29, 7, 104, 121, 105, 118, 115, 59, 24, 39, 60, 56, 64,
81, 24, -14, 5, -48, -94, -40, -33, -64, -37, -3, 0, -8, -7, -16, -71, -107,
-98, -118, -115, -43, -13, -31, -14, -21, -71, -81, -37, -10, 15, 79, 106, 67,
32, 11, -24, -45, -17, 27, 40, 62, 97, 69, 33, 58, 45, 1, 17, 33, 11, 2, 12, 9,
-16, -34, -45, -84, -102, -67, -56, -53, -1, 25, -16, -47, -62, -100, -123, -98,
-62, -46, -17, 4, -21, -49, -45, -43, -46, -12, 38, 48, 45, 62, 46, 6, 7, 7,
-17, -9, 21, 31, 40, 63, 73, 51, 26, 17, -11, -33, -7, 14, 8, 18, 22, -19, -63,
-78, -85, -83, -48, -4, 4, 5, 8, -25, -66, -70, -61, -63, -48, -15, -2, -10, -2,
2, -15, -12, 4, 3, 9, 41, 60, 59, 65, 68, 42, 11, 6, 2, 1, 33, 69, 76, 76, 73,
42, 3, -8, -3, -3, 15, 42, 38, 14, -1, -25, -56, -60, -41, -28, -18, 5, 13, -1,
-9, -14, -37, -50, -41, -37, -35, -13, 12, 13, 10, 12, 0, -18, -14, 2, 15, 41,
69, 69, 51, 34, 12, -14, -15, 8, 25, 42, 63, 63, 41, 24, 12, -6, -11, 3, 11, 9,
15, 16, -2, -20, -26, -39, -51, -42, -27, -20, -6, 11, 6, -11, -24, -40, -57,
-53, -31, -14, 3, 22, 21, 2, -13, -18, -22, -14, 14, 36, 44, 50, 46, 23, 4, -1,
-6, -5, 12, 28, 32, 33, 36, 23, 5, -4, -12, -22, -18, -7, -3, -1, 2, -9, -33,
-49, -56, -62, -55, -30, -11, -5, -3, -11, -34, -52, -55, -52, -42, -18, 2, 7,
6, 3, -8, -18, -13, -4, 5, 21, 38, 42, 39, 37, 27, 11, 5, 5, 6, 15, 32, 41, 40,
37, 25, 3, -14, -18, -17, -10, 6, 14, 7, -4, -19, -39, -53, -50, -40, -30, -15,
-2, -5, -15, -23, -33, -42, -39, -29, -19, -7, 7, 13, 10, 6, 2, -5, -6, 2, 12,
24, 39, 46, 43, 34, 21, 7, 0, 3, 13, 25, 36, 39, 31, 16, -1, -15, -21, -20, -11,
0, 6, 6, -1, -13, -26, -35, -39, -35, -27, -17, -8, -3, -2, -7, -14, -21, -23,
-20, -12, 2, 16, 26, 30, 27, 17, 6, 1, 3, 13, 26, 39, 46, 44, 35, 21, 9, 1, 2,
8, 17, 23, 24, 18, 8, -5, -17, -25, -27, -24, -18, -11, -8, -9, -15, -24, -33,
-40, -42, -37, -27, -15, -6, -1, -4, -10, -19, -25, -23, -15, -2, 13, 23, 26,
23, 15, 6, 1, 2, 9, 19, 28, 34, 34, 28, 18, 9, 2, -1, 0, 6, 11, 15, 15, 10, 1,
-10, -20, -25, -25, -21, -12, -5, -2, -5, -13, -23, -31, -34, -31, -22, -11, -1,
3, 2, -5, -13, -18, -18, -13, -4, 7, 15, 18, 17, 11, 4, -1, -3, -1, 4, 11, 17,
20, 19, 13, 5, -4, -10, -11, -8, -1, 6, 10, 8, 1, -9, -19, -24, -24, -19, -11,
-3, 1, 0, -6, -14, -20, -24, -21, -14, -6, 2, 7, 8, 5, -1, -6, -8, -7, -2, 6,
14, 19, 21, 18, 13, 6, 1, 0, 3, 9, 16, 21, 22, 17, 9, 1, -6, -8, -6, -1, 7, 10,
9, 4, -5, -13, -19, -21, -18, -12, -6, -3, -2, -6, -11, -17, -21, -22, -20, -14,
-7, -1, 2, 1, -2, -7, -12, -13, -10, -3, 6, 12, 16, 15, 11, 5, 0, -2, 1, 8, 15,
20, 22, 20, 13, 7, 1, -2, -1, 3, 8, 12, 13, 10, 4, -3, -9, -13, -13, -10, -6,
-2, 0, -1, -5, -11, -17, -20, -20, -16, -9, -3, 1, 1, -2, -7, -11, -14, -12, -7,
0, 7, 11, 12, 8, 3, -1, -3, -2, 2, 8, 12, 15, 14, 10, 5, -1, -4, -6, -4, -1, 2,
5, 4, 0, -5, -12, -16, -18, -17, -12, -8, -4, -3, -6, -11, -16, -19, -19, -15,
-9, -3, 2, 4, 3, 0, -3, -5, -4, 0, 6, 12, 16, 18, 17, 13, 9, 6, 5, 6, 9, 13, 17,
17, 14, 9, 3, -3, -6, -6, -5, -2, 0, 0, -3, -8, -14, -20, -22, -22, -18, -14,
-10, -9, -10, -13, -16, -19, -20, -17, -12, -7, -2, 2, 2, 1, -1, -3, -3, -1, 3,
9, 13, 16, 16, 14, 10, 6, 4, 4, 6, 10, 12, 14, 13, 8, 3, -2, -6, -7, -5, -2, 0,
1, -1, -4, -9, -13, -15, -15, -13, -9, -5, -3, -2, -3, -6, -8, -10, -9, -6, -1,
3, 7, 8, 7, 5, 2, 0, 0, 2, 6, 9, 12, 12, 10, 6, 1, -2, -3, -3, 0, 2, 3, 3, 0,
-4, -8, -12, -13, -12, -10, -7, -5, -5, -6, -9, -12, -14, -14, -12, -9, -5, -1,
1, 1, -1, -3, -4, -4, -3, 1, 5, 9, 11, 11, 8, 5, 3, 2, 3, 6, 9, 11, 11, 10, 7,
4, 0, -2, -2, -1, 1, 3, 3, 2, -1, -5, -8, -10, -10, -9, -6, -4, -3, -3, -5, -8,
-11, -12, -12, -9, -6, -3, -1, -1, -2, -5, -7, -8, -7, -5, -2, 1, 3, 3, 2, 0,
-3, -4, -4, -2, 1, 3, 5, 5, 3, 1, -1, -3, -3, -2, 0, 3, 4, 4, 3, 0, -2, -4, -4,
-3, -1, 2, 3, 3, 2, 0, -3, -4, -5, -4, -2, 0, 2, 2, 1, -1, -3, -5, -5, -4, -2,
0, 2, 2, 1, -1, -3, -4, -5, -4, -2, 0, 2, 3, 2, 0, -2, -4, -5, -4, -2, 0, 1, 2,
1, -1, -3, -5, -6, -6, -5, -3, -1, -1, -1, -3, -5, -7, -8, -8, -6, -4, -2, -1,
-1, -2, -4, -5, -6, -5, -3, 0, 2, 4, 4, 4, 2, 1, 1, 1, 3, 5, 7, 8, 9, 7, 5, 4,
2, 2, 3, 4, 5, 6, 5, 3, 0, -3, -5, -5, -5, -5, -4, -3, -4, -6, -8, -10, -11,
-12, -11, -10, -8, -6, -6, -6, -7, -8, -9, -8, -7, -4, -2, 0, 2, 2, 1, 0, 0, 0,
1, 3, 5, 6, 7, 6, 5, 3, 1, 1, 1, 2, 3, 3, 3, 2, 0, -2, -4, -5, -5, -5, -4, -3,
-3, -3, -4, -6, -7, -7, -6, -5, -3, -1, 0, 0, 0, -1, -1, -2, -1, 1, 3, 5, 6, 5,
5, 3, 2, 1, 1, 2, 3, 4, 4, 3, 1, -1, -3, -5, -6, -6, -5, -5, -4, -5, -7, -8,
-10, -11, -11, -10, -9, -7, -6, -6, -6, -7, -7, -7, -6, -4, -2, 0, 1, 2, 2, 2,
2, 2, 2, 4, 5, 7, 7, 8, 7, 6, 5, 3, 3, 3, 3, 4, 4, 4, 2, 0, -1, -3, -4, -4, -4,
-3, -3, -3, -4, -5, -6, -7, -7, -7, -6, -5, -3, -3, -3, -3, -4, -5, -4, -4, -2,
-1, 0, 1, 1, 0, -1, -2, -2, -1, -1, 0, 1, 1, 0, -1, -2, -3, -3, -3, -3, -2, -2,
-2, -2, -3, -4, -5, -5, -5, -4, -3, -2, -1, -1, -1, -2, -2, -2, -1, 0, 1, 2, 3,
3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -3,
-4, -5, -5, -5, -5, -5, -4, -4, -4, -5, -5, -5, -5, -4, -4, -3, -3, -2, -2, -2,
-2, -2, -2, -1, -1, 0, -1, 0, -1, 0, -1, -1, -2, -1, -2, -1, -2, -1, -2, -2, -2,
-3, -2, -3, -1, -3, -1, -3, 0, -3, 1, -2, 1, -2, 2, -1, 2, 0, 2, 1, 2, 3, 1, 4,
0, 5, -1, 7, -4, 9, -8, 13, -16, -5, -103, -69, -10, -41, -19, -105, -119, -90,
-43, -117, 42, 41, -25, 57, 104, 40, 53, 55, -25, 61, 12, -9, 6, -19, -82, 30,
0, -15, 57, -19, -81, -41, -52, -70, 63, 29, 13, 25, -15, -36, 19, -27, -48, 29,
11, 61, 105, 69, 48, 62, -11, 17, 81, 69, 109, 102, 18, 0, 21, -34, 9, 35, -20,
-1, 8, -32, -1, 14, -35, 6, 25, 8, 49, 41, -6, 13, -7, -39, 19, 29, 4, 24, -23,
-70, -30, -32, -42, 13, 6, -16, 21, -13, -42, -11, -28, -39, 10, 0, -10, 9, -37,
-62, -43, -54, -41, 9, -12, -19, -9, -47, -43, -12, -29, -21, 13, -12, -7, 0,
-40, -47, -28, -41, -20, 14, 0, 5, -1, -31, -22, 8, 13, 42, 53, 28, 29, 20, 1,
11, 19, 5, 22, 23, 6, 9, -5, -28, -20, -8, -5, 25, 30, 15, 8, -7, -16, 5, 21,
28, 38, 26, 14, 12, 4, 1, 16, 19, 26, 39, 32, 26, 20, 4, -2, 11, 17, 26, 30, 11,
-10, -22, -33, -29, -15, -11, -8, -11, -20, -26, -27, -28, -19, -7, 0, 11, 12,
3, -6, -15, -22, -12, 1, 9, 11, 1, -16, -26, -27, -23, -11, -1, 1, -2, -8, -16,
-22, -23, -22, -17, -9, -3, -4, -11, -22, -32, -32, -23, -9, 4, 8, 2, -6, -14,
-14, -7, 3, 10, 15, 13, 5, 0, -7, -11, -8, -3, 4, 13, 14, 7, 0, -7, -8, 3, 14,
23, 28, 21, 10, 4, 0, 2, 11, 15, 17, 18, 11, 4, 1, -4, -2, 6, 12, 19, 22, 13, 3,
-2, -6, -1, 10, 14, 15, 11, 0, -8, -9, -9, -2, 5, 6, 8, 6, -1, -6, -9, -10, -4,
3, 7, 7, 0, -11, -19, -21, -17, -9, -3, -2, -7, -14, -20, -23, -20, -15, -10,
-6, -5, -8, -13, -19, -23, -22, -17, -10, -4, -4, -8, -15, -20, -20, -14, -5, 3,
6, 4, -1, -6, -8, -6, -1, 4, 8, 9, 7, 2, -3, -7, -6, 0, 7, 12, 13, 9, 3, -2, -3,
2, 8, 13, 15, 12, 7, 1, -2, -1, 2, 6, 11, 13, 11, 7, 2, -1, 0, 5, 11, 16, 16,
11, 5, -1, -3, 0, 4, 8, 9, 7, 2, -3, -7, -7, -5, -2, 2, 3, 1, -3, -9, -13, -14,
-10, -5, -2, -2, -7, -12, -17, -18, -15, -10, -6, -3, -4, -7, -10, -12, -12,
-10, -5, -1, 1, 0, -4, -8, -11, -11, -7, -2, 2, 3, 0, -4, -8, -9, -6, -2, 2, 4,
3, 0, -4, -7, -8, -6, -3, 1, 3, 2, -1, -5, -7, -7, -3, 2, 6, 7, 5, 1, -2, -3,
-1, 3, 6, 8, 8, 6, 2, -1, -1, 0, 3, 7, 9, 8, 5, 1, -2, -2, 0, 4, 6, 7, 4, 0, -4,
-6, -5, -2, 1, 2, 2, 0, -3, -5, -6, -5, -2, 2, 4, 3, 0, -3, -6, -6, -4, 0, 3, 3,
1, -2, -5, -6, -5, -3, 0, 2, 2, 0, -3, -6, -8, -7, -5, -2, -1, -2, -5, -8, -11,
-11, -9, -6, -4, -3, -4, -7, -9, -10, -9, -7, -4, -2, -1, -3, -5, -7, -8, -6,
-4, 0, 2, 2, 1, -2, -4, -4, -2, 1, 4, 5, 4, 2, -1, -2, -2, 0, 2, 4, 4, 3, 1, -2,
-3, -2, 0, 3, 5, 5, 3, 0, -1, -2, 0, 2, 4, 5, 5, 3, 1, -1, -1, 1, 3, 5, 6, 5, 2,
0, -1, -1, 1, 3, 4, 3, 1, -2, -4, -5, -5, -3, -1, -1, -2, -4, -7, -8, -9, -8,
-6, -4, -4, -5, -7, -9, -10, -10, -8, -5, -4, -3, -5, -6, -8, -8, -6, -4, -2,
-1, -1, -2, -3, -4, -4, -3, -1, 1, 1, 1, -1, -3, -4, -3, -2, 0, 2, 2, 1, -1, -3,
-3, -3, -1, 1, 2, 2, 0, -1, -2, -2, -1, 1, 2, 3, 3, 2, 0, -1, 0, 1, 3, 4, 5, 4,
2, 0, 0, 0, 1, 2, 3, 3, 1, -1, -2, -3, -2, -1, 0, 0, 0, -2, -4, -5, -5, -4, -3,
-2, -2, -3, -4, -5, -6, -5, -4, -2, -1, -1, -2, -3, -4, -4, -4, -2, 0, 0, 0, -1,
-3, -3, -3, -2, -1, 0, 0, 0, -2, -3, -4, -4, -2, -1, -1, -1, -2, -3, -4, -5, -4,
-3, -2, -1, -2, -2, -4, -4, -4, -3, -2, -1, 0, 0, -1, -2, -3, -2, -1, 0, 1, 1,
1, -1, -1, -2, -1, 0, 1, 1, 1, 0, -1, -2, -2, -2, -1, 0, 0, 0, -1, -2, -3, -3,
-2, -1, 0, 0, 0, -1, -2, -3, -2, -1, 0, 1, 1, 0, -1, -1, -1, -1, 0, 1, 2, 1, 0,
-1, -1, -1, -1, 0, 1, 1, 0, -1, -2, -3, -3, -2, -2, -1, -2, -2, -4, -4, -5, -4,
-4, -3, -3, -3, -4, -4, -5, -5, -4, -3, -2, -2, -2, -3, -3, -4, -3, -2, -2, -1,
-1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2,
-1, -2, -1, -2, -1, -2, -1, -2, -1, -2, -1, -2, -1, -1, -1, -1, -1, -8, -70,
-122, -121, -122, -121, -121, -122, -121, -122, -120, -122, -120, -123, -120,
-123, -120, -123, -120, -123, -120, -118, -117, -127, -101, -85, -49, 76, -12,
-36, -60, -128, -80, -16, -56, -64, -17, -128, -73, -60, -124, -78, 3, -43, -16,
22, -84, -53, -100, -123, -123, -104, -66, 24, 9, -69, -48, -96, -45, 38, 48,
20, 42, -52, -104, -78, -123, -119, -123, -120, -122, -117, -121, -122, -120,
-125, -100, -26, -5, 50, 62, -34, -11, -20, -56, 15, 32, -29, -61, -105, -125,
-120, -122, -121, -114, -87, -59, 1, -7, -35, -11, -42, -8, 64, 75, 80, 75, -9,
-51, -33, -45, 9, 43, 22, 23, 19, -17, -10, -18, -54, -20, -22, -39, -6, -6,
-40, -10, -8, -13, 50, 69, 56, 54, 18, -17, 20, 35, 44, 57, 9, -36, -55, -88,
-90, -61, -78, -72, -63, -91, -96, -95, -116, -94, -41, -4, 61, 89, 66, 45, 10,
-21, -2, 12, 5, 13, -39, -105, -123, -120, -123, -112, -91, -69, -20, -7, -4,
12, 3, 7, 46, 69, 91, 104, 63, 25, -3, -29, -16, 15, 15, 16, 0, -41, -50, -44,
-38, -7, 19, 23, 35, 27, 4, -1, -9, -7, 26, 49, 64, 79, 54, 22, 13, 4, 19, 53,
53, 36, 13, -36, -71, -82, -95, -91, -77, -75, -62, -47, -46, -32, -11, 6, 42,
75, 84, 86, 65, 24, 3, -11, -23, -21, -35, -63, -83, -104, -111, -91, -68, -44,
-19, -12, -6, 8, 13, 25, 47, 63, 84, 102, 91, 69, 41, 7, -6, 3, 10, 23, 20, -4,
-29, -45, -52, -29, -2, 22, 46, 56, 49, 43, 33, 24, 36, 47, 66, 78, 81, 59, 45,
18, 16, 19, 37, 34, 36, -1, -24, -60, -116, -19, -24, -9, -23, -21, 57, 4, -90,
-46, 77, 77, 53, 84, 97, 103, 10, -80, -12, 24, -21, -55, -3, -21, -72, -107,
-118, -43, -25, -42, 5, 78, 77, 20, 10, 57, 97, 70, 52, 102, 100, 41, -27, -31,
0, -12, -40, -20, 31, 17, -39, -45, 4, 30, 11, 10, 55, 78, 42, 7, 32, 66, 56,
35, 57, 95, 78, 24, 8, 31, 33, 1, -9, 14, 11, -42, -94, -119, -120, -110, 11,
109, 116, 67, -64, -125, -108, 22, 111, 118, 118, 101, 80, 68, 53, -8, -59, -87,
-64, -10, 22, 7, -50, -95, -109, -91, -39, 18, 64, 67, 35, 0, -16, 1, 42, 92,
104, 68, 8, -25, -8, -9, -52, -105, -106, -58, 25, 98, 124, 59, -73, -123, -78,
25, 79, 56, 42, 57, 87, 109, 111, 46, -68, -128, -93, 59, 127, 110, 57, -18,
-35, -50, -48, -39, -33, -49, -36, 34, 109, 98, 9, -57, -43, 1, 32, 68, 104, 93,
16, -52, -58, -31, -28, -38, -35, -38, -83, -120, -116, -80, -63, -79, -59, 19,
105, 121, 102, 39, -33, -67, -24, 87, 120, 121, 71, -7, -14, -9, -27, -71, -100,
-93, -39, 55, 118, 100, -1, -102, -109, -38, 42, 75, 72, 56, 49, 63, 81, 71, 18,
-42, -58, -17, 40, 67, 48, 3, -43, -66, -61, -34, -8, 0, -9, -21, -26, -19, -3,
14, 23, 23, 26, 47, 76, 86, 54, -11, -71, -84, -36, 38, 80, 50, -29, -100, -118,
-91, -54, -37, -32, -15, 43, 106, 122, 94, -4, -81, -78, -1, 90, 122, 99, 29,
-34, -55, -48, -47, -69, -88, -71, -15, 43, 63, 37, -11, -44, -36, 12, 70, 100,
91, 58, 31, 22, 26, 36, 43, 39, 23, 7, 2, 6, 2, -18, -47, -63, -48, -4, 42, 56,
22, -38, -76, -62, -4, 54, 77, 64, 46, 49, 67, 69, 28, -41, -90, -79, -14, 57,
75, 25, -56, -112, -112, -71, -31, -15, -10, 8, 47, 86, 94, 57, -1, -36, -20,
35, 87, 99, 64, 7, -39, -56, -46, -26, -13, -10, -12, -9, -3, 5, 6, 3, 3, 15,
44, 82, 104, 91, 44, -11, -37, -16, 36, 79, 82, 45, -4, -32, -31, -21, -26, -42,
-47, -21, 32, 76, 74, 21, -46, -74, -42, 25, 81, 94, 72, 46, 37, 44, 40, 11,
-32, -54, -38, 6, 41, 38, -5, -58, -88, -77, -38, 2, 23, 28, 27, 31, 42, 50, 48,
38, 29, 32, 47, 63, 61, 32, -15, -56, -68, -42, 3, 36, 35, 4, -31, -41, -22, 7,
29, 39, 45, 61, 87, 101, 79, 24, -29, -42, -4, 57, 96, 87, 39, -16, -43, -37,
-19, -14, -19, -17, 6, 41, 61, 49, 11, -28, -35, -2, 51, 89, 90, 62, 31, 16, 16,
20, 19, 9, -4, -9, -3, 4, 0, -22, -46, -55, -39, -2, 36, 56, 48, 20, 0, 5, 31,
60, 73, 66, 50, 38, 35, 30, 9, -27, -56, -55, -18, 30, 56, 40, -4, -42, -47,
-17, 25, 55, 63, 61, 65, 76, 78, 56, 17, -15, -15, 18, 61, 81, 61, 15, -28, -44,
-32, -7, 13, 18, 15, 15, 23, 29, 26, 14, 5, 10, 33, 62, 82, 77, 47, 9, -11, -4,
20, 40, 41, 23, -5, -25, -30, -24, -21, -26, -27, -10, 24, 57, 65, 44, 10, -11,
-1, 37, 77, 91, 75, 44, 21, 13, 9, -4, -23, -36, -29, -1, 32, 43, 23, -13, -36,
-29, 5, 45, 69, 71, 60, 50, 46, 46, 41, 28, 15, 15, 28, 44, 47, 28, -4, -32,
-39, -20, 11, 36, 39, 23, 4, -4, 4, 19, 32, 36, 39, 46, 59, 66, 56, 28, -4, -19,
-6, 26, 51, 50, 21, -16, -39, -40, -26, -12, -6, -1, 10, 31, 50, 51, 31, 5, -5,
12, 46, 76, 81, 60, 26, -1, -10, -7, -4, -8, -13, -10, 0, 11, 14, 4, -12, -19,
-5, 27, 60, 76, 68, 46, 26, 20, 27, 40, 46, 41, 30, 22, 19, 15, 3, -14, -28,
-24, -3, 26, 44, 40, 16, -9, -16, -1, 27, 48, 55, 51, 46, 44, 43, 34, 16, -2,
-8, 6, 30, 44, 35, 6, -26, -42, -36, -14, 6, 16, 17, 17, 23, 30, 33, 27, 18, 17,
30, 51, 66, 62, 38, 8, -14, -18, -6, 9, 14, 7, -4, -10, -8, -3, 0, 1, 6, 19, 40,
61, 68, 55, 30, 11, 9, 25, 44, 53, 45, 26, 7, -3, -5, -7, -10, -13, -7, 10, 29,
38, 30, 10, -7, -7, 12, 39, 59, 61, 49, 35, 26, 24, 22, 17, 10, 8, 13, 22, 25,
15, -7, -28, -34, -22, 2, 23, 30, 24, 14, 9, 15, 25, 33, 35, 36, 39, 46, 48, 39,
19, -4, -17, -14, 2, 17, 20, 9, -9, -20, -19, -7, 7, 18, 25, 33, 43, 51, 51, 40,
23, 12, 14, 30, 46, 50, 37, 14, -6, -15, -12, -4, 2, 4, 6, 12, 19, 23, 19, 9, 2,
8, 26, 47, 59, 55, 38, 20, 11, 13, 20, 24, 21, 15, 11, 8, 6, -1, -12, -20, -19,
-5, 15, 30, 31, 21, 8, 4, 12, 27, 41, 46, 43, 37, 32, 28, 20, 7, -5, -10, -5, 7,
17, 15, 3, -14, -23, -16, 0, 19, 31, 35, 36, 36, 36, 36, 31, 24, 20, 23, 31, 39,
37, 22, 1, -15, -19, -10, 3, 12, 14, 10, 7, 8, 11, 14, 15, 16, 23, 34, 46, 50,
41, 25, 10, 5, 12, 22, 28, 25, 14, 2, -5, -7, -8, -8, -8, -3, 7, 19, 26, 24, 15,
6, 6, 16, 32, 45, 47, 39, 27, 17, 11, 8, 5, 1, -1, 1, 5, 8, 5, -4, -14, -16, -7,
11, 28, 38, 36, 30, 24, 24, 27, 30, 29, 27, 26, 27, 26, 20, 7, -7, -16, -14, -2,
10, 17, 14, 7, 1, 2, 8, 17, 23, 28, 32, 36, 38, 36, 28, 17, 9, 8, 14, 22, 24,
18, 6, -6, -12, -12, -6, 0, 5, 8, 11, 15, 18, 17, 14, 12, 14, 23, 35, 42, 40,
29, 15, 5, 2, 5, 8, 8, 4, 1, -1, -1, -3, -7, -9, -5, 5, 19, 31, 35, 30, 22, 17,
19, 25, 30, 31, 28, 23, 17, 12, 6, -1, -8, -9, -5, 3, 11, 13, 9, 4, 0, 3, 12,
22, 30, 33, 32, 29, 26, 23, 19, 15, 12, 12, 15, 17, 16, 9, -1, -11, -14, -9, 0,
9, 12, 12, 10, 9, 12, 14, 16, 18, 21, 27, 33, 34, 29, 18, 6, 1, 1, 6, 10, 8, 3,
-3, -7, -7, -6, -4, -1, 5, 14, 22, 27, 27, 23, 18, 17, 19, 25, 29, 29, 24, 15,
7, 1, -2, -4, -3, -2, 1, 4, 6, 7, 5, 3, 3, 8, 17, 26, 32, 32, 27, 21, 17, 15,
16, 16, 15, 13, 12, 10, 7, 1, -7, -11, -10, -3, 6, 12, 13, 10, 7, 7, 10, 15, 19,
22, 24, 26, 26, 23, 17, 10, 4, 2, 3, 6, 7, 4, -1, -6, -9, -8, -4, 1, 7, 12, 16,
19, 20, 20, 19, 18, 18, 21, 24, 25, 22, 16, 7, -1, -4, -4, -2, 1, 2, 2, 1, 2, 2,
3, 5, 8, 13, 21, 26, 29, 26, 20, 14, 12, 13, 15, 15, 13, 10, 6, 3, -1, -5, -7,
-7, -3, 2, 7, 10, 9, 7, 6, 8, 12, 17, 21, 23, 23, 21, 17, 14, 9, 6, 4, 4, 3, 4,
2, -1, -5, -7, -8, -5, 0, 6, 12, 14, 15, 14, 15, 15, 18, 18, 20, 19, 21, 17, 15,
6, 2, -6, -4, -4, 1, 1, 2, -1, -1, 0, 1, 6, 6, 16, 12, 28, 3, -29, -115, -66,
-55, 27, 12, -57, -8, -87, 15, -16, 30, 10, -19, 10, -37, 15, -48, -26, -48,
-22, 30, 29, 72, 28, 56, 62, 89, 113, 80, 75, 20, 24, -10, -16, -19, -15, 40,
58, 102, 89, 83, 50, 4, -38, -96, -99, -99, -53, -16, 18, 48, 56, 64, 28, -16,
-85, -123, -120, -122, -101, -69, -39, -19, -1, 10, 1, -30, -71, -95, -87, -51,
-20, -5, -6, -2, 18, 41, 49, 42, 36, 45, 71, 86, 78, 47, 14, 1, 11, 35, 60, 83,
108, 120, 118, 119, 118, 80, 33, 9, 11, 31, 55, 80, 108, 121, 117, 121, 96, 43,
-4, -34, -48, -49, -38, -16, 13, 36, 45, 40, 23, 2, -21, -42, -57, -60, -53,
-42, -32, -24, -15, -5, 7, 14, 13, 3, -10, -23, -32, -41, -49, -54, -44, -18,
25, 64, 88, 92, 84, 73, 60, 39, 11, -7, -6, 26, 68, 109, 118, 120, 116, 108, 81,
52, 14, -9, -12, -3, -48, -89, 56, 47, -16, 94, 109, 83, 100, 37, -42, 51, 73,
-23, -21, -35, -43, -2, 15, -68, -100, -98, -119, -82, -62, -98, -103, -83, -56,
16, 53, 46, 30, 25, 3, -10, -35, -75, -109, -111, -115, -92, -48, -9, 38, 62,
74, 59, 41, 20, 13, 5, 0, -1, 9, 35, 60, 72, 63, 41, 19, 8, 6, 4, 1, 3, 11, 27,
42, 49, 46, 43, 40, 36, 21, -4, -32, -58, -77, -90, -94, -92, -77, -51, -18, 13,
27, 24, 2, -24, -53, -76, -94, -102, -98, -80, -54, -32, -18, -19, -29, -46,
-60, -74, -76, -69, -51, -25, 2, 28, 48, 59, 59, 50, 36, 20, 5, -6, -13, -15,
-12, -3, 12, 31, 50, 64, 73, 74, 70, 58, 42, 21, 4, -7, -7, 3, 19, 35, 48, 56,
52, 39, 13, -15, -40, -55, -59, -52, -37, -18, 3, 16, 20, 8, -11, -37, -58, -71,
-75, -73, -63, -48, -28, -6, 9, 15, 13, 8, 2, -3, -10, -20, -30, -35, -31, -20,
-4, 11, 26, 39, 50, 56, 54, 43, 29, 15, 9, 12, 25, 44, 65, 82, 93, 95, 86, 66,
39, 11, -11, -22, -20, -7, 14, 35, 51, 58, 57, 48, 32, 12, -10, -26, -34, -32,
-24, -14, -6, -2, 0, 0, -3, -11, -22, -36, -47, -54, -56, -54, -49, -41, -28,
-13, 3, 14, 18, 14, 4, -9, -22, -30, -33, -27, -13, 7, 28, 46, 57, 58, 49, 32,
12, -6, -16, -15, -5, 11, 29, 48, 62, 71, 69, 59, 42, 24, 9, 0, -1, 1, 5, 11,
17, 23, 26, 24, 16, 2, -12, -25, -36, -44, -49, -50, -47, -38, -25, -10, -1, 3,
-3, -13, -28, -42, -55, -64, -68, -63, -49, -29, -9, 3, 7, 1, -11, -25, -37,
-46, -50, -45, -33, -12, 10, 30, 41, 43, 38, 30, 20, 11, 2, -4, -5, -1, 9, 19,
29, 35, 37, 35, 30, 23, 14, 3, -7, -15, -18, -15, -7, 4, 15, 23, 25, 23, 15, 2,
-15, -33, -49, -58, -58, -50, -36, -23, -12, -8, -8, -14, -25, -40, -55, -64,
-66, -57, -42, -24, -8, 3, 9, 10, 6, -2, -13, -24, -31, -33, -27, -18, -7, 4,
13, 20, 25, 28, 28, 24, 16, 8, 2, 1, 5, 12, 20, 31, 40, 49, 52, 50, 39, 22, 4,
-11, -19, -21, -16, -9, 2, 11, 21, 24, 20, 8, -8, -23, -35, -38, -38, -32, -25,
-15, -6, 2, 5, 2, -8, -21, -33, -43, -47, -47, -44, -38, -29, -18, -6, 3, 8, 7,
3, -3, -8, -11, -12, -11, -9, -1, 9, 23, 34, 41, 41, 35, 26, 15, 5, -4, -8, -8,
0, 12, 28, 41, 48, 47, 39, 28, 15, 4, -4, -8, -9, -4, 4, 13, 20, 21, 16, 7, -4,
-14, -23, -31, -36, -40, -39, -34, -24, -15, -8, -5, -5, -7, -11, -17, -25, -34,
-40, -40, -34, -23, -11, -2, 4, 6, 4, 0, -7, -16, -24, -29, -28, -20, -7, 8, 21,
29, 34, 34, 31, 24, 14, 4, -4, -6, -1, 8, 17, 25, 28, 28, 25, 20, 12, 2, -9,
-17, -19, -17, -11, -4, 1, 4, 6, 8, 8, 4, -5, -16, -27, -35, -38, -38, -34, -30,
-23, -17, -11, -8, -11, -19, -31, -41, -48, -47, -42, -32, -22, -11, -1, 7, 11,
9, 2, -7, -16, -21, -21, -17, -12, -6, 1, 8, 15, 20, 20, 16, 9, 1, -4, -5, -4,
-1, 3, 9, 17, 24, 30, 30, 24, 15, 4, -5, -11, -16, -18, -19, -17, -12, -4, 2, 4,
0, -7, -15, -23, -30, -34, -37, -36, -31, -21, -10, -2, 1, -2, -9, -19, -26,
-33, -37, -39, -36, -32, -21, -13, -3, -1, 1, -3, -4, -8, -8, -10, -12, -10,
-10, 3, -24, -91, -115, 0, 16, 44, 57, 36, 31, -20, -9, -53, 1, 73, 124, 113,
89, 20, -41, -13, 11, 56, 16, -27, -89, -88, -58, -18, -10, -39, -60, -72, -36,
-10, 13, -4, -25, -40, -27, 3, 27, 39, 31, 23, 14, 14, 8, -5, -24, -41, -47,
-46, -37, -33, -29, -30, -26, -21, -14, -12, -15, -15, -15, -8, -3, 6, 11, 21,
30, 39, 43, 42, 35, 25, 13, 3, -6, -11, -12, -10, -6, -2, 2, 4, 3, 0, -5, -11,
-15, -17, -15, -11, -6, -1, 5, 9, 12, 13, 11, 5, -4, -13, -21, -27, -30, -32,
-31, -29, -24, -20, -16, -16, -18, -23, -27, -30, -31, -29, -26, -20, -12, -3,
6, 12, 14, 12, 8, 2, -4, -9, -12, -13, -12, -8, -2, 4, 9, 10, 9, 5, 0, -4, -7,
-9, -8, -5, 0, 7, 13, 17, 19, 17, 13, 8, 1, -5, -11, -16, -18, -18, -16, -13,
-10, -8, -8, -10, -13, -18, -23, -27, -31, -31, -29, -24, -18, -11, -6, -4, -4,
-7, -12, -17, -23, -27, -28, -26, -22, -16, -10, -5, -2, -1, -1, -4, -7, -11,
-13, -13, -11, -6, -1, 5, 10, 14, 15, 14, 11, 7, 2, -3, -7, -9, -9, -6, -3, 1,
5, 7, 7, 4, 1, -5, -10, -14, -17, -17, -15, -12, -7, -3, -1, -1, -4, -8, -14,
-21, -26, -29, -30, -29, -25, -20, -15, -11, -9, -9, -11, -14, -18, -21, -22,
-22, -19, -15, -10, -5, -1, 2, 3, 2, -1, -4, -8, -11, -13, -12, -10, -6, -1, 4,
8, 10, 11, 9, 5, 1, -3, -6, -7, -6, -3, 0, 4, 7, 8, 7, 4, -1, -7, -13, -17, -19,
-19, -18, -14, -10, -7, -5, -5, -7, -10, -14, -18, -22, -24, -24, -23, -20, -16,
-12, -10, -8, -9, -10, -13, -17, -20, -22, -22, -21, -18, -13, -8, -4, 0, 2, 2,
0, -3, -7, -9, -11, -10, -8, -4, 0, 4, 8, 9, 8, 5, 1, -3, -7, -9, -10, -9, -6,
-3, 1, 3, 4, 3, 1, -3, -7, -12, -15, -17, -17, -16, -14, -11, -9, -7, -7, -9,
-12, -15, -19, -22, -25, -25, -24, -21, -17, -13, -10, -8, -8, -9, -12, -15,
-18, -20, -21, -19, -16, -12, -8, -4, -1, 0, -1, -3, -6, -9, -11, -12, -11, -8,
-5, -1, 2, 5, 5, 5, 3, 0, -4, -7, -9, -10, -9, -7, -5, -2, 0, 1, 0, -2, -5, -9,
-12, -16, -17, -19, -17, -16, -12, -11, -7, -9, -8, -13, -14, -20, -20, -25,
-22, -25, -14, -37, -65, 66, -49, -128, -99, -99, 4, 11, -8, 24, -16, -64, -10,
6, -35, -54, 65, 127, 100, 84, 105, 123, 106, -19, -64, 46, 10, -47, -51, 7, -5,
2, 4, -75, -128, -106, -91, -122, -120, -117, -25, -2, -44, -24, 24, 50, 35, -4,
-35, 0, 75, 87, 26, 50, 112, 122, 83, 19, 38, 44, 1, -45, -66, -63, -36, -10,
-49, -95, -82, -27, -59, -115, -126, -85, -42, -75, -91, -46, 14, 34, 17, 1, 13,
52, 72, 40, 7, 43, 102, 94, 36, 22, 64, 73, 24, -20, -23, -10, -6, -26, -62,
-74, -40, -18, -59, -109, -84, -28, -32, -77, -73, -19, 12, 1, -15, -7, 17, 42,
38, 7, 2, 47, 77, 43, 5, 25, 60, 42, -8, -29, -19, -9, -23, -50, -67, -50, -20,
-27, -70, -81, -43, -23, -55, -84, -58, -15, -5, -19, -18, 7, 36, 45, 25, 6, 21,
52, 47, 11, 2, 37, 57, 31, -1, 3, 20, 14, -15, -42, -44, -27, -21, -44, -66,
-50, -16, -17, -48, -55, -24, -4, -18, -36, -26, 0, 15, 10, -3, 2, 29, 44, 23,
-2, 7, 33, 26, -8, -22, -5, 7, -9, -31, -37, -24, -13, -24, -48, -54, -33, -21,
-39, -60, -45, -14, -7, -23, -25, -4, 17, 18, 3, -2, 12, 30, 26, 5, 1, 24, 38,
21, -1, 3, 20, 16, -8, -24, -21, -11, -14, -31, -42, -32, -14, -15, -33, -37,
-19, -5, -16, -31, -25, -7, 1, -7, -13, -4, 13, 19, 8, -3, 3, 16, 12, -7, -15,
-4, 4, -5, -19, -19, -9, -5, -14, -26, -28, -18, -15, -24, -34, -27, -11, -8,
-16, -18, -5, 6, 4, -4, -5, 4, 11, 7, -1, -1, 10, 16, 9, 0, 2, 10, 9, -3, -11,
-9, -4, -7, -16, -19, -14, -7, -9, -16, -18, -11, -6, -11, -18, -16, -7, -4, -8,
-10, -5, 3, 4, 0, -4, 0, 4, 2, -5, -8, -3, 1, -3, -9, -8, -4, -2, -7, -12, -11,
-8, -8, -12, -15, -12, -7, -5, -9, -9, -4, 0, -1, -4, -4, 0, 2, 0, -3, -2, 2, 4,
2, -1, 0, 3, 2, -2, -5, -4, -2, -4, -7, -7, -5, -3, -4, -7, -7, -5, -4, -6, -8,
-7, -4, -3, -5, -5, -3, -1, -1, -2, -3, -2, 0, -1, -3, -3, -2, -1, -2, -3, -3,
-2, -1, -3, -4, -3, -3, -3, -4, -4, -4, -3, -2, -3, -3, -2, -1, -2, -2, -2, -1,
-1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* EATSTATICTHIRTEEN_H_ */
