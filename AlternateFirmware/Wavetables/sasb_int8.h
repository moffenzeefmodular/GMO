#ifndef SASB_H_
#define SASB_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASB_NUM_CELLS 2645
#define SASB_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASB_DATA [] = {0, 0, 3,
4, 8, 3, -6, -9, -26, -20, -17, -5, 36, 32, 43, 31, -17, -21, -63, -55, 7, 13,
67, 70, -5, -15, -94, -114, -60, -60, 65, 113, 56, 61, -54, -120, -63, -71, 38,
127, 76, 94, -12, -124, -76, -92, -4, 117, 77, 92, 22, -116, -85, -97, -44, 101,
81, 93, 55, -94, -87, -94, -73, 79, 85, 90, 85, -63, -84, -87, -97, 46, 81, 81,
105, -26, -71, -73, -102, -7, 29, 61, 121, 5, -70, -63, -111, -12, 83, 68, 117,
34, -70, -63, -120, -64, 1, 24, 120, 91, 76, 41, -99, -88, -81, -60, 87, 90, 83,
75, -77, -97, -97, -104, 36, 66, 84, 110, -24, -68, -81, -120, 6, 59, 76, 126,
36, 0, -50, -128, -45, 4, 40, 127, 59, 15, -26, -128, -79, -45, -3, 119, 84, 51,
19, -115, -97, -65, -42, 102, 101, 70, 59, -90, -107, -72, -72, 73, 110, 74, 85,
-57, -115, -68, -81, 37, 102, 73, 101, -24, -121, -76, -100, 6, 122, 81, 107,
15, -120, -87, -116, -42, 96, 77, 112, 69, -18, -27, -102, -77, -4, 7, 90, 84,
34, 22, -89, -101, -76, -77, 52, 81, 65, 78, -45, -89, -70, -92, 30, 90, 72,
104, 2, -60, -58, -104, -11, 66, 56, 102, 26, -59, -54, -106, -48, 33, 36, 98,
56, -27, -32, -97, -70, 6, 15, 90, 80, 12, 1, -82, -87, -23, -14, 72, 92, 33,
28, -62, -101, -21, -6, 47, 84, 46, 55, -38, -115, -55, -53, 25, 115, 66, 73,
-5, -120, -79, -90, -24, 95, 71, 90, 49, -35, -32, -67, -43, 15, 18, 60, 50, 10,
1, -67, -69, -67, -65, 9, 19, 49, 61, -12, -28, -51, -72, 8, 32, 57, 91, 32, 18,
-34, -88, -26, -1, 30, 86, 33, 4, -25, -91, -51, -30, 2, 81, 50, 25, 2, -79,
-58, -35, -17, 70, 61, 41, 29, -60, -63, -43, -38, 50, 63, 44, 46, -39, -63,
-26, -24, 15, 30, 41, 67, -25, -84, -45, -54, 21, 92, 57, 72, -3, -96, -66, -87,
-27, 52, 48, 88, 60, 38, 13, -55, -45, -54, -33, 45, 41, 60, 47, -48, -53, -87,
-87, -25, -17, 69, 90, 23, 14, -63, -96, -29, -23, 58, 109, 57, 62, -33, -107,
-53, -54, 21, 106, 58, 58, -9, -108, -69, -74, -15, 97, 67, 71, 26, -91, -72,
-77, -44, 81, 73, 75, 57, -69, -72, -75, -68, 56, 71, 70, 77, -40, -67, -59,
-71, 10, 33, 59, 97, -20, -79, -60, -88, 14, 90, 65, 97, 4, -86, -67, -105, -36,
34, 44, 108, 72, 60, 19, -88, -68, -71, -39, 78, 69, 77, 55, -75, -78, -96, -89,
13, 24, 80, 95, -9, -28, -76, -105, -3, 19, 72, 116, 45, 36, -47, -118, -46,
-32, 35, 117, 55, 41, -23, -121, -71, -64, -4, 112, 72, 65, 16, -109, -80, -72,
-36, 97, 83, 74, 51, -88, -88, -75, -64, 75, 91, 74, 77, -61, -92, -65, -73, 36,
71, 66, 94, -34, -101, -69, -95, 22, 109, 73, 103, -3, -107, -76, -111, -26, 71,
62, 110, 66, 28, -4, -101, -69, -46, -17, 91, 74, 62, 38, -89, -88, -90, -80,
42, 54, 78, 85, -38, -61, -77, -95, 24, 56, 75, 107, 16, -12, -59, -113, -21,
17, 49, 110, 32, -8, -43, -115, -55, -25, 17, 109, 60, 29, -8, -108, -72, -43,
-13, 99, 78, 53, 31, -90, -85, -57, -45, 80, 91, 61, 59, -68, -95, -48, -47, 46,
78, 61, 81, -41, -107, -64, -80, 28, 111, 70, 93, -10, -114, -77, -104, -19, 87,
68, 102, 54, -3, -20, -91, -58, -18, 1, 81, 63, 40, 20, -84, -80, -83, -72, 34,
42, 69, 72, -32, -49, -69, -86, 21, 47, 70, 99, 19, -2, -53, -103, -18, 13, 45,
100, 29, -5, -40, -106, -50, -24, 17, 100, 53, 24, -10, -98, -64, -38, -10, 91,
70, 46, 24, -83, -74, -49, -36, 73, 78, 52, 48, -62, -82, -37, -34, 37, 58, 54,
72, -43, -98, -56, -67, 33, 103, 63, 82, -15, -107, -72, -97, -15, 73, 59, 95,
53, 20, -8, -78, -51, -37, -11, 68, 53, 50, 26, -73, -69, -88, -74, 7, 14, 74,
77, -10, -22, -71, -87, 1, 15, 70, 102, 40, 33, -49, -104, -35, -23, 39, 103,
43, 31, -30, -108, -59, -53, 6, 100, 58, 50, 3, -97, -66, -61, -23, 89, 70, 65,
38, -80, -73, -66, -50, 70, 74, 66, 61, -58, -75, -51, -52, 28, 46, 60, 83, -39,
-88, -59, -77, 32, 98, 66, 91, -13, -98, -70, -100, -18, 56, 54, 101, 59, 41, 0,
-86, -58, -56, -19, 77, 59, 66, 36, -77, -72, -94, -78, 12, 19, 83, 83, -14,
-25, -78, -91, 3, 18, 75, 106, 39, 32, -55, -109, -38, -28, 44, 108, 45, 35,
-34, -113, -61, -58, 10, 108, 62, 57, 1, -106, -71, -69, -21, 98, 73, 71, 37,
-89, -77, -72, -51, 78, 79, 72, 62, -68, -81, -59, -58, 38, 58, 67, 86, -45,
-93, -65, -83, 37, 102, 69, 94, -19, -101, -73, -105, -13, 64, 61, 106, 58, 35,
-9, -96, -60, -52, -11, 86, 63, 66, 31, -87, -78, -95, -72, 31, 36, 84, 77, -31,
-42, -81, -88, 19, 37, 79, 104, 27, 14, -62, -110, -26, -7, 51, 108, 36, 17,
-43, -116, -56, -45, 16, 108, 58, 45, -6, -107, -68, -58, -14, 101, 75, 65, 31,
-94, -79, -67, -45, 82, 82, 67, 57, -72, -84, -54, -51, 46, 65, 66, 82, -51,
-99, -65, -80, 40, 105, 71, 94, -21, -108, -75, -105, -9, 75, 64, 105, 52, 20,
-16, -95, -56, -39, -4, 86, 61, 57, 22, -90, -78, -91, -67, 34, 37, 80, 71, -35,
-44, -79, -82, 25, 40, 80, 98, 20, 7, -64, -103, -18, 1, 53, 102, 28, 9, -48,
-111, -50, -37, 25, 106, 52, 37, -15, -106, -63, -51, -5, 100, 69, 58, 21, -93,
-73, -62, -36, 83, 77, 63, 50, -74, -80, -47, -42, 47, 60, 64, 74, -56, -96,
-61, -73, 44, 104, 68, 88, -28, -107, -74, -101, -3, 74, 64, 101, 49, 20, -17,
-90, -51, -38, -2, 80, 55, 54, 18, -85, -72, -91, -65, 24, 28, 81, 69, -28, -35,
-81, -81, 18, 30, 79, 96, 28, 19, -64, -102, -24, -10, 53, 100, 32, 19, -46,
-108, -51, -45, 22, 104, 53, 45, -13, -104, -62, -57, -5, 98, 66, 63, 21, -91,
-70, -67, -37, 82, 73, 67, 49, -73, -74, -50, -42, 42, 51, 65, 73, -56, -89,
-62, -73, 49, 98, 68, 88, -33, -101, -72, -100, 0, 66, 62, 101, 49, 31, -17,
-89, -52, -49, -3, 81, 55, 64, 19, -85, -71, -96, -64, 21, 25, 88, 69, -24, -30,
-84, -80, 14, 23, 83, 97, 32, 24, -68, -102, -29, -19, 56, 102, 36, 28, -48,
-110, -53, -52, 25, 107, 55, 53, -15, -107, -65, -66, -7, 101, 68, 71, 22, -95,
-71, -72, -37, 86, 73, 71, 50, -75, -74, -58, -49, 45, 54, 70, 77, -59, -88,
-65, -75, 52, 97, 70, 91, -35, -101, -74, -102, 3, 65, 64, 104, 50, 33, -20,
-93, -53, -52, -1, 86, 57, 66, 16, -90, -73, -98, -60, 32, 33, 90, 65, -34, -38,
-88, -78, 24, 33, 87, 95, 26, 16, -74, -100, -22, -11, 61, 101, 31, 21, -55,
-112, -50, -46, 32, 105, 51, 47, -22, -107, -60, -60, 3, 104, 66, 68, 14, -100,
-71, -72, -30, 91, 73, 72, 44, -82, -75, -56, -43, 53, 58, 73, 72, -67, -90,
-68, -74, 57, 99, 71, 89, -40, -103, -76, -103, 9, 69, 67, 104, 45, 26, -26,
-94, -50, -44, 6, 87, 56, 63, 10, -92, -73, -97, -55, 37, 36, 89, 60, -39, -41,
-88, -73, 29, 36, 87, 91, 21, 11, -75, -98, -18, -6, 64, 99, 26, 15, -59, -109,
-47, -42, 36, 106, 48, 43, -27, -109, -59, -57, 7, 104, 64, 65, 8, -99, -68,
-69, -25, 92, 71, 71, 39, -85, -73, -53, -37, 55, 56, 71, 66, -70, -89, -66,
-69, 63, 98, 72, 86, -49, -102, -77, -99, 16, 69, 68, 102, 41, 23, -30, -92,
-47, -43, 12, 87, 53, 62, 3, -92, -71, -97, -50, 33, 34, 91, 55, -37, -38, -90,
-67, 28, 33, 90, 87, 22, 11, -79, -93, -15, -5, 68, 94, 24, 14, -64, -105, -45,
-42, 41, 104, 46, 43, -32, -106, -56, -58, 13, 103, 61, 65, 3, -98, -64, -69,
-19, 92, 67, 71, 33, -86, -68, -52, -32, 55, 52, 73, 61, -75, -84, -66, -64, 68,
93, 71, 81, -54, -99, -77, -97, 19, 66, 69, 100, 40, 26, -33, -90, -46, -47, 13,
83, 51, 64, 0, -91, -70, -99, -47, 29, 33, 94, 52, -33, -36, -92, -65, 25, 30,
94, 86, 25, 13, -84, -91, -20, -11, 72, 93, 26, 18, -67, -104, -46, -45, 47,
103, 46, 47, -38, -106, -56, -60, 17, 103, 61, 70, 1, -100, -64, -74, -16, 93,
66, 74, 30, -87, -66, -57, -33, 55, 51, 77, 60, -77, -82, -69, -64, 71, 92, 74,
80, -58, -97, -79, -96, 24, 65, 71, 101, 40, 28, -36, -91, -47, -49, 16, 87, 53,
66, -3, -94, -71, -101, -43, 35, 36, 95, 49, -39, -39, -95, -62, 30, 34, 96, 84,
22, 10, -88, -90, -15, -6, 76, 93, 24, 15, -71, -105, -45, -42, 50, 103, 46, 46,
-40, -108, -56, -59, 21, 105, 60, 68, -5, -102, -63, -72, -12, 95, 66, 75, 26,
-92, -66, -58, -30, 60, 53, 78, 54, -82, -81, -70, -60, 77, 91, 76, 78, -65,
-96, -80, -94, 30, 66, 73, 99, 36, 24, -41, -92, -44, -44, 23, 87, 51, 64, -10,
-94, -70, -99, -37, 35, 37, 95, 42, -42, -41, -95, -55, 34, 37, 98, 78, 19, 5,
-91, -84, -12, -2, 79, 88, 20, 11, -76, -101, -42, -39, 55, 100, 43, 41, -46,
-105, -53, -57, 28, 103, 58, 67, -11, -101, -61, -72, -7, 96, 64, 74, 21, -92,
-63, -56, -25, 59, 51, 79, 50, -84, -79, -70, -56, 80, 89, 76, 74, -69, -95,
-81, -91, 33, 65, 75, 97, 35, 25, -44, -89, -43, -44, 25, 83, 49, 64, -13, -92,
-70, -101, -36, 33, 37, 97, 40, -38, -40, -97, -53, 30, 35, 100, 78, 23, 7, -93,
-83, -16, -5, 81, 86, 23, 14, -78, -100, -44, -42, 58, 99, 44, 44, -49, -104,
-54, -60, 30, 102, 58, 69, -14, -100, -61, -75, -2, 96, 63, 77, 17, -92, -61,
-59, -24, 59, 50, 82, 47, -86, -77, -73, -53, 83, 87, 78, 71, -72, -92, -83,
-89, 36, 63, 77, 97, 35, 26, -47, -89, -43, -46, 30, 85, 51, 65, -18, -94, -71,
-102, -31, 36, 40, 99, 36, -41, -42, -99, -51, 33, 37, 102, 75, 21, 3, -97, -81,
-13, -1, 84, 84, 21, 11, -82, -99, -43, -39, 63, 99, 44, 43, -53, -104, -53,
-58, 35, 103, 58, 68, -19, -102, -61, -73, 2, 97, 63, 77, 13, -95, -62, -59,
-21, 63, 52, 83, 43, -89, -76, -73, -51, 86, 87, 79, 70, -76, -92, -84, -87, 40,
64, 78, 95, 32, 23, -51, -89, -42, -43, 33, 85, 50, 64, -23, -94, -71, -101,
-27, 35, 41, 98, 31, -44, -44, -99, -44, 36, 40, 103, 71, 19, -1, -97, -76, -10,
2, 87, 81, 18, 7, -86, -95, -41, -35, 67, 95, 40, 38, -59, -101, -51, -55, 42,
101, 56, 66, -26, -101, -59, -72, 9, 97, 61, 76, 6, -96, -58, -57, -14, 63, 50,
84, 35, -92, -73, -74, -44, 90, 83, 80, 63, -82, -89, -86, -82, 45, 62, 80, 92,
31, 23, -54, -85, -41, -43, 38, 83, 49, 63, -29, -92, -72, -101, -23, 33, 43,
99, 27, -39, -44, -100, -41, 31, 38, 105, 69, 21, -2, -100, -73, -14, 0, 90, 78,
20, 8, -88, -92, -42, -35, 71, 93, 42, 41, -63, -100, -52, -56, 45, 99, 56, 67,
-31, -100, -59, -74, 14, 96, 60, 78, 1, -95, -57, -59, -12, 63, 50, 85, 32, -94,
-72, -76, -40, 92, 81, 83, 59, -84, -86, -87, -80, 46, 60, 83, 91, 31, 24, -58,
-85, -42, -43, 41, 82, 50, 64, -32, -92, -73, -102, -18, 35, 46, 100, 22, -42,
-46, -100, -36, 34, 41, 105, 63, 14, -9, -102, -68, -8, 7, 91, 74, 17, 4, -90,
-89, -39, -30, 75, 91, 39, 36, -67, -98, -49, -51, 50, 97, 55, 64, -35, -99,
-58, -71, 18, 97, 60, 76, -3, -96, -56, -60, -8, 69, 52, 84, 26, -95, -70, -77,
-37, 91, 77, 82, 55, -84, -83, -85, -73, 52, 61, 82, 85, 10, -1, -64, -83, -25,
-18, 50, 83, 37, 39, -44, -93, -65, -83, 2, 59, 48, 80, 5, -62, -51, -87, -19,
59, 51, 95, 44, -25, -30, -89, -49, 30, 32, 84, 59, -21, -27, -85, -73, -1, 7,
73, 75, 7, -2, -68, -84, -21, -14, 56, 87, 31, 26, -46, -90, -37, -33, 34, 90,
43, 42, -21, -91, -42, -29, 11, 71, 46, 57, 4, -94, -61, -52, -15, 91, 69, 63,
33, -88, -77, -74, -55, 59, 62, 72, 68, -11, -20, -58, -68, -4, 5, 48, 68, 17,
9, -46, -77, -43, -49, 15, 55, 35, 45, -9, -59, -38, -56, -1, 57, 45, 66, -6,
-38, -38, -64, 3, 41, 38, 64, 7, -40, -37, -72, -22, 25, 27, 65, 26, -24, -26,
-66, -36, 13, 17, 61, 43, -5, -11, -58, -49, 1, 6, 53, 53, 8, 1, -48, -58, -5,
2, 35, 49, 19, 17, -37, -70, -24, -17, 31, 75, 33, 29, -22, -79, -44, -44, 1,
61, 40, 49, 16, -34, -24, -33, -14, 23, 18, 31, 18, -15, -16, -37, -31, -17,
-12, 13, 14, 11, 10, -10, -13, -11, -12, 11, 17, 16, 20, -2, -9, -12, -18, 3,
13, 11, 18, -1, -13, -12, -21, -5, 8, 8, 17, 4, -9, -9, -17, -8, 5, 6, 19, 11,
-3, -5, -18, -13, 1, 2, 15, 12, -2, -3, -15, -15, 2, 4, 8, 10, 3, 3, -12, -18,
-4, -2, 11, 19, 7, 5, -9, -20, -11, -11, 1, 13, 8, 10, 2, -6, -4, -5, -2, 2, 2,
4, 1, -2, -3, -7, -6, -5, -4, 1, 1, 3, 2, 0, -1, -5, -5, 0, 1, 6, 8, 0, -2, -3,
-4, -1, -1, 2, 5, 0, -2, -4, -7, -2, 0, 2, 6, 1, -2, -3, -7, -3, 0, 1, 5, 2, -2,
-2, -7, -4, 0, 1, 5, 3, -1, -2, -4, -3, 0, 0, 4, 4, -1, -2, -3, -4, -1, 0, 3, 5,
-1, -2, -3, -4, -1, 0, 1, 2, 0, -1, -2, -4, -2, 0, 1, 2, 1, 1, 0, -2, -1, -1,
-1, 1, 1, 1, 0, -2, -2, -2, -1, -1, -1, 1, 1, -1, -2, -3, -4, -1, 0, 1, 2, -1,
-1, -3, -4, -1, 0, 1, 3, 0, -1, -2, -4, -1, 0, 1, 3, 0, -1, -2, -4, -2, 0, 0, 2,
1, -1, -1, -4, -3, 0, 0, 2, 2, -1, -1, -3, -3, 0, 0, 2, 2, -1, -1, -1, -1, -1,
-1, 1, 2, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 1, 1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, };

#endif /* SASB_H_ */