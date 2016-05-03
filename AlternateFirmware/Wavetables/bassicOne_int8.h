#ifndef BASSICONE_H_
#define BASSICONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define BASSICONE_NUM_CELLS 7713
#define BASSICONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) BASSICONE_DATA [] = {0,
-1, 0, 2, 3, -1, -4, -2, 3, 1, -4, -3, 0, 1, -1, -3, -1, -1, -2, -3, -3, -1, -1,
-1, 0, 1, 1, 1, 1, 0, -1, 0, 1, 1, 0, -1, 0, -1, -1, -2, -1, -2, -2, -1, -1, -1,
-2, -3, -2, -3, -2, -1, -1, 0, -1, -2, -2, 1, 1, -1, -2, -3, -6, -8, -7, -6, -6,
-4, -1, -2, -5, -7, -6, -7, -9, -11, -10, -9, -5, -1, 5, 8, 7, 8, 8, 7, 7, 9,
12, 13, 11, 9, 7, 4, 2, 2, 0, -5, -10, -13, -15, -15, -10, -5, -1, -1, 0, 2, 3,
4, 5, 6, 10, 13, 11, 9, 7, 7, 7, 4, 1, -1, -2, -3, -2, -1, 0, 1, 2, 1, 0, 0, 3,
6, 6, 4, 3, 1, 0, 0, -1, -2, -1, 1, 1, -1, -4, -3, -2, -1, -1, -1, -2, -1, 1, 3,
4, 4, 3, 3, 4, 3, 1, 0, 0, 1, 2, 1, 1, 4, 5, 3, 2, 2, 3, 4, 3, 3, 4, 4, 0, -4,
-3, -2, -6, -13, -14, -12, -13, -18, -21, -21, -20, -18, -17, -18, -21, -23,
-22, -20, -18, -15, -6, 9, 21, 33, 41, 40, 37, 35, 29, 23, 22, 22, 17, 11, 5,
-8, -21, -30, -37, -43, -47, -45, -41, -32, -21, -8, 2, 10, 17, 19, 19, 22, 26,
23, 21, 19, 18, 16, 12, 7, 4, 0, -3, -1, 2, 3, 1, 3, 4, 0, -6, -9, -14, -18,
-15, -10, -12, -16, -16, -13, -9, -4, 3, 9, 15, 24, 31, 38, 43, 45, 42, 36, 29,
18, 9, 1, -8, -17, -25, -30, -36, -40, -42, -44, -44, -43, -39, -36, -29, -22,
-15, -9, -2, 3, -1, -8, -12, -16, -18, -15, -1, 22, 43, 60, 71, 68, 58, 47, 27,
18, 18, 20, 18, 9, -3, -25, -48, -61, -65, -69, -68, -67, -62, -48, -26, -2, 26,
49, 60, 60, 51, 44, 38, 35, 38, 39, 33, 26, 12, -4, -16, -27, -28, -23, -13, -8,
-7, -5, -2, -4, -8, -10, -13, -10, -7, -4, 1, 3, 8, 12, 12, 8, 3, -5, -15, -21,
-22, -22, -26, -30, -45, -61, -65, -62, -51, -30, 11, 39, 54, 63, 66, 64, 67,
64, 54, 44, 25, 11, -7, -19, -27, -31, -35, -45, -58, -64, -64, -58, -38, -10,
17, 38, 49, 45, 37, 25, 10, -5, -9, -11, -16, -16, -11, 0, 11, 22, 34, 48, 57,
64, 67, 66, 59, 51, 41, 27, 11, -9, -29, -51, -66, -74, -78, -79, -87, -95, -99,
-101, -104, -94, -73, -53, -17, 28, 66, 90, 109, 117, 119, 116, 112, 98, 79, 67,
62, 54, 40, 5, -50, -85, -101, -109, -109, -105, -101, -93, -83, -65, -46, -12,
21, 34, 34, 30, 20, 13, 19, 32, 43, 49, 61, 60, 63, 72, 78, 78, 74, 72, 65, 50,
38, 12, -24, -58, -82, -100, -110, -114, -117, -119, -121, -119, -121, -115,
-95, -12, 80, 114, 120, 118, 119, 118, 118, 114, 109, 104, 95, 73, 42, 6, -16,
-38, -53, -71, -94, -102, -111, -112, -106, -87, -63, -36, -18, -24, -44, -51,
-51, -44, -25, -3, 20, 40, 66, 85, 101, 109, 114, 111, 100, 74, 25, -42, -93,
-112, -121, -119, -115, -84, -12, 73, 94, 77, 34, 9, -1, 4, 45, 65, 57, 25, 17,
0, 20, 47, 52, 7, -41, -77, -102, -85, -31, 49, 87, 104, 93, 64, 23, 4, -24,
-25, -16, -36, -62, -74, -73, -76, -60, -59, -76, -102, -115, -121, -119, -105,
-15, 97, 121, 117, 120, 118, 108, 40, -5, 35, 81, 98, 94, 64, 1, -42, -44, -40,
-51, -74, -110, -121, -120, -120, -106, -11, 91, 107, 92, 29, -47, -74, -43, 25,
75, 80, 63, 3, -69, -85, -88, -99, -110, -118, -113, -78, 46, 122, 116, 122,
116, 121, 66, -4, -5, 31, 67, 58, 15, -36, -71, -69, -59, -60, -102, -122, -118,
-121, -119, -107, 21, 115, 118, 119, 117, 99, 70, 39, 15, 18, 22, -6, -53, -72,
-86, -112, -119, -121, -118, -123, -90, 72, 126, 115, 123, 115, 121, 75, 51, 62,
57, 23, -56, -97, -96, -67, 14, 62, 41, -83, -124, -119, -119, -122, -73, 79,
120, 118, 120, 116, 104, 89, 79, 40, -48, -106, -118, -122, -118, -123, -103,
-68, -31, -3, 62, 116, 119, 119, 119, 118, 118, 72, 66, 100, 88, 51, -47, -85,
-99, -93, -50, -36, -77, -120, -119, -121, -119, -111, 14, 113, 118, 119, 119,
117, 118, 114, 108, 37, -95, -123, -118, -122, -118, -123, -115, -79, 26, 116,
119, 119, 119, 119, 118, 119, 110, 112, 109, 95, 11, -86, -100, -103, -77, -40,
-24, -83, -126, -116, -125, -115, -127, -60, 82, 114, 117, 116, 106, 102, 94,
79, -28, -125, -114, -127, -112, -128, -53, 115, 118, 119, 119, 118, 119, 117,
120, 116, 118, 47, -74, -120, -120, -120, -92, -15, -58, -117, -118, -122, -118,
-122, -117, -113, 15, 120, 116, 120, 118, 118, 120, 117, 111, -29, -121, -121,
-118, -124, -114, -128, -49, 118, 117, 119, 119, 118, 119, 117, 119, 117, 119,
104, -37, -128, -115, -125, -106, -62, -57, -112, -121, -120, -121, -117, -126,
-74, 83, 123, 113, 124, 99, 106, 95, 116, 7, -114, -124, -114, -128, -67, 108,
122, 116, 122, 115, 122, 114, 123, 112, 124, 47, -99, -124, -119, -122, -119,
-121, -120, -121, -120, -119, -121, -118, -119, 5, 122, 115, 122, 116, 122, 115,
123, 112, 127, 25, -128, -114, -125, -117, -123, -112, 68, 127, 110, 125, 113,
123, 113, 123, 113, 119, 27, -99, -126, -116, -127, -78, 62, 77, -29, -114,
-122, -120, -121, -120, -118, -94, -33, 45, 71, 80, 103, 121, 63, -70, -124,
-119, -118, -123, 15, 127, 109, 126, 113, 123, 115, 121, 115, 122, 94, -75,
-126, -118, -122, -120, -121, -120, -120, -121, -119, -121, -118, -119, -47, 31,
56, 88, 106, 117, 116, 121, 117, 110, -67, -127, -118, -120, -122, -102, 90,
126, 114, 123, 114, 123, 114, 124, 112, 127, 82, -100, -125, -117, -123, -118,
-107, -111, -124, -117, -122, -117, -122, -117, -121, -117, -103, 34, 123, 117,
121, 118, 120, 119, 119, 86, -53, -100, -96, -26, 113, 116, 121, 117, 120, 118,
118, 119, 58, -50, -115, -121, -120, -121, -120, -120, -120, -120, -120, -120,
-119, -120, -119, -121, -82, 58, 122, 117, 121, 118, 120, 118, 100, -31, -112,
-110, -84, 44, 120, 119, 119, 120, 117, 121, 115, 123, 111, 127, 36, -127, -116,
-124, -118, -121, -119, -120, -120, -119, -121, -117, -123, -115, -124, 44, 127,
112, 125, 115, 123, 114, 125, 111, 127, 23, -128, -110, -128, -113, -128, -85,
95, 124, 116, 120, 118, 115, 92, 106, 119, 116, 121, 63, -32, -94, -101, -114,
-121, -121, -119, -121, -119, -121, -119, -120, -116, 68, 127, 110, 126, 113,
124, 114, 123, 115, 123, 100, -33, -124, -116, -123, -118, -121, -119, -120,
-120, -118, -122, -115, -120, 14, 127, 115, 121, 119, 118, 121, 115, 126, 64,
-96, -123, -118, -122, -118, -122, -118, -111, 48, 120, 118, 120, 119, 119, 118,
119, 117, 121, 115, 120, -28, -127, -116, -123, -119, -120, -121, -117, -124,
-113, -128, -29, 120, 117, 120, 119, 118, 120, 117, 120, 117, 86, -9, -104,
-124, -118, -122, -119, -120, -120, -119, -113, 34, 125, 116, 121, 118, 119,
120, 117, 121, 114, 126, 70, -99, -122, -120, -121, -120, -120, -120, -119,
-121, -118, -120, -27, 50, 71, 115, 117, 122, 116, 122, 115, 117, -38, -127,
-117, -121, -121, -116, -128, -16, 127, 111, 125, 114, 122, 116, 121, 117, 120,
117, 119, 111, -23, -99, -110, -126, -117, -124, -117, -123, -118, -122, -117,
-122, -117, -124, -101, 90, 126, 115, 123, 116, 122, 116, 122, 115, 122, 115,
122, 71, 27, 59, 105, 119, 118, 118, 110, 14, -82, -115, -122, -120, -122, -120,
-122, -119, -122, -118, -123, -117, -124, -115, -126, -110, -128, -14, 127, 111,
125, 115, 122, 116, 121, 116, 120, 116, 120, 116, 122, 104, 96, 51, -87, -121,
-122, -119, -122, -119, -123, -118, -123, -116, -125, -112, -128, -39, 122, 114,
123, 116, 121, 117, 119, 118, 119, 118, 118, 118, 118, 118, 117, 118, 117, 118,
111, 42, -99, -123, -121, -121, -121, -121, -121, -121, -120, -122, -119, -123,
-117, -125, -113, -128, 25, 127, 108, 126, 113, 123, 114, 122, 115, 121, 116,
120, 116, 119, 117, 118, 108, -70, -128, -115, -126, -117, -124, -118, -124,
-118, -123, -118, -124, -105, 15, 107, 119, 118, 118, 118, 118, 118, 118, 117,
118, 117, 119, 116, 119, 115, 119, 115, 120, 113, 123, 47, -87, -120, -123,
-121, -123, -120, -123, -119, -124, -118, -125, -116, -128, -111, -128, -26,
127, 109, 124, 114, 121, 115, 120, 115, 119, 115, 120, 114, 121, 111, 127, 49,
-122, -119, -124, -120, -123, -121, -122, -121, -121, -121, -121, -121, -115,
-20, 107, 118, 118, 116, 118, 117, 118, 117, 118, 117, 117, 117, 117, 117, 116,
117, 116, 117, 115, 117, 75, -57, -128, -118, -126, -119, -126, -118, -126,
-118, -126, -117, -127, -115, -128, -83, 103, 120, 115, 119, 116, 118, 116, 117,
116, 116, 117, 115, 118, 113, 121, 108, 127, 44, -128, -118, -126, -121, -123,
-122, -121, -123, -120, -125, -118, -125, -12, 107, 115, 103, 111, 118, 116,
116, 116, 116, 116, 116, 116, 115, 116, 115, 116, 115, 115, 115, 115, 107, 38,
-98, -126, -121, -125, -121, -125, -120, -126, -119, -127, -117, -128, -112,
-128, -4, 127, 109, 121, 113, 118, 115, 116, 116, 115, 116, 115, 115, 115, 115,
116, 112, 118, -65, -128, -114, -128, -117, -128, -118, -127, -118, -127, -118,
-116, 10, 77, 56, -30, -76, 31, 106, 118, 114, 117, 114, 117, 114, 117, 113,
117, 113, 117, 111, 109, 97, 107, 96, 102, 0, -125, -122, -124, -124, -123,
-125, -122, -125, -121, -125, -121, -124, -114, 65, 127, 108, 121, 111, 119,
112, 117, 113, 115, 115, 113, 117, 111, 119, 106, 127, 52, -123, -124, -122,
-127, -120, -128, -117, -128, -113, -128, -41, 106, 93, -3, -71, -83, -79, 61,
123, 110, 118, 112, 116, 114, 114, 115, 112, 119, 65, -32, -86, -17, 110, 113,
115, 113, 114, 102, -14, -114, -124, -124, -123, -125, -122, -126, -120, -128,
-116, -128, -26, 127, 106, 120, 111, 117, 112, 115, 113, 114, 114, 113, 115,
111, 117, 108, 120, -55, -128, -116, -128, -119, -128, -118, -128, -116, -128,
-10, 116, 114, 107, 60, -32, -80, -85, -89, -78, -100, -99, -51, 78, 120, 111,
117, 112, 117, 106, 108, 115, 113, 114, 112, 115, 111, 116, 66, -70, -114, -124,
-126, -122, -127, -121, -128, -120, -128, -116, -128, -52, 114, 112, 116, 113,
114, 114, 113, 114, 112, 115, 111, 115, 109, 118, 105, 126, -28, -128, -116,
-128, -121, -127, -123, -124, -125, -122, -125, -34, 82, 101, 115, 64, 7, -74,
-126, -118, -128, -111, -112, -4, 95, 99, 116, 114, 113, 115, 112, 115, 111,
115, 111, 115, 111, 115, 97, -67, -128, -120, -128, -122, -126, -124, -124,
-125, -122, -127, -118, -128, -44, 120, 109, 117, 112, 115, 113, 113, 114, 112,
115, 111, 116, 109, 117, 107, 119, -42, -128, -119, -128, -122, -127, -122,
-126, -122, -127, -121, -116, 17, 117, 100, -3, -110, -124, -124, -124, -121,
-110, -49, 61, 112, 114, 115, 114, 115, 113, 115, 113, 114, 114, 112, 115, 109,
119, -27, -128, -117, -128, -120, -127, -122, -125, -124, -123, -125, -121,
-127, -118, -128, 13, 126, 109, 119, 112, 116, 113, 115, 113, 115, 113, 115,
112, 115, 111, 116, 108, 122, 44, -105, -122, -126, -124, -125, -124, -124,
-124, -123, -124, -123, -124, -123, -124, -123, -123, -124, -114, -78, 29, 113,
114, 116, 115, 115, 115, 114, 116, 113, 117, 111, 118, 108, 123, 60, -105, -125,
-123, -125, -123, -125, -122, -125, -122, -124, -122, -124, -122, -124, -121,
-124, -121, -124, -121, -112, 13, 118, 113, 118, 114, 117, 114, 117, 114, 116,
114, 116, 113, 117, 112, 120, 72, -84, -126, -122, -124, -122, -124, -122, -124,
-121, -124, -121, -125, -120, -126, -117, -128, -10, 118, 113, 118, 115, 117,
116, 116, 116, 115, 116, 114, 118, 98, 53, 48, 62, 81, 90, 46, -78, -128, -120,
-126, -121, -125, -121, -124, -121, -124, -121, -124, -121, -123, -121, -123,
-120, -125, -102, -18, 66, 115, 117, 117, 117, 116, 117, 116, 116, 116, 116,
116, 116, 116, 115, 94, -21, -117, -121, -124, -121, -124, -122, -123, -122,
-122, -122, -122, -122, -121, -122, -121, -123, -120, -106, -23, 53, 91, 116,
116, 117, 117, 116, 118, 116, 117, 116, 117, 116, 117, 116, 116, 101, -39, -116,
-114, -127, -119, -125, -120, -124, -120, -123, -121, -122, -121, -122, -121,
-122, -103, 15, 91, 107, 119, 117, 118, 117, 117, 117, 117, 117, 116, 117, 99,
-4, -82, -114, -124, -121, -123, -121, -122, -119, -100, -100, -118, -111, -110,
-82, -39, 12, 44, 28, 17, -1, -21, 14, 29, 46, 39, 6, -23, -42, -24, 17, 86,
100, 110, 108, 112, 102, 85, 86, -28, -112, -119, -123, -120, -122, -121, -121,
-111, -86, -18, 38, 75, 104, 111, 111, 115, 119, 116, 118, 116, 118, 113, 119,
109, 85, 51, -19, -88, -120, -122, -122, -121, -122, -121, -122, -120, -120,
-114, -112, -93, -7, 64, 108, 117, 118, 117, 114, 115, 90, 80, 79, 57, 19, 45,
14, -14, 0, -31, -13, 29, 69, 105, 108, 89, 36, -38, -88, -122, -121, -122,
-121, -122, -120, -117, -48, 36, 55, 93, 87, 46, 51, 42, 34, 38, 35, 14, 14, 52,
59, 87, 106, 101, 93, 95, 45, 12, -5, -62, -71, -77, -83, -79, -21, -10, -63,
-95, -119, -122, -121, -120, -111, -82, -92, -92, -82, -68, -55, 2, 79, 97, 118,
116, 114, 114, 116, 118, 116, 118, 113, 114, 113, 106, 93, 46, -35, -99, -124,
-120, -122, -121, -121, -122, -120, -123, -110, -94, -43, -8, 7, -15, -41, -25,
-10, 71, 106, 105, 117, 116, 119, 115, 119, 115, 120, 106, 69, 22, -25, -31, -6,
32, 9, -54, -107, -125, -119, -123, -119, -123, -117, -121, -120, -121, -121,
-118, -97, -47, -16, 35, 92, 114, 119, 117, 118, 118, 118, 118, 117, 118, 117,
113, 95, 48, -37, -107, -121, -122, -121, -121, -121, -121, -121, -121, -121,
-120, -119, -107, -102, -102, -102, -104, -110, -94, -41, 44, 106, 118, 119,
118, 119, 118, 119, 117, 119, 109, 83, 75, 80, 78, 79, 56, 14, -40, -97, -117,
-122, -120, -122, -120, -121, -120, -121, -119, -121, -111, -87, -54, 12, 55,
88, 110, 118, 119, 118, 119, 117, 119, 117, 119, 117, 109, 42, -38, -70, -101,
-117, -121, -120, -121, -120, -121, -119, -113, -89, -70, -68, -49, -46, -73,
-95, -90, -76, -32, 33, 76, 103, 118, 119, 119, 119, 118, 112, 102, 97, 78, 50,
44, 41, 22, 0, -10, -41, -76, -96, -116, -121, -120, -120, -120, -120, -120,
-110, -87, -55, -7, 60, 109, 119, 119, 119, 119, 119, 118, 119, 117, 113, 98,
70, 2, -65, -86, -96, -97, -101, -100, -97, -98, -96, -101, -104, -99, -99,
-101, -106, -113, -116, -106, -81, -37, 35, 90, 109, 115, 118, 119, 117, 113,
111, 111, 110, 107, 105, 96, 75, 39, -10, -49, -76, -101, -116, -120, -121,
-120, -120, -120, -117, -109, -101, -97, -79, -71, -38, 16, 44, 66, 81, 98, 107,
115, 118, 118, 117, 111, 108, 105, 104, 100, 92, 52, -9, -61, -96, -108, -110,
-112, -114, -116, -115, -111, -102, -96, -84, -82, -88, -81, -65, -15, 41, 72,
95, 96, 91, 90, 90, 94, 94, 100, 99, 86, 80, 73, 71, 63, 35, -10, -65, -99,
-117, -120, -120, -120, -120, -118, -107, -77, -17, 50, 92, 105, 112, 108, 102,
95, 82, 77, 72, 32, 8, -8, -35, -39, -29, -9, -6, 12, 28, 24, 24, 16, 24, 31, 1,
-37, -79, -98, -98, -104, -108, -112, -117, -112, -105, -90, -46, 10, 71, 103,
113, 119, 119, 120, 117, 111, 101, 90, 91, 74, 41, -7, -58, -89, -110, -115,
-116, -117, -115, -109, -97, -70, -27, 4, 31, 58, 67, 75, 70, 61, 56, 37, 28,
16, 15, 23, 20, 11, -24, -42, -42, -45, -30, -21, -17, -4, 7, 23, 42, 59, 64,
60, 41, 21, 2, -22, -28, -45, -57, -65, -77, -73, -69, -48, -19, -1, 25, 42, 43,
50, 56, 45, 45, 37, 20, 5, -11, -9, -19, -13, -15, -32, -50, -66, -73, -79, -69,
-66, -40, 10, 54, 87, 102, 107, 104, 89, 62, 37, 34, 17, 7, 0, -30, -51, -67,
-75, -81, -78, -70, -78, -82, -80, -79, -47, -9, 24, 61, 72, 59, 51, 44, 31, 37,
31, 7, -16, -37, -46, -40, -2, 33, 49, 62, 48, 32, 33, 35, 46, 63, 68, 66, 58,
31, 1, -15, -34, -59, -79, -98, -110, -111, -110, -112, -114, -109, -91, -48,
19, 79, 107, 118, 117, 115, 107, 88, 75, 69, 63, 53, 28, -21, -63, -86, -96,
-83, -56, -22, 7, 17, 4, -23, -32, -24, -7, 22, 23, 10, -17, -43, -41, -25, -6,
9, -9, -30, -47, -63, -52, -25, 8, 30, 44, 53, 45, 50, 72, 89, 93, 90, 76, 38,
18, 1, -10, -19, -40, -56, -77, -91, -102, -108, -105, -95, -69, -34, -3, 12,
27, 48, 56, 72, 74, 68, 77, 80, 83, 79, 61, 35, -1, -28, -34, -18, -5, -7, -4,
-12, -35, -42, -32, -27, -17, -9, -23, -38, -43, -52, -66, -67, -58, -44, -14,
24, 47, 49, 57, 67, 64, 68, 56, 52, 46, 33, 32, 13, 7, 2, 4, 5, -4, -4, -10,
-16, -35, -56, -68, -82, -85, -85, -79, -58, -30, 14, 47, 65, 77, 69, 57, 41,
25, 18, 27, 50, 76, 88, 87, 78, 47, 14, -11, -37, -58, -81, -94, -101, -97, -73,
-52, -11, 2, -15, -33, -52, -55, -42, -12, 14, 47, 71, 72, 68, 68, 71, 74, 74,
60, 39, 12, -15, -26, -30, -28, -14, -6, 3, 12, 25, 38, 41, 39, 14, -36, -80,
-103, -110, -105, -94, -71, -32, 5, 29, 50, 73, 87, 87, 82, 68, 46, 28, 36, 60,
69, 65, 48, 17, -21, -41, -40, -48, -57, -67, -79, -78, -79, -59, -33, -15, -7,
-24, -39, -52, -51, -38, -21, -1, 35, 68, 89, 102, 105, 103, 90, 78, 50, 35, 22,
10, 14, 4, 2, -8, -25, -41, -49, -50, -63, -72, -82, -93, -89, -82, -77, -60,
-41, -22, -1, 25, 43, 51, 57, 56, 44, 31, 42, 62, 81, 93, 98, 99, 91, 79, 68,
46, 17, -6, -38, -60, -79, -95, -104, -107, -107, -108, -99, -90, -79, -71, -59,
-39, -19, 11, 39, 72, 90, 98, 106, 107, 103, 99, 100, 90, 86, 77, 63, 53, 35,
27, 22, 4, -25, -52, -74, -96, -106, -110, -114, -116, -114, -113, -109, -94,
-70, -36, 7, 35, 50, 73, 89, 99, 108, 111, 111, 109, 107, 106, 104, 99, 91, 73,
40, 1, -36, -66, -83, -92, -97, -99, -100, -96, -96, -95, -90, -84, -76, -72,
-64, -54, -44, -17, 19, 53, 81, 94, 98, 98, 92, 77, 77, 80, 78, 86, 90, 85, 73,
57, 41, 29, 25, 8, -21, -50, -86, -104, -112, -116, -114, -112, -104, -99, -88,
-65, -36, 4, 35, 59, 70, 72, 75, 71, 78, 83, 92, 98, 99, 101, 99, 92, 82, 60,
33, 0, -34, -55, -69, -70, -75, -78, -78, -89, -94, -93, -99, -99, -97, -91,
-72, -44, -1, 49, 76, 88, 95, 95, 94, 91, 94, 93, 89, 83, 74, 57, 42, 16, -8,
-22, -41, -46, -56, -61, -57, -56, -50, -45, -40, -46, -53, -52, -53, -53, -50,
-41, -24, 4, 25, 43, 49, 51, 53, 54, 65, 71, 81, 80, 66, 44, 19, 3, 0, 1, -7,
-21, -30, -42, -55, -48, -53, -58, -57, -59, -57, -49, -30, -8, 15, 29, 34, 37,
36, 37, 44, 52, 54, 53, 43, 34, 30, 32, 44, 51, 47, 33, 13, -6, -23, -37, -49,
-70, -83, -86, -80, -65, -48, -30, -13, -3, -5, -3, 6, 13, 31, 44, 47, 45, 38,
39, 44, 55, 70, 78, 78, 67, 49, 34, 22, 12, 5, -8, -22, -30, -41, -51, -61, -77,
-87, -93, -97, -98, -91, -74, -49, -14, 25, 51, 69, 82, 86, 80, 71, 70, 67, 71,
75, 79, 80, 75, 75, 64, 44, 13, -28, -58, -79, -89, -92, -92, -88, -82, -75,
-66, -53, -37, -19, -2, 12, 14, 17, 18, 8, 2, 1, 4, 18, 39, 60, 78, 89, 97, 97,
95, 92, 83, 72, 56, 34, 4, -30, -57, -78, -91, -100, -103, -102, -105, -103,
-100, -90, -73, -48, -7, 34, 64, 83, 91, 93, 93, 89, 80, 68, 53, 43, 42, 46, 54,
54, 54, 54, 45, 29, 2, -28, -57, -77, -83, -85, -84, -74, -69, -68, -70, -70,
-67, -64, -50, -33, -22, -10, 4, 18, 43, 74, 98, 111, 114, 114, 108, 100, 84,
64, 48, 27, 12, -7, -26, -45, -58, -61, -70, -83, -92, -99, -102, -102, -95,
-80, -57, -28, -5, 17, 26, 37, 47, 53, 56, 56, 57, 53, 61, 64, 63, 67, 69, 75,
83, 82, 72, 49, 21, -12, -33, -44, -56, -60, -62, -66, -70, -73, -74, -76, -74,
-76, -82, -79, -72, -51, -16, 27, 64, 87, 100, 106, 105, 100, 91, 78, 58, 34,
25, 19, 10, 14, 10, -6, -23, -36, -51, -64, -72, -78, -86, -89, -82, -64, -37,
-10, 17, 35, 42, 44, 42, 37, 36, 38, 33, 34, 32, 29, 34, 38, 46, 58, 67, 67, 59,
39, 13, -12, -32, -45, -52, -50, -58, -65, -63, -61, -55, -52, -51, -51, -53,
-52, -45, -23, 3, 38, 68, 86, 96, 101, 103, 99, 89, 77, 55, 35, 21, 3, -6, -27,
-45, -58, -72, -78, -85, -82, -84, -77, -61, -49, -34, -16, 4, 25, 44, 59, 66,
62, 53, 39, 27, 16, 10, 18, 29, 43, 49, 54, 54, 49, 44, 24, 4, -17, -31, -33,
-31, -26, -22, -21, -30, -38, -45, -57, -62, -69, -73, -69, -61, -41, -4, 34,
67, 85, 91, 91, 89, 85, 76, 63, 46, 22, 0, -11, -20, -20, -15, -12, -10, -13,
-22, -30, -37, -46, -51, -54, -53, -46, -34, -23, -6, 15, 29, 35, 31, 22, 7, 1,
6, 8, 14, 23, 30, 33, 41, 54, 66, 68, 58, 43, 21, -3, -12, -11, -11, -16, -20,
-24, -36, -43, -44, -44, -42, -44, -45, -51, -58, -55, -42, -18, 9, 32, 51, 60,
67, 69, 68, 60, 51, 42, 31, 32, 30, 26, 20, 13, 2, -13, -21, -28, -33, -38, -44,
-44, -48, -49, -42, -33, -16, 3, 25, 37, 40, 40, 38, 25, 10, 2, -2, -5, -11, -7,
-7, -1, 11, 22, 35, 40, 45, 39, 29, 21, 12, 2, -2, -8, -14, -26, -41, -45, -46,
-39, -28, -21, -23, -27, -27, -26, -25, -14, 6, 32, 59, 74, 80, 78, 67, 56, 44,
30, 23, 13, -4, -22, -35, -43, -47, -46, -45, -44, -43, -42, -35, -28, -22, -12,
1, 11, 20, 30, 32, 34, 39, 42, 43, 42, 38, 24, 6, -9, -13, -8, -2, 7, 16, 23,
31, 35, 33, 19, 3, -15, -38, -53, -59, -65, -63, -55, -39, -21, -8, 1, 5, 4, 8,
17, 27, 35, 48, 57, 57, 54, 50, 47, 40, 37, 30, 19, 11, -1, -10, -19, -27, -29,
-33, -31, -25, -30, -34, -35, -36, -37, -33, -27, -24, -22, -20, -17, -9, 4, 22,
39, 51, 54, 51, 47, 39, 33, 29, 26, 28, 32, 39, 46, 48, 45, 41, 35, 18, -12,
-42, -67, -84, -91, -87, -79, -65, -48, -35, -23, -18, -10, 3, 22, 40, 50, 52,
48, 38, 25, 19, 23, 33, 42, 43, 41, 38, 36, 37, 40, 40, 30, 13, -7, -27, -37,
-41, -40, -37, -35, -36, -38, -42, -48, -49, -49, -48, -41, -27, -6, 14, 26, 32,
35, 36, 40, 43, 49, 55, 57, 58, 50, 47, 47, 43, 41, 29, 13, -14, -38, -51, -62,
-60, -57, -48, -43, -39, -35, -36, -27, -23, -15, -12, -16, -15, -15, -4, 15,
38, 59, 69, 70, 60, 49, 43, 37, 33, 29, 28, 23, 12, 5, -2, -12, -16, -17, -19,
-21, -26, -37, -48, -57, -61, -61, -58, -51, -40, -27, -11, 2, 13, 25, 35, 41,
45, 50, 56, 61, 62, 65, 62, 54, 47, 38, 27, 8, -12, -29, -43, -50, -55, -56,
-49, -38, -29, -18, -8, -5, -4, -7, -11, -21, -34, -40, -38, -24, 2, 28, 51, 58,
55, 49, 34, 20, 14, 13, 15, 19, 23, 28, 31, 34, 35, 32, 22, 6, -13, -36, -53,
-60, -62, -57, -42, -31, -23, -19, -18, -17, -11, -1, 4, 13, 15, 13, 15, 16, 26,
42, 54, 58, 55, 45, 26, 8, -5, -8, -9, -5, -3, -2, 1, -5, -9, -8, -11, -7, -7,
-19, -34, -49, -55, -55, -44, -26, -6, 15, 26, 31, 35, 41, 46, 47, 45, 33, 20,
4, -9, -12, -9, -5, 4, 16, 17, 13, 3, -10, -18, -26, -26, -19, -5, 10, 16, 17,
4, -7, -16, -17, -11, -6, -2, -9, -14, -17, -11, 2, 18, 33, 37, 32, 19, 6, -1,
-3, 4, 8, 11, 14, 14, 12, 3, -4, -11, -16, -18, -20, -23, -25, -21, -15, -6, 4,
11, 17, 17, 16, 13, 8, 8, 10, 10, 12, 10, 5, -3, -9, -10, -8, 2, 17, 29, 31, 23,
6, -14, -29, -32, -22, -6, 1, 1, -4, -11, -11, -4, 2, 8, 11, 11, 8, 5, 9, 15,
22, 29, 30, 18, 1, -13, -19, -19, -14, -10, -8, -11, -13, -10, -5, 6, 14, 17, 9,
-3, -14, -15, -12, -8, -1, 4, 4, 4, 9, 18, 25, 29, 31, 25, 19, 13, 9, 9, 9, 8,
7, 5, 1, -1, -2, -5, -13, -22, -37, -50, -56, -56, -48, -35, -22, -5, 6, 15, 24,
30, 38, 46, 52, 54, 50, 44, 36, 31, 28, 21, 15, 4, -11, -22, -26, -23, -16, -6,
1, 1, -3, -10, -15, -20, -28, -32, -37, -46, -54, -60, -61, -52, -34, -12, 12,
33, 50, 64, 74, 82, 85, 83, 78, 66, 56, 44, 26, 12, 0, -12, -23, -36, -51, -61,
-68, -73, -74, -73, -69, -63, -52, -39, -24, -8, 8, 21, 31, 40, 48, 56, 58, 58,
57, 49, 43, 36, 30, 30, 29, 24, 20, 16, 10, 4, -1, -7, -13, -16, -21, -28, -35,
-41, -50, -52, -50, -50, -46, -45, -41, -39, -36, -25, -5, 17, 36, 51, 59, 60,
58, 61, 59, 58, 56, 50, 45, 36, 29, 25, 19, 13, 3, -11, -24, -38, -46, -52, -56,
-58, -63, -66, -63, -58, -51, -38, -24, -9, 8, 21, 35, 43, 50, 54, 53, 47, 41,
35, 31, 30, 34, 37, 36, 38, 35, 28, 22, 13, 0, -16, -27, -35, -45, -51, -55,
-55, -57, -57, -53, -48, -36, -22, -8, 3, 7, 11, 15, 22, 32, 42, 50, 51, 49, 46,
45, 48, 49, 49, 42, 32, 17, 1, -11, -20, -24, -27, -33, -37, -41, -43, -46, -47,
-48, -45, -38, -28, -12, -2, 7, 14, 17, 21, 24, 30, 30, 26, 20, 13, 11, 15, 25,
33, 41, 46, 47, 41, 32, 19, 4, -12, -26, -38, -47, -51, -50, -50, -45, -37, -26,
-15, -8, 0, 1, 5, 11, 15, 17, 20, 29, 31, 32, 31, 30, 33, 33, 32, 27, 16, 4, -8,
-18, -24, -25, -21, -19, -16, -14, -15, -15, -15, -15, -12, -9, -13, -12, -14,
-13, -3, 6, 18, 26, 29, 28, 22, 18, 13, 12, 16, 21, 27, 30, 28, 23, 16, 9, 1,
-10, -22, -32, -42, -48, -51, -48, -36, -22, -5, 4, 7, 7, 3, 3, 5, 9, 13, 17,
20, 20, 19, 22, 26, 34, 37, 33, 27, 15, 3, -7, -14, -11, -5, 2, 6, 5, 3, 0, -4,
-12, -23, -30, -38, -43, -45, -49, -45, -35, -20, -12, -1, 6, 7, 14, 22, 35, 46,
52, 51, 51, 53, 53, 55, 49, 37, 24, 6, -7, -18, -25, -29, -37, -43, -52, -54,
-51, -48, -40, -31, -24, -25, -26, -23, -14, 2, 15, 25, 30, 34, 37, 39, 39, 40,
44, 39, 29, 17, 8, 4, 2, -4, -5, 3, 9, 11, 7, -2, -10, -16, -20, -26, -34, -36,
-37, -36, -33, -27, -14, 0, 6, 5, 1, -7, -9, -4, 2, 14, 26, 34, 37, 40, 39, 36,
35, 31, 22, 14, 4, -3, -8, -13, -15, -17, -20, -23, -22, -23, -25, -24, -25,
-27, -24, -19, -10, 4, 15, 23, 26, 24, 19, 10, 2, -6, -14, -16, -17, -11, 1, 13,
28, 32, 32, 29, 26, 19, 8, -1, -8, -10, -8, -7, -8, -10, -12, -14, -12, -14,
-16, -18, -22, -23, -18, -9, 3, 17, 25, 26, 25, 21, 14, 5, -2, -5, -4, 1, 5, 8,
6, 0, -6, -10, -10, -7, -4, -6, -5, -4, -5, -1, 4, 16, 24, 24, 18, 9, 4, -9,
-17, -20, -21, -22, -26, -24, -20, -11, 2, 12, 20, 25, 27, 21, 13, 6, 0, -4, -6,
-5, -1, 4, 8, 7, 3, 1, -2, -7, -10, -9, -10, -9, -7, -4, 0, 5, 15, 20, 22, 19,
9, -1, -12, -15, -12, -8, -1, 4, 3, -3, -6, -7, -8, -10, -8, -11, -16, -16, -14,
-7, 5, 20, 33, 36, 33, 22, 7, -6, -11, -13, -16, -14, -11, -7, 1, 9, 14, 13, 13,
13, 4, -6, -14, -16, -15, -13, -9, -6, -4, -4, -4, -3, 1, 5, 5, 1, -1, -1, 3, 8,
12, 16, 19, 18, 14, 11, 6, 0, -4, -11, -18, -20, -20, -16, -11, -4, 5, 14, 17,
13, 7, 2, -4, -8, -14, -17, -16, -10, -1, 6, 15, 18, 16, 12, 5, 0, -2, -2, -3,
-4, -2, 0, 2, 0, -2, 1, -3, -6, -6, -7, -10, -13, -12, -10, -5, 2, 9, 14, 18,
19, 19, 17, 15, 14, 11, 10, 4, -8, -15, -14, -10, -7, -8, -11, -15, -19, -20,
-16, -9, -2, 2, 3, 6, 9, 14, 17, 18, 19, 15, 8, -3, -11, -15, -15, -13, -11, -4,
5, 13, 18, 18, 15, 10, 9, 7, 5, 1, -2, -3, -5, -11, -18, -19, -18, -17, -15,
-16, -15, -12, -10, -4, 4, 14, 23, 27, 29, 27, 24, 18, 12, 6, 1, -3, -8, -10,
-12, -12, -11, -9, -6, -6, -7, -9, -10, -11, -10, -7, -3, 3, 5, 6, 8, 8, 7, 8,
9, 9, 4, -3, -5, -5, 1, 7, 12, 18, 19, 18, 13, 5, 1, -2, -7, -12, -16, -17, -18,
-19, -18, -15, -15, -14, -10, -8, -6, -4, 0, 2, 3, 8, 14, 20, 20, 20, 19, 20,
18, 14, 13, 14, 13, 7, 1, 0, 0, -3, -7, -8, -7, -14, -23, -27, -28, -27, -27,
-20, -11, -6, -6, -5, 2, 7, 11, 15, 15, 12, 8, 9, 13, 19, 24, 25, 27, 26, 23,
17, 9, 3, -3, -8, -12, -16, -19, -22, -25, -25, -24, -20, -14, -9, -13, -16,
-16, -15, -15, -12, -5, 1, 8, 20, 29, 34, 35, 34, 35, 31, 27, 23, 17, 9, 0, -7,
-9, -8, -7, -11, -17, -23, -27, -32, -32, -27, -20, -16, -13, -10, -5, -1, 1, 2,
4, 5, 7, 9, 10, 15, 19, 25, 29, 29, 30, 29, 25, 21, 18, 13, 8, 3, -3, -8, -16,
-23, -30, -37, -39, -39, -37, -35, -32, -26, -23, -22, -16, -6, 3, 11, 21, 28,
32, 35, 35, 39, 43, 46, 46, 40, 30, 19, 7, -4, -8, -14, -20, -25, -29, -33, -33,
-32, -29, -26, -23, -22, -23, -20, -18, -15, -9, -4, 1, 4, 8, 11, 15, 19, 24,
33, 38, 38, 36, 31, 28, 25, 23, 20, 17, 12, 5, -2, -11, -21, -31, -40, -45, -45,
-41, -42, -47, -44, -33, -22, -11, 2, 16, 23, 23, 24, 27, 32, 34, 33, 32, 34,
36, 35, 32, 27, 20, 8, -6, -17, -23, -27, -27, -25, -23, -23, -22, -22, -23,
-22, -20, -17, -18, -20, -19, -12, -1, 5, 8, 13, 18, 21, 23, 25, 28, 31, 32, 32,
30, 25, 21, 17, 14, 10, 5, -6, -18, -26, -30, -33, -34, -33, -33, -34, -35, -34,
-29, -20, -12, -2, 6, 10, 13, 17, 24, 32, 39, 39, 35, 31, 29, 27, 23, 16, 9, 2,
-5, -12, -17, -21, -22, -23, -24, -23, -20, -17, -13, -10, -9, -11, -14, -15,
-16, -14, -11, -5, 4, 10, 16, 21, 24, 26, 28, 27, 23, 19, 16, 14, 14, 14, 13,
10, 4, -4, -11, -19, -24, -26, -27, -29, -30, -30, -29, -24, -16, -9, -4, 2, 6,
11, 15, 16, 18, 21, 22, 21, 20, 18, 15, 12, 9, 4, -1, -3, -5, -5, -3, -6, -7,
-9, -10, -8, -5, 0, 1, -3, -12, -22, -30, -31, -18, -5, -2, -4, -1, 8, 17, 23,
23, 17, 14, 15, 16, 16, 16, 12, 7, 2, 0, -1, -3, -6, -11, -15, -20, -24, -25,
-23, -20, -18, -15, -10, -4, 3, 8, 12, 14, 16, 17, 15, 13, 10, 11, 11, 12, 11,
9, 6, 2, -3, -7, -8, -10, -11, -12, -15, -16, -15, -12, -5, 2, 5, 5, 3, 0, -4,
-7, -9, -9, -7, -5, -3, -1, 2, 4, 6, 11, 20, 26, 24, 18, 14, 11, 6, 2, -3, -9,
-16, -22, -24, -20, -17, -16, -16, -15, -14, -13, -11, -4, 6, 13, 16, 18, 19,
18, 15, 13, 11, 7, 3, 0, -3, -4, -3, -4, -3, -3, -5, -4, -4, -4, -4, -3, -4, -5,
-5, -5, -5, -5, -6, -6, -10, -14, -13, -9, -7, -6, 1, 9, 14, 16, 17, 17, 17, 18,
18, 17, 15, 12, 6, -1, -7, -11, -14, -16, -19, -21, -25, -27, -28, -25, -19,
-12, -5, 1, 10, 17, 20, 22, 20, 19, 17, 15, 13, 7, 1, -4, -5, -4, -1, -3, -6,
-5, -4, -5, -9, -10, -11, -10, -6, -2, 0, 1, -1, -3, -5, -5, -4, -4, -4, -5, -6,
-6, -3, 1, 6, 10, 13, 13, 10, 9, 7, 6, 5, 5, 4, 4, 3, 2, 0, -1, -2, -6, -10,
-13, -16, -19, -20, -20, -19, -15, -9, -1, 7, 12, 14, 13, 11, 9, 8, 7, 6, 3, -1,
-3, -4, -2, 2, 4, 3, 1, -1, -1, -3, -4, -2, 2, 3, 2, 1, -1, -2, -5, -7, -10,
-12, -13, -13, -10, -6, -3, 0, 2, 5, 8, 9, 10, 10, 9, 7, 6, 4, 3, 3, 2, 0, -1,
-6, -12, -15, -14, -13, -11, -10, -10, -9, -7, -2, 4, 10, 14, 15, 15, 11, 7, 6,
7, 8, 4, -1, -6, -9, -11, -11, -8, -6, -5, -6, -7, -9, -9, -7, -4, 0, 2, 4, 4,
5, 4, 5, 4, 3, 1, -1, 0, 1, 0, -1, 0, 0, -2, -4, 0, 5, 8, 7, 6, 7, 6, 2, -3, -5,
-7, -10, -15, -18, -17, -13, -11, -8, -6, -4, -3, -2, 1, 5, 10, 14, 17, 18, 15,
11, 7, 4, 3, 3, 0, -3, -5, -7, -8, -10, -11, -11, -9, -6, -3, -3, -1, 0, -1, 1,
1, 1, 1, 0, -5, -6, -5, -6, -3, 1, 0, 0, 1, 5, 6, 6, 6, 7, 9, 10, 11, 12, 8, 3,
-1, -4, -8, -12, -14, -16, -16, -17, -16, -13, -8, -3, 0, 1, 1, 3, 7, 11, 11,
10, 11, 10, 6, 2, 1, 1, -1, -2, -3, -3, -2, -2, -1, -2, -2, -1, -1, -1, -1, 1,
2, -1, -3, -3, -3, -6, -9, -7, -6, -7, -9, -10, -7, -3, 0, 1, 4, 7, 9, 11, 12,
13, 14, 13, 10, 8, 5, 2, -2, -4, -5, -8, -10, -12, -12, -11, -12, -11, -9, -8,
-7, -7, -4, -1, 2, 3, 5, 7, 9, 9, 9, 7, 5, 4, 2, 0, -1, -1, -1, 0, 0, -1, -2,
-1, 0, 1, 1, -1, -2, -2, -3, -3, -2, -2, -2, -3, -5, -9, -10, -6, -8, -9, -2, 2,
4, 8, 7, 4, 9, 10, 8, 12, 8, 2, 0, -1, -5, -9, -6, -3, -4, -5, -7, -4, -5, -5,
-2, -2, -3, -5, 1, 3, 3, 4, 5, 7, 7, 2, -1, -1, -3, -5, -6, -7, -5, -4, -2, 1,
5, 5, 7, 8, 5, 2, 2, 1, -1, 0, 0, -1, -3, -6, -8, -8, -10, -11, -10, -8, -6, -1,
4, 7, 9, 11, 11, 10, 10, 7, 4, 3, 1, -3, -5, -5, -6, -7, -7, -7, -6, -5, -4, -3,
-2, -2, -3, -4, -3, 1, 4, 5, 4, 3, 2, 3, 3, 1, 1, 0, -2, -3, -3, -1, 2, 4, 6, 8,
10, 8, 5, 1, -3, -6, -9, -10, -11, -10, -9, -8, -6, -6, -6, -6, -7, -6, -5, -2,
1, 4, 7, 10, 12, 13, 14, 13, 10, 8, 6, 3, 1, 0, -1, -1, -1, -3, -6, -7, -8, -8,
-9, -11, -12, -11, -8, -6, -7, -6, -4, -2, -2, -3, -2, 0, 2, 5, 7, 9, 10, 10,
11, 12, 12, 12, 11, 10, 8, 4, 0, -3, -6, -8, -11, -13, -13, -12, -14, -14, -13,
-10, -9, -10, -8, -4, -2, -1, 1, 5, 7, 8, 8, 9, 10, 10, 9, 7, 5, 5, 4, 5, 7, 6,
3, 2, 1, -1, -4, -4, -4, -9, -12, -13, -12, -12, -12, -9, -6, -5, -6, -6, -5,
-3, -1, 1, 3, 4, 6, 7, 7, 8, 9, 11, 11, 10, 9, 7, 4, 2, 1, -2, -3, -4, -6, -8,
-9, -10, -9, -10, -10, -9, -8, -6, -4, -2, 1, 1, 2, 2, 1, 2, 2, 3, 2, 1, 3, 5,
6, 5, 6, 6, 5, 5, 4, 1, -2, -5, -5, -6, -7, -7, -6, -4, -3, -3, -3, -5, -7, -8,
-6, -5, -3, -1, 2, 4, 3, 3, 4, 4, 4, 5, 7, 7, 6, 5, 3, 1, -1, -2, -3, -4, -4,
-5, -6, -7, -8, -9, -7, -4, -3, -2, -1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 0, 0, 0,
0, 1, 1, 2, 2, 3, 2, 1, 0, -1, -2, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -4,
-4, -2, 0, 0, 2, 5, 6, 5, 4, 5, 4, 3, 2, 2, 0, -2, -2, -2, -2, -3, -3, -2, -3,
-4, -5, -5, -5, -4, -3, -2, -3, -1, 1, 3, 2, 1, 1, 2, 1, -1, -2, -1, 0, 0, -1,
1, 1, 0, 0, 0, 1, -1, -1, -1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -4, -3, -3, -3,
-2, -1, 0, 1, 1, 2, 1, 2, 3, 4, 5, 4, 2, 0, 0, -1, -2, -3, -3, -4, -4, -4, -4,
-4, -4, -3, -3, -3, -5, -5, -4, -1, 0, 1, 2, 3, 4, 3, 2, 2, 2, 1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -3, -4, -5, -6, -6, -6,
-5, -4, -2, 0, 1, 1, 3, 2, 2, 3, 4, 4, 4, 4, 4, 3, 2, 0, -1, -2, -4, -4, -5, -6,
-5, -5, -6, -5, -4, -3, -3, -1, 0, 0, 1, 2, 3, 3, 2, 2, 2, 0, -1, -2, -2, -2,
-2, -3, -3, -2, -1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, -1, -2, -4, -4, -4, -5,
-5, -4, -3, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 1, 1, 0, -1, -2, -2, -3,
-4, -3, -3, -2, -2, -1, 1, 3, 4, 4, 4, 4, 2, 0, -1, -2, -4, -5, -5, -5, -5, -5,
-5, -5, -4, -3, -2, 0, 1, 1, 2, 2, 3, 3, 3, 3, 2, 2, 1, 0, -1, -1, -1, -2, -2,
-1, -1, -2, -1, -1, 0, -1, -1, 0, -1, -2, -2, -4, -4, -3, -2, -2, -3, -3, -2,
-2, -2, -2, -1, 0, 1, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 0, -2, -4, -4, -4, -4, -4,
-3, -3, -3, -3, -2, -2, -2, -3, -3, -4, -4, -3, -2, 0, 1, 1, 2, 2, 2, 2, 1, 1,
1, 0, 0, 1, 2, 2, 2, 1, 0, -1, -1, -1, -2, -2, -2, -3, -3, -4, -3, -3, -3, -2,
-2, -2, -2, -2, -2, -2, -1, -1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 1, 0, -1, -1, -1, 0,
0, 0, 0, 0, -1, -2, -3, -3, -4, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 1, 2, 1, 1,
1, 0, 0, 0, 0, 1, 1, 0, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1,
-1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 1,
1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0,
-1, -1, -1, -2, -2, -2, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 1,
1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -2,
-2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, };

#endif /* BASSICONE_H_ */