#ifndef DDMFIVE_H_
#define DDMFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DDMFIVE_NUM_CELLS 5094
#define DDMFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DDMFIVE_DATA [] = {3, 65,
59, 6, 54, 57, 39, -16, -62, -69, -102, -9, 6, -47, 18, 71, 77, 37, 47, 75, -20,
-97, -91, -80, -65, -62, -6, 24, 29, 86, 88, 55, 28, 15, -24, -99, -112, -71,
-70, -35, 27, 59, 79, 64, 87, 65, 0, -31, -82, -118, -110, -56, -22, -22, 46,
88, 69, 92, 84, 19, -57, -72, -72, -109, -84, -42, -28, 42, 87, 90, 77, 36, 46,
4, -66, -102, -103, -72, -98, -22, 79, 56, 61, 90, 79, 16, -12, -21, -85, -100,
-61, -56, -30, 30, 73, 87, 80, 81, 32, -13, -45, -88, -82, -102, -87, -6, 21,
49, 88, 93, 41, 11, 36, -34, -98, -82, -94, -87, -17, 47, 48, 45, 86, 65, 23,
17, -20, -76, -112, -81, -42, -43, -5, 56, 74, 62, 50, 62, 2, -72, -48, -57,
-94, -75, -8, 25, 23, 67, 87, 37, 21, 18, -24, -80, -95, -51, -60, -46, 28, 48,
46, 59, 70, 37, -23, -19, -48, -89, -60, -47, -26, 3, 47, 73, 50, 48, 38, 0,
-38, -63, -54, -75, -76, 6, 25, 20, 50, 83, 50, 0, 32, -13, -97, -72, -34, -43,
-38, 22, 57, 30, 61, 68, 24, -15, -45, -33, -59, -80, -37, -4, 9, 29, 74, 71, 6,
27, 30, -46, -63, -53, -60, -69, -4, 51, 21, 43, 67, 37, 29, 12, -23, -70, -81,
-38, -30, -15, 14, 39, 58, 46, 57, 43, -29, -50, -31, -52, -74, -39, 10, -3, 30,
91, 62, 17, 21, 22, -30, -66, -47, -53, -67, -9, 46, 52, 32, 48, 66, 17, -8,
-13, -54, -87, -58, -7, -4, 1, 52, 59, 52, 55, 35, -6, -56, -46, -44, -61, -40,
-6, 18, 37, 64, 79, 29, 7, 18, -31, -63, -54, -39, -58, -19, 58, 47, 34, 67, 58,
16, -12, -16, -49, -88, -52, -23, -5, 11, 40, 77, 58, 34, 45, 5, -58, -62, -29,
-55, -73, 10, 37, 21, 62, 82, 39, 6, 14, -20, -71, -57, -48, -50, -10, 23, 49,
59, 56, 54, 32, -2, -38, -47, -53, -71, -33, 3, -2, 40, 80, 57, 31, 40, 14, -58,
-47, -29, -75, -59, 9, 29, 29, 53, 75, 46, 15, 11, -21, -56, -77, -51, -19, -26,
8, 55, 53, 44, 60, 53, -18, -52, -24, -51, -67, -36, -4, 6, 29, 74, 67, 32, 21,
6, -26, -50, -51, -48, -62, -12, 38, 44, 47, 56, 50, 15, 7, -8, -64, -76, -42,
-30, -12, 13, 47, 48, 45, 60, 39, -8, -50, -43, -34, -65, -45, 8, 4, 19, 73, 80,
19, 5, 27, -32, -63, -35, -48, -63, -16, 40, 47, 41, 50, 45, 27, 4, -25, -38,
-68, -71, -18, 8, 3, 31, 64, 46, 36, 51, 2, -60, -37, -35, -64, -37, 6, 5, 22,
74, 64, 26, 20, 8, -28, -46, -48, -45, -44, -21, 27, 56, 43, 34, 59, 30, -20,
-15, -23, -76, -70, -5, 3, -10, 41, 68, 38, 37, 39, 8, -45, -49, -35, -49, -45,
-5, 26, 32, 41, 66, 50, 3, 4, -8, -48, -65, -38, -25, -23, 20, 50, 39, 44, 54,
30, -7, -29, -31, -57, -56, -19, 0, 3, 26, 68, 57, 21, 30, 17, -42, -50, -26,
-44, -62, -3, 39, 24, 41, 62, 42, 10, 3, -5, -43, -70, -48, -15, -6, 3, 44, 58,
29, 44, 52, -7, -52, -29, -33, -64, -29, 12, -2, 22, 70, 59, 30, 20, 5, -30,
-37, -37, -51, -40, -13, 24, 49, 44, 43, 47, 19, -4, -6, -31, -78, -55, 0, -12,
1, 52, 50, 25, 50, 54, -10, -50, -28, -39, -55, -26, 0, 8, 20, 57, 70, 39, 4, 1,
-11, -44, -53, -27, -38, -36, 28, 58, 40, 36, 52, 24, -11, -8, -26, -68, -56,
-20, 0, 10, 33, 52, 41, 40, 37, 7, -37, -47, -34, -43, -40, 2, 15, 17, 52, 70,
39, 4, 9, -14, -50, -45, -32, -37, -26, 17, 52, 45, 35, 46, 33, -7, -27, -18,
-49, -71, -21, 12, -2, 22, 65, 49, 23, 35, 17, -41, -45, -32, -43, -39, -8, 17,
31, 47, 50, 43, 23, -7, -17, -25, -59, -50, -18, -16, 3, 48, 52, 26, 45, 44,
-15, -30, -17, -53, -62, -15, 2, -6, 27, 61, 45, 34, 26, 3, -24, -41, -41, -32,
-39, -26, 23, 47, 33, 39, 57, 13, -15, 4, -22, -72, -51, -10, -14, 3, 45, 46,
28, 41, 38, 6, -30, -40, -40, -41, -30, -5, 13, 18, 41, 62, 42, 9, 5, -17, -42,
-37, -27, -42, -30, 22, 42, 39, 44, 41, 14, -4, -4, -18, -59, -59, -21, -1, 4,
31, 54, 29, 23, 46, 18, -40, -42, -29, -44, -37, 5, 14, 9, 40, 59, 44, 13, -5,
-12, -32, -47, -33, -22, -28, -2, 50, 52, 24, 39, 32, -10, -15, -9, -50, -65,
-19, 1, 1, 33, 46, 28, 33, 36, 10, -24, -38, -40, -37, -27, -11, 16, 23, 26, 52,
54, 6, -9, 1, -31, -59, -26, -13, -37, 3, 53, 39, 24, 43, 31, -7, -17, -17, -42,
-53, -31, 0, 15, 15, 38, 51, 31, 14, 19, -10, -51, -40, -20, -38, -24, 22, 27,
27, 47, 47, 11, -2, -2, -28, -49, -39, -25, -16, 4, 34, 44, 27, 31, 35, 7, -28,
-27, -31, -54, -33, 8, 7, 5, 42, 55, 30, 15, 15, -16, -45, -35, -24, -32, -31,
9, 40, 33, 31, 46, 23, -14, -9, -6, -51, -61, -17, -6, -4, 31, 47, 24, 25, 38,
13, -23, -34, -41, -42, -27, -8, 10, 16, 27, 47, 48, 15, -3, -7, -36, -47, -20,
-24, -40, 5, 44, 31, 29, 48, 17, -16, -1, -9, -51, -55, -25, -10, 5, 27, 39, 32,
25, 25, 23, -14, -52, -39, -27, -37, -15, 24, 13, 12, 52, 54, 6, -3, -5, -38,
-46, -24, -23, -31, 0, 32, 40, 38, 33, 18, 1, -16, -21, -33, -51, -38, -4, 10,
16, 40, 40, 18, 21, 24, -18, -46, -34, -32, -38, -11, 18, 14, 21, 44, 47, 17,
-6, -9, -24, -48, -37, -14, -20, -11, 32, 49, 23, 27, 35, 1, -25, -18, -29, -51,
-34, -2, 9, 16, 32, 39, 33, 16, 7, -7, -36, -46, -26, -21, -25, 6, 33, 24, 32,
50, 17, -13, -4, -18, -50, -37, -15, -22, -1, 35, 36, 25, 30, 24, 7, -15, -30,
-34, -36, -33, -7, 22, 11, 17, 51, 40, 3, 8, 0, -45, -44, -10, -24, -34, 11, 31,
26, 36, 41, 15, -7, -11, -16, -32, -43, -34, -6, 11, 17, 39, 36, 14, 19, 24,
-14, -41, -29, -33, -36, 0, 19, 5, 21, 45, 37, 14, 6, -13, -38, -35, -20, -18,
-23, -5, 28, 39, 29, 34, 24, -10, -20, -4, -25, -54, -29, 0, 1, 18, 43, 32, 12,
19, 21, -9, -37, -36, -27, -26, -14, 18, 22, 11, 32, 50, 19, -9, -7, -24, -45,
-24, -9, -25, -7, 28, 36, 31, 32, 19, -6, -13, -16, -27, -38, -35, -10, 13, 15,
29, 40, 20, 7, 20, 0, -46, -37, -16, -33, -21, 23, 18, 9, 37, 46, 12, -5, -6,
-25, -37, -31, -19, -12, -6, 15, 42, 36, 16, 20, 16, -22, -30, -13, -36, -46,
-4, 18, 5, 24, 44, 23, 10, 16, -8, -37, -33, -26, -26, -17, 3, 18, 27, 30, 33,
22, -6, -17, -11, -30, -45, -21, -7, -9, 16, 45, 26, 11, 26, 15, -19, -26, -23,
-38, -37, -7, 14, 10, 15, 34, 37, 14, 1, -1, -27, -47, -24, -10, -26, -11, 25,
31, 23, 36, 24, -10, -17, -11, -25, -40, -32, -14, 2, 17, 33, 33, 18, 9, 16, -1,
-34, -34, -28, -35, -15, 21, 14, 6, 34, 41, 12, 5, -1, -35, -42, -19, -15, -23,
-6, 16, 30, 33, 29, 19, 1, -21, -18, -11, -38, -44, -7, 10, 5, 32, 44, 10, 2,
24, 0, -37, -31, -27, -35, -13, 16, 15, 16, 26, 31, 24, 5, -16, -25, -31, -35,
-17, -5, -11, 7, 39, 31, 20, 25, 5, -26, -18, -12, -40, -37, -6, 4, 10, 34, 35,
17, 10, 12, -2, -26, -36, -29, -21, -18, 4, 26, 19, 16, 37, 28, -8, -14, -11,
-34, -40, -13, -7, -11, 12, 36, 30, 20, 16, 9, -11, -25, -23, -26, -33, -18, 14,
18, 15, 32, 32, 7, 6, 5, -28, -40, -21, -18, -21, 5, 19, 18, 26, 34, 20, -1,
-12, -18, -22, -30, -26, -7, 1, 6, 34, 38, 10, 8, 20, -8, -32, -16, -23, -40,
-10, 21, 10, 12, 29, 26, 12, 7, -4, -24, -31, -28, -11, -5, -8, 7, 29, 23, 18,
25, 4, -25, -14, -8, -34, -28, -4, -3, 6, 33, 29, 8, 10, 12, -6, -18, -23, -31,
-26, -10, 9, 17, 12, 13, 27, 21, -1, -6, -14, -38, -31, -2, -9, -17, 11, 28, 18,
23, 26, -2, -23, -16, -12, -26, -29, -14, 3, 10, 21, 32, 20, -1, 4, 8, -21, -34,
-22, -22, -20, 9, 21, 9, 13, 27, 18, 2, -6, -20, -31, -28, -14, -6, -6, 2, 22,
29, 18, 16, 9, -18, -26, -9, -23, -38, -13, 9, 3, 18, 36, 17, 1, 11, 3, -24,
-30, -26, -22, -15, 1, 16, 20, 13, 20, 30, 4, -21, -13, -18, -40, -21, 2, -9,
-3, 32, 31, 11, 19, 11, -16, -21, -15, -28, -29, -13, 2, 13, 20, 21, 23, 17, 2,
-2, -12, -35, -33, -9, -12, -11, 18, 24, 10, 26, 32, -3, -19, -9, -20, -35, -18,
-8, -9, 6, 28, 30, 18, 8, 7, 1, -21, -27, -21, -26, -26, 8, 23, 8, 14, 32, 17,
-1, 3, -14, -39, -31, -9, -10, -7, 8, 19, 23, 25, 22, 6, -17, -24, -14, -20,
-29, -15, 2, 2, 22, 39, 19, 1, 9, 2, -22, -22, -22, -33, -20, 11, 17, 14, 18,
23, 20, 7, -6, -16, -29, -37, -14, 3, -9, -3, 28, 26, 14, 26, 14, -25, -26, -6,
-23, -30, -11, -1, 4, 25, 33, 20, 9, 1, -2, -8, -24, -32, -19, -14, -4, 21, 26,
8, 19, 30, 3, -11, -7, -27, -40, -10, 1, -11, 4, 26, 20, 20, 24, 6, -16, -19,
-17, -20, -21, -19, 0, 14, 15, 25, 31, 7, -7, 7, -8, -36, -26, -10, -21, -6, 23,
20, 10, 21, 23, 3, -10, -15, -22, -27, -20, -7, 1, 2, 16, 31, 21, 7, 8, -3, -25,
-19, -14, -27, -21, 8, 13, 13, 25, 22, 7, 3, 2, -15, -27, -29, -17, -8, -3, 8,
21, 16, 14, 26, 11, -20, -19, -9, -28, -24, -1, -3, -5, 23, 33, 13, 6, 6, -6,
-17, -18, -22, -22, -19, -2, 20, 20, 8, 18, 22, -1, -6, -3, -28, -41, -10, 0,
-11, 6, 22, 12, 17, 27, 4, -17, -17, -17, -22, -16, -13, -7, 6, 16, 26, 25, 4,
-7, 3, -10, -27, -19, -18, -29, -1, 28, 14, 5, 23, 17, -3, 1, -6, -32, -34, -13,
-3, -2, 2, 13, 21, 19, 15, 12, -8, -30, -17, -8, -23, -21, 3, 5, 8, 31, 27, 1,
-3, 3, -12, -21, -20, -22, -20, -1, 16, 19, 13, 12, 17, 9, -6, -12, -18, -33,
-22, 1, -1, -5, 18, 25, 12, 17, 15, -12, -25, -13, -15, -23, -16, -1, 7, 14, 22,
24, 12, -6, -2, -1, -24, -32, -12, -11, -12, 15, 26, 8, 11, 27, 8, -12, -10,
-18, -30, -18, -5, -4, 3, 14, 21, 22, 14, 3, -1, -14, -24, -16, -14, -23, -4,
20, 12, 13, 27, 13, -7, 5, -2, -30, -29, -9, -13, -6, 14, 16, 11, 18, 21, 9, -6,
-19, -18, -17, -22, -12, 5, 2, 6, 31, 29, 2, 1, 6, -17, -23, -11, -18, -26, -1,
18, 15, 16, 18, 12, 5, 2, -8, -20, -30, -21, -3, 3, 1, 14, 20, 12, 19, 18, -9,
-26, -15, -16, -21, -8, 1, -3, 11, 30, 24, 8, 1, -3, -11, -16, -18, -16, -19,
-10, 16, 25, 10, 11, 21, 3, -8, -1, -14, -37, -20, 2, -1, 2, 16, 15, 13, 19, 12,
-6, -20, -22, -16, -10, -15, -6, 9, 10, 16, 30, 14, -10, -2, -3, -23, -21, -10,
-20, -12, 18, 20, 8, 15, 15, 1, -1, -5, -21, -27, -19, -8, 3, 5, 6, 19, 20, 7,
9, 4, -24, -26, -6, -14, -24, 1, 11, 2, 17, 29, 9, -6, 0, -8, -20, -20, -17,
-13, -4, 6, 16, 18, 7, 10, 13, -4, -20, -13, -19, -26, -7, 6, -3, 5, 24, 16, 7,
8, -3, -20, -17, -13, -17, -16, -5, 7, 14, 15, 16, 14, -2, -6, -1, -14, -31,
-17, -2, -8, 3, 21, 12, 4, 19, 14, -8, -17, -15, -19, -17, -8, -1, 1, 3, 17, 26,
12, -5, -1, -8, -23, -15, -6, -21, -14, 15, 17, 8, 16, 14, -4, -1, 0, -18, -26,
-17, -9, -1, 8, 9, 12, 13, 11, 12, 4, -21, -23, -9, -15, -15, 4, 3, -4, 22, 31,
6, -4, 3, -12, -20, -8, -11, -22, -9, 11, 17, 17, 11, 9, 7, -2, -9, -8, -22,
-30, -5, 9, -1, 6, 21, 10, 8, 19, 3, -23, -18, -10, -15, -10, 0, 1, 5, 20, 22,
14, 1, -7, -7, -10, -18, -13, -10, -12, 6, 24, 16, 6, 16, 9, -7, -5, -6, -26,
-24, -3, 2, 1, 11, 17, 14, 13, 10, 3, -14, -22, -13, -7, -15, -8, 11, 10, 10,
25, 19, -6, -5, 1, -15, -22, -11, -11, -9, 8, 17, 14, 12, 11, 7, 2, -11, -17,
-16, -19, -13, 5, 7, 1, 18, 24, 7, 5, 6, -16, -23, -6, -10, -20, -3, 11, 8, 16,
22, 9, -1, 0, -5, -11, -19, -21, -8, 1, 3, 13, 21, 6, 6, 18, 2, -22, -14, -11,
-23, -9, 8, -1, 0, 21, 20, 9, 4, -4, -14, -14, -12, -12, -12, -9, 3, 19, 18, 9,
11, 3, -9, -4, -5, -26, -24, -3, -1, 3, 17, 14, 3, 11, 14, -2, -16, -17, -18,
-14, -6, 0, 3, 3, 11, 22, 15, -5, -6, -7, -19, -16, -3, -13, -17, 9, 20, 12, 11,
11, -2, -6, -3, -10, -21, -22, -11, 3, 9, 6, 12, 11, 4, 7, 6, -17, -26, -11,
-11, -13, 3, 7, -1, 13, 24, 10, -2, -3, -11, -16, -10, -11, -13, -6, 4, 14, 18,
8, 4, 7, -5, -12, -5, -15, -27, -6, 10, 0, 5, 20, 9, 2, 12, 3, -19, -18, -11,
-12, -8, -2, 3, 9, 13, 13, 14, 2, -12, -7, -6, -20, -16, -2, -7, -1, 19, 16, 1,
10, 10, -7, -9, -7, -19, -19, -3, 1, 2, 7, 12, 13, 12, 4, -2, -9, -19, -13, -4,
-10, -11, 8, 12, 7, 16, 16, -5, -9, 1, -9, -20, -14, -6, -5, 6, 14, 13, 6, 6,
10, 5, -11, -18, -11, -14, -10, 6, 8, -2, 10, 22, 11, 1, 1, -10, -19, -8, -5,
-12, -8, 4, 11, 16, 14, 8, 3, -4, -5, -3, -13, -24, -8, 4, 2, 11, 20, 4, 1, 16,
6, -16, -14, -10, -17, -6, 7, 3, 1, 12, 17, 15, 5, -6, -9, -10, -15, -8, -3,
-12, -3, 20, 19, 5, 12, 7, -11, -5, 2, -17, -24, -6, 0, 4, 14, 13, 5, 7, 9, 2,
-6, -17, -18, -9, -4, -2, 7, 7, 4, 16, 21, 0, -8, -3, -13, -17, -4, -4, -14, 2,
17, 12, 10, 11, 3, -5, -5, -7, -13, -18, -12, 3, 9, 4, 11, 16, 5, 3, 8, -8, -23,
-12, -5, -12, -4, 8, 4, 7, 17, 13, 1, -5, -8, -10, -12, -14, -8, -3, 0, 11, 19,
8, 2, 8, 0, -13, -9, -10, -21, -10, 7, 3, 2, 14, 12, 6, 7, 0, -13, -17, -13, -9,
-6, -7, -1, 11, 12, 9, 14, 4, -14, -8, -1, -17, -20, -2, -4, -3, 16, 17, 2, 4,
9, -2, -9, -12, -17, -15, -4, 0, 6, 6, 4, 12, 16, 2, -7, -5, -16, -17, -1, -3,
-14, 1, 15, 9, 12, 14, -3, -12, -2, -5, -15, -14, -9, -4, 7, 13, 12, 7, 1, 2, 6,
-5, -19, -13, -9, -11, 2, 13, 0, 1, 17, 14, 0, -2, -7, -18, -12, -3, -5, -7, -1,
9, 15, 12, 6, 2, -6, -11, -4, -5, -19, -12, 4, 5, 8, 16, 7, -2, 6, 6, -9, -14,
-11, -13, -5, 4, 5, 5, 7, 11, 14, 6, -7, -8, -8, -14, -7, 2, -7, -5, 15, 17, 5,
8, 7, -9, -8, 0, -10, -17, -6, 1, 6, 10, 10, 8, 7, 3, 1, -1, -15, -17, -3, -2,
-7, 7, 11, 2, 11, 18, 1, -9, -1, -8, -13, -5, -3, -8, 3, 13, 12, 9, 6, 1, 0, -4,
-11, -9, -11, -11, 3, 11, 3, 6, 16, 7, 0, 5, -4, -20, -10, -1, -7, -5, 5, 7, 8,
14, 11, 2, -6, -7, -4, -6, -14, -8, 0, 1, 8, 18, 8, -3, 6, 6, -8, -10, -9, -16,
-9, 5, 8, 3, 6, 9, 9, 7, -1, -8, -13, -13, -6, 0, -6, -4, 9, 12, 8, 12, 5, -12,
-8, 1, -10, -15, -5, -3, 0, 12, 15, 5, 1, 4, 2, -2, -11, -15, -11, -7, -1, 10,
8, -1, 9, 16, 2, -5, -3, -14, -18, -3, 0, -10, -2, 9, 9, 11, 11, 0, -7, -6, -7,
-7, -10, -13, -4, 7, 8, 9, 12, 1, -3, 6, -2, -17, -12, -8, -12, -1, 11, 3, 0,
12, 10, 0, -2, -6, -14, -12, -7, -4, -3, -2, 4, 13, 11, 2, 4, -2, -12, -8, -2,
-14, -14, 3, 6, 3, 11, 10, 0, 1, 3, -5, -13, -11, -10, -4, 0, 2, 6, 7, 6, 9, 6,
-7, -9, -5, -10, -11, -1, -2, -4, 10, 15, 5, 3, 4, -4, -7, -5, -9, -13, -7, 0,
6, 8, 5, 7, 8, 1, -1, 0, -12, -17, -3, 2, -6, 2, 10, 3, 7, 14, 3, -9, -5, -5,
-8, -6, -5, -4, 3, 8, 11, 11, 2, -3, 2, -1, -11, -8, -6, -11, 0, 13, 5, 0, 10,
8, 0, 3, -2, -16, -11, -1, -2, -1, 2, 3, 7, 12, 8, 3, -4, -10, -5, 0, -8, -9, 2,
2, 4, 15, 11, -4, 0, 6, -4, -8, -5, -10, -9, 4, 9, 6, 4, 5, 7, 7, 0, -6, -8,
-11, -7, 4, 2, -5, 4, 11, 6, 7, 7, -6, -10, -2, -3, -9, -5, -1, 0, 7, 11, 7, 2,
0, 0, 0, -6, -11, -7, -4, -2, 7, 9, -1, 3, 12, 4, -4, -2, -7, -13, -4, 2, -3,
-2, 6, 8, 8, 6, 1, -2, -5, -7, -3, -4, -11, -3, 8, 4, 4, 11, 3, -4, 3, 2, -11,
-9, -3, -6, -2, 6, 4, 2, 7, 6, 3, -1, -7, -8, -5, -7, -5, 0, -2, 1, 12, 10, -1,
2, 2, -8, -7, -1, -10, -12, 2, 6, 2, 6, 7, 1, 2, 2, -4, -9, -11, -9, -1, 1, -2,
4, 7, 3, 7, 9, -6, -11, -2, -4, -10, -3, -1, -5, 4, 12, 7, 1, 0, -2, -3, -4, -8,
-10, -7, -3, 5, 9, 2, 1, 6, 2, -2, -1, -9, -15, -6, 2, -3, -1, 5, 3, 4, 10, 5,
-5, -8, -6, -4, -4, -6, -4, 1, 3, 7, 11, 2, -5, 1, 1, -8, -7, -5, -10, -4, 9, 7,
1, 5, 5, 2, 1, -2, -10, -10, -6, -2, 2, 0, -1, 6, 9, 4, 4, -1, -10, -8, 0, -5,
-9, 0, 1, 1, 10, 11, -1, -2, 1, -3, -6, -5, -8, -7, 0, 4, 6, 5, 1, 3, 7, -1, -7,
-4, -8, -10, 1, 4, -4, 2, 10, 6, 2, 5, -2, -9, -4, -2, -6, -5, -2, 1, 6, 7, 5,
4, 0, -3, 0, -3, -10, -7, 0, -2, 2, 9, 4, 2, 8, 5, -4, -4, -4, -8, -5, 1, -1, 0,
4, 7, 8, 4, -1, -1, -2, -6, -3, -2, -7, -4, 8, 7, 2, 7, 4, -2, 0, 2, -7, -10,
-4, -2, 1, 4, 3, 3, 5, 4, 5, 0, -8, -7, -1, -3, -5, 1, 1, 0, 9, 10, 0, -2, 1,
-4, -5, -1, -5, -8, 0, 5, 5, 5, 3, 0, 3, 2, -2, -4, -8, -9, 1, 4, -1, 2, 6, 1,
3, 8, -2, -11, -4, -1, -5, -2, 0, -3, 2, 9, 7, 3, -1, -4, -1, -1, -5, -6, -4,
-4, 2, 9, 4, -1, 4, 3, -2, 0, -2, -11, -7, 1, 0, 0, 3, 2, 2, 5, 4, -2, -5, -7,
-4, -1, -4, -3, 1, 2, 3, 8, 4, -5, -2, 1, -5, -6, -3, -6, -5, 4, 6, 1, 1, 2, 1,
1, -2, -6, -6, -6, -3, 2, 0, -2, 4, 7, 1, 2, 1, -7, -8, -1, -3, -7, -2, 1, 1, 5,
6, 1, -1, -1, -2, -3, -6, -7, -3, 0, 0, 4, 5, 0, 2, 6, -1, -6, -3, -5, -8, -1,
2, -3, 1, 7, 4, 2, 3, -2, -5, -3, -3, -4, -4, -4, 1, 7, 4, 1, 4, 1, -3, 1, -1,
-10, -7, 1, -1, 0, 6, 2, 0, 6, 5, -2, -4, -5, -6, -2, -1, -2, 0, 2, 3, 8, 5, -2,
-3, -1, -5, -4, -1, -6, -5, 5, 7, 2, 4, 3, -1, 0, 2, -5, -8, -5, -2, 2, 3, 2, 2,
4, 2, 4, 2, -6, -8, -2, -2, -4, 1, 1, -1, 5, 9, 2, -2, -1, -3, -3, -2, -4, -5,
-1, 2, 6, 6, 1, 0, 2, 0, -2, -1, -6, -8, -1, 4, 0, 2, 5, 2, 2, 6, 0, -7, -4, -2,
-3, -1, 0, -1, 3, 5, 5, 4, 0, -4, -1, 0, -5, -4, -1, -3, 1, 8, 4, -1, 3, 2, -3,
-1, -2, -7, -5, 0, 1, 1, 2, 1, 3, 4, 1, -1, -3, -6, -4, 1, -2, -3, 2, 4, 1, 5,
4, -4, -2, 1, -3, -5, -2, -3, -2, 3, 4, 2, 2, 2, 1, 1, -3, -6, -3, -3, -3, 2, 2,
-2, 2, 6, 1, -1, 1, -5, -6, -1, -1, -5, -2, 1, 2, 4, 3, 0, -1, -1, -2, -1, -4,
-7, -2, 2, 0, 2, 3, 0, 0, 5, 1, -6, -4, -3, -4, 0, 1, -2, -1, 3, 4, 3, 0, -3,
-4, -2, -3, -2, -2, -4, -1, 6, 3, -1, 2, 0, -4, 0, 0, -7, -6, -1, -1, 1, 3, 0,
-1, 2, 2, -1, -3, -6, -5, -1, -1, -2, 1, 0, -1, 5, 5, -3, -4, -1, -4, -3, 0, -4,
-5, 1, 4, 2, 2, 1, -2, 0, 1, -3, -4, -4, -4, 1, 3, 0, 1, 3, 0, 1, 3, -4, -7, -2,
-1, -3, 0, 1, -2, 2, 5, 2, -1, -1, -2, -2, -1, -3, -3, -1, 0, 3, 5, 1, -1, 2, 0,
-3, -1, -3, -6, -2, 2, 0, 0, 3, 2, 1, 3, 0, -4, -3, -3, -2, -1, -1, -1, 2, 3, 2,
3, 0, -3, -1, 0, -5, -4, -1, -2, -1, 5, 3, -1, 2, 2, 0, -1, -2, -5, -3, -1, 0,
1, 1, 0, 3, 5, 0, -1, -1, -4, -4, 1, -1, -4, 1, 4, 2, 4, 4, -2, -2, 1, -1, -3,
-3, -3, -1, 3, 3, 2, 2, 0, 1, 3, -1, -5, -3, -1, -2, 2, 2, -1, 1, 6, 3, 0, 0,
-3, -4, -1, 0, -3, -2, 0, 2, 4, 3, 0, 0, -1, -2, 0, -2, -6, -3, 2, 1, 1, 4, 0,
-1, 3, 2, -3, -4, -3, -3, 0, 2, 0, 0, 2, 2, 3, 1, -3, -3, -1, -2, -2, 0, -3, -1,
4, 4, 0, 1, 0, -3, -1, 0, -4, -5, -1, 0, 1, 3, 1, 0, 1, 1, 0, -1, -4, -4, 0, 0,
-1, 1, 1, -1, 3, 4, -2, -3, -1, -3, -3, 0, -2, -3, 1, 2, 2, 2, 0, -1, 0, -1, -3,
-2, -3, -4, 1, 3, 0, 0, 2, 0, -1, 1, -2, -5, -2, -1, -2, 0, 1, -1, 1, 3, 0, -1,
-1, -3, -2, -1, -3, -3, 0, 0, 1, 3, 0, -2, 1, 1, -3, -2, -2, -4, -2, 2, 0, -1,
1, 1, 0, 1, -1, -3, -2, -2, -1, 0, -2, -2, 1, 2, 0, 1, 0, -3, -2, 1, -2, -4, -1,
-1, 0, 3, 2, -1, 0, 1, 0, 0, -2, -4, -2, 0, 0, 1, 0, -1, 1, 3, 0, -1, -1, -3,
-3, 1, 0, -3, 0, 2, 1, 2, 1, -2, -2, 0, -1, -1, -2, -3, -1, 2, 1, 1, 1, -1, -1,
2, 0, -4, -2, -1, -2, 1, 2, -1, 0, 3, 2, 0, 0, -2, -3, -1, -1, -1, -1, -1, 0, 3,
2, -1, 0, 0, -2, 0, 0, -4, -3, 1, 0, 0, 2, 0, -1, 1, 1, -2, -2, -2, -2, 0, 0, 0,
0, 1, 1, 2, 1, -2, -2, 0, -2, -2, 0, -1, -2, 2, 3, 0, 1, 0, -1, -1, 0, -2, -3,
-1, 0, 1, 1, 0, 0, 1, 0, 0, 0, -3, -3, 0, 0, -1, 0, 1, 0, 1, 2, -1, -2, -1, -1,
-2, -1, -1, -1, 0, 1, 1, 1, 0, -1, 0, 0, -2, -1, -2, -2, 0, 2, 0, 0, 2, 0, 0, 0,
-2, -3, -2, -1, -1, -1, 0, 0, 1, 2, 0, 0, -1, -2, -1, 0, -2, -2, 0, 0, 0, 2, 0,
-2, 0, 1, -2, -1, -2, -3, -1, 1, 1, 0, 0, 0, 1, 1, -1, -2, -2, -2, -1, 1, -1,
-2, 1, 2, 0, 1, 0, -3, -2, 0, -1, -3, -1, -1, 0, 1, 1, -1, -1, -1, -1, 0, -2,
-3, -2, 0, 0, 1, 1, -1, 0, 2, 0, -2, -1, -2, -2, 0, 0, -2, -1, 0, 0, 1, 1, -1,
-2, -1, -1, -1, -1, -2, -1, 1, 0, 0, 1, -1, -1, 1, 0, -3, -2, -1, -1, 0, 1, 0,
-1, 1, 1, 0, -1, -2, -2, -1, -1, -1, 0, -1, -1, 1, 1, -1, 0, -1, -2, -1, 0, -2,
-2, 0, 0, 0, 1, 0, -1, 0, 0, -1, -1, -2, -2, 0, 0, -1, 0, 0, 0, 1, 1, -2, -2, 0,
-1, -1, 0, -1, -1, 1, 1, 0, 0, 0, -1, -1, 0, -1, -2, -1, 0, 0, 1, 0, 0, 1, 0, 0,
0, -1, -2, 0, 0, -1, -1, 0, 0, 1, 1, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 1,
0, -1, 0, 0, -1, -1, -1, -2, 0, 1, 0, -1, 0, 0, 0, 0, -1, -2, -1, -1, 0, 0, 0,
-1, 0, 1, 0, 0, -1, -2, -1, 0, -1, -2, 0, 0, 0, 1, 0, -1, 0, 0, 0, -1, -1, -2,
-1, 0, 0, 0, 0, -1, 0, 1, 0, -1, -1, -1, -1, 0, 0, -1, 0, 1, 0, 0, 0, -1, -1, 0,
-1, -1, -1, -1, 0, 1, 0, 0, 0, 0, -1, 0, -1, -2, -1, 0, -1, 0, 0, -1, 0, 1, 0,
-1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1,
-1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, -2, -1, 0, -1, -1,
0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1,
-1, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1,
-1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0,
0, 0, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0,
-1, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1,
-1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0,
-1, -1, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0,
0, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1,
0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1,
0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0,
-1, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, };

#endif /* DDMFIVE_H_ */
