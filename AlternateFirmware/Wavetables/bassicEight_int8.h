#ifndef BASSICEIGHT_H_
#define BASSICEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define BASSICEIGHT_NUM_CELLS 5668
#define BASSICEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) BASSICEIGHT_DATA [] =
{-1, 6, 9, -17, -25, 21, 42, -9, -63, -36, 36, 84, 50, -50, -109, -71, 35, 111,
120, 48, -43, -99, -123, -128, -111, -96, 22, 121, -50, -116, 56, 116, -35,
-128, -18, 111, 101, -20, -121, -94, 22, 114, 114, 42, -42, -108, -127, -111,
-76, -39, -6, 93, 84, -96, -91, 76, 112, -34, -128, -40, 97, 114, 3, -102, -119,
-26, 85, 123, 85, 0, -82, -121, -121, -82, -39, 14, 42, 94, 97, -84, -92, 88,
95, -70, -117, 21, 124, 62, -66, -125, -60, 64, 125, 86, -4, -75, -121, -123,
-100, -59, -32, -3, 6, 69, 112, -48, -122, 15, 124, 48, -93, -115, -4, 106, 114,
26, -83, -127, -74, 16, 85, 125, 108, 67, 7, -49, -89, -113, -123, 18, 123, -34,
-122, 17, 125, 19, -115, -82, 59, 124, 51, -69, -123, -77, 33, 110, 116, 65,
-24, -88, -112, -128, -118, -109, -10, 123, 15, -123, -44, 104, 92, -51, -125,
-55, 69, 124, 74, -25, -107, -121, -62, 26, 95, 120, 117, 85, 53, 16, -11, -57,
-119, 6, 125, -5, -123, -29, 113, 76, -69, -122, -27, 93, 117, 38, -68, -126,
-92, -11, 68, 113, 123, 101, 67, 35, 11, -46, -119, 7, 124, 13, -117, -67, 81,
115, 13, -103, -114, -33, 70, 120, 105, 42, -38, -99, -124, -102, -60, -5, 34,
66, 81, 118, 48, -113, -61, 97, 89, -64, -119, -8, 111, 93, -25, -116, -102,
-12, 82, 122, 85, 11, -60, -108, -122, -119, -90, -58, 31, 118, -14, -124, -9,
117, 57, -89, -110, 2, 110, 101, 5, -93, -122, -83, -8, 61, 106, 121, 106, 79,
44, 9, -28, -62, -117, -38, 114, 55, -97, -92, 56, 118, 18, -104, -103, 7, 105,
110, 28, -66, -120, -108, -58, 16, 75, 113, 120, 112, 97, 85, 16, -115, -45,
108, 72, -78, -112, 10, 114, 84, -34, -115, -101, -17, 71, 117, 110, 69, 2, -52,
-86, -111, -118, -123, -117, -115, -20, 115, 51, -97, -93, 49, 119, 30, -94,
-111, -12, 92, 116, 50, -43, -110, -116, -79, -13, 50, 98, 117, 117, 104, 90,
18, -112, -49, 103, 76, -72, -113, 5, 112, 85, -33, -115, -97, -9, 79, 118, 101,
48, -12, -63, -96, -114, -119, -119, -114, -114, -56, 88, 94, -51, -118, -18,
105, 91, -28, -117, -85, 19, 105, 109, 45, -43, -103, -119, -94, -48, 3, 55, 90,
109, 118, 101, -35, -118, 9, 116, 39, -98, -96, 29, 116, 74, -39, -114, -99,
-19, 65, 113, 111, 75, 24, -24, -62, -86, -101, -110, -115, -113, -3, 115, 57,
-80, -110, 2, 108, 90, -21, -110, -101, -15, 78, 117, 92, 25, -45, -97, -117,
-113, -91, -65, -36, -7, 39, 112, 36, -107, -72, 72, 108, -8, -112, -82, 36,
113, 87, -7, -92, -117, -83, -16, 49, 94, 114, 115, 103, 88, 75, 65, 30, -84,
-101, 32, 115, 50, -78, -113, -29, 82, 114, 51, -48, -111, -106, -48, 27, 87,
114, 111, 85, 52, 17, -11, -35, -54, -107, -72, 77, 101, -28, -117, -45, 81,
109, 17, -89, -113, -46, 49, 108, 107, 59, -6, -64, -100, -115, -115, -105, -95,
-84, -66, 31, 116, 30, -95, -97, 20, 110, 84, -21, -105, -105, -31, 58, 110,
105, 57, -9, -66, -102, -115, -112, -96, -79, -61, -46, 5, 105, 65, -78, -104,
12, 111, 68, -53, -116, -64, 41, 109, 97, 25, -56, -106, -113, -85, -40, 7, 45,
73, 90, 99, 108, 106, -2, -112, -66, 62, 112, 31, -80, -113, -47, 51, 110, 99,
37, -39, -94, -115, -101, -68, -25, 14, 47, 69, 85, 92, 110, 88, -43, -114, -26,
95, 92, -22, -110, -82, 23, 104, 99, 25, -61, -110, -106, -62, -3, 51, 88, 108,
113, 110, 104, 96, 54, -66, -109, -2, 103, 81, -36, -111, -78, 23, 100, 104, 42,
-37, -96, -113, -95, -53, -5, 39, 71, 93, 104, 110, 111, 112, 71, -55, -112,
-21, 94, 93, -17, -106, -88, 11, 97, 104, 40, -46, -103, -110, -74, -18, 37, 78,
102, 111, 110, 105, 98, 72, -32, -114, -44, 78, 104, 9, -94, -103, -19, 75, 111,
74, -2, -73, -109, -107, -77, -36, 6, 41, 67, 85, 95, 101, 106, 107, 22, -94,
-93, 17, 107, 76, -32, -108, -86, 5, 89, 109, 64, -13, -78, -110, -104, -73,
-29, 12, 47, 71, 87, 95, 108, 89, -25, -111, -59, 61, 109, 40, -67, -112, -63,
28, 97, 106, 62, -5, -65, -101, -111, -101, -81, -58, -36, -20, -9, 0, 44, 106,
67, -51, -111, -51, 60, 109, 57, -43, -107, -93, -20, 60, 105, 101, 61, 3, -49,
-87, -106, -111, -105, -97, -86, -70, -1, 97, 84, -29, -108, -68, 41, 107, 75,
-19, -95, -106, -54, 21, 82, 108, 99, 67, 27, -12, -43, -65, -79, -87, -91,
-105, -98, -8, 92, 95, 2, -92, -100, -22, 71, 108, 70, -9, -80, -109, -91, -42,
17, 65, 95, 107, 106, 95, 82, 70, 55, 0, -90, -95, 7, 99, 85, -15, -99, -94,
-13, 73, 108, 76, 7, -61, -102, -107, -85, -48, -9, 25, 51, 68, 79, 84, 96, 105,
45, -60, -108, -57, 45, 105, 79, -8, -86, -107, -66, 7, 73, 105, 99, 64, 17,
-28, -65, -89, -102, -107, -108, -106, -91, -17, 84, 98, 10, -88, -100, -21, 73,
106, 60, -24, -90, -107, -75, -16, 42, 85, 104, 104, 92, 74, 55, 40, 30, 15,
-38, -102, -85, 8, 92, 96, 23, -66, -107, -77, -2, 71, 105, 91, 44, -15, -65,
-96, -107, -101, -85, -66, -46, -30, -18, 13, 77, 103, 32, -70, -106, -45, 53,
105, 74, -9, -83, -106, -74, -11, 52, 93, 105, 93, 66, 34, 4, -21, -39, -50,
-61, -90, -103, -42, 55, 105, 67, -23, -94, -100, -44, 34, 91, 103, 72, 17, -40,
-82, -103, -104, -91, -71, -49, -28, -12, 0, 22, 73, 104, 52, -47, -104, -73,
18, 92, 96, 35, -46, -99, -99, -56, 5, 60, 94, 104, 94, 72, 46, 22, 2, -12, -24,
-54, -98, -91, -14, 74, 102, 52, -35, -97, -97, -43, 29, 84, 103, 86, 45, -4,
-48, -80, -98, -104, -103, -97, -89, -83, -72, -34, 43, 100, 80, -4, -85, -100,
-42, 43, 98, 92, 36, -34, -87, -104, -87, -47, -1, 40, 71, 90, 100, 102, 102,
100, 91, 51, -29, -95, -92, -21, 64, 102, 73, -1, -71, -103, -88, -40, 18, 67,
95, 102, 93, 73, 50, 27, 7, -8, -18, -30, -60, -98, -91, -23, 62, 102, 69, -11,
-82, -102, -65, 4, 67, 99, 94, 59, 11, -35, -71, -93, -102, -102, -97, -90, -84,
-71, -31, 40, 96, 88, 19, -63, -102, -77, -7, 63, 99, 89, 45, -12, -62, -93,
-102, -95, -77, -56, -34, -16, -1, 8, 17, 40, 81, 100, 64, -13, -83, -100, -55,
22, 83, 99, 67, 6, -54, -93, -101, -83, -50, -11, 25, 54, 74, 87, 94, 98, 100,
96, 61, -11, -80, -100, -58, 20, 83, 98, 61, -5, -65, -98, -96, -66, -22, 22,
58, 82, 95, 99, 99, 96, 93, 90, 82, 52, -7, -72, -101, -74, -6, 65, 99, 81, 24,
-42, -88, -100, -79, -38, 10, 51, 80, 96, 99, 94, 86, 76, 67, 58, 32, -19, -77,
-100, -69, 1, 70, 99, 74, 12, -53, -93, -97, -69, -22, 26, 64, 88, 98, 96, 88,
77, 66, 57, 52, 41, 10, -42, -88, -97, -59, 10, 73, 98, 75, 19, -44, -87, -99,
-80, -40, 6, 47, 77, 93, 98, 95, 87, 78, 70, 62, 42, -1, -59, -97, -85, -28, 45,
92, 90, 42, -23, -77, -99, -86, -49, -2, 41, 73, 91, 97, 94, 87, 77, 69, 64, 55,
30, -18, -71, -98, -79, -21, 47, 91, 91, 51, -9, -63, -94, -95, -70, -32, 10,
46, 73, 89, 96, 96, 94, 90, 86, 76, 46, -10, -69, -98, -75, -12, 57, 94, 84, 35,
-28, -77, -97, -87, -55, -13, 27, 59, 81, 92, 96, 95, 92, 89, 85, 71, 35, -22,
-77, -97, -70, -9, 55, 92, 89, 49, -7, -59, -90, -96, -80, -50, -15, 19, 46, 66,
80, 88, 92, 94, 95, 90, 61, 3, -61, -95, -80, -23, 44, 89, 90, 54, -3, -56, -89,
-96, -81, -52, -18, 15, 41, 61, 74, 83, 87, 90, 94, 90, 58, -1, -62, -95, -81,
-28, 36, 82, 94, 70, 24, -27, -68, -91, -95, -84, -63, -38, -14, 6, 23, 35, 42,
52, 73, 92, 85, 39, -28, -82, -94, -59, 4, 62, 92, 85, 48, -1, -48, -80, -94,
-92, -79, -59, -38, -20, -4, 7, 14, 30, 61, 89, 88, 46, -19, -75, -95, -70, -15,
44, 83, 93, 73, 36, -7, -46, -74, -89, -94, -92, -85, -76, -68, -62, -56, -35,
6, 57, 90, 82, 33, -33, -82, -92, -61, -5, 50, 85, 92, 73, 38, -2, -37, -65,
-82, -91, -94, -93, -90, -88, -82, -63, -21, 37, 82, 89, 52, -10, -67, -93, -79,
-36, 18, 63, 88, 90, 74, 48, 18, -11, -35, -53, -66, -74, -79, -82, -89, -93,
-73, -24, 39, 84, 88, 49, -12, -67, -92, -81, -43, 7, 51, 81, 91, 85, 68, 46,
23, 3, -14, -26, -34, -44, -65, -88, -88, -51, 10, 67, 91, 71, 19, -40, -81,
-92, -73, -34, 10, 48, 75, 88, 90, 85, 75, 65, 55, 48, 43, 30, -1, -47, -84,
-89, -53, 8, 64, 90, 75, 29, -26, -71, -91, -85, -59, -23, 14, 45, 67, 81, 88,
90, 89, 88, 85, 75, 47, -4, -59, -90, -79, -30, 33, 78, 89, 63, 15, -36, -74,
-90, -86, -67, -40, -11, 15, 35, 51, 61, 68, 71, 77, 87, 86, 58, 4, -54, -88,
-82, -39, 20, 68, 89, 77, 42, -3, -45, -75, -89, -89, -79, -64, -47, -31, -18,
-8, 0, 18, 51, 82, 86, 52, -7, -63, -90, -75, -28, 28, 72, 88, 77, 47, 7, -30,
-60, -79, -88, -90, -87, -82, -77, -73, -68, -51, -14, 36, 77, 87, 58, 3, -53,
-86, -83, -50, 0, 47, 78, 88, 79, 56, 28, -1, -26, -46, -61, -70, -76, -79, -85,
-89, -74, -32, 27, 74, 86, 58, 3, -52, -85, -84, -55, -11, 34, 67, 84, 86, 76,
60, 41, 23, 7, -4, -11, -18, -37, -66, -87, -80, -40, 18, 67, 87, 69, 24, -29,
-70, -88, -80, -54, -18, 18, 48, 69, 81, 86, 86, 83, 80, 77, 71, 52, 13, -38,
-78, -86, -54, 3, 57, 85, 77, 39, -10, -55, -81, -87, -74, -50, -22, 6, 29, 47,
60, 68, 73, 76, 82, 85, 70, 29, -27, -72, -87, -64, -15, 39, 75, 85, 68, 32, -9,
-46, -72, -85, -86, -79, -68, -56, -44, -34, -28, -18, 5, 41, 75, 84, 57, 3,
-52, -84, -79, -42, 10, 56, 81, 82, 63, 32, -3, -34, -58, -73, -82, -86, -86,
-85, -84, -80, -64, -29, 21, 66, 84, 66, 19, -36, -75, -85, -65, -26, 18, 55,
77, 84, 78, 63, 43, 23, 5, -9, -20, -27, -34, -51, -74, -85, -68, -23, 33, 75,
82, 54, 4, -46, -78, -84, -66, -32, 6, 40, 64, 78, 83, 82, 77, 70, 64, 60, 51,
29, -9, -54, -82, -78, -40, 15, 62, 83, 71, 34, -12, -52, -78, -84, -75, -56,
-31, -7, 15, 32, 45, 54, 59, 64, 72, 82, 77, 46, -5, -56, -83, -74, -34, 19, 62,
82, 74, 45, 6, -32, -61, -78, -84, -81, -72, -61, -51, -42, -35, -27, -5, 30,
66, 82, 65, 20, -34, -74, -82, -59, -16, 31, 66, 81, 77, 59, 32, 4, -21, -41,
-56, -66, -72, -76, -78, -81, -82, -69, -33, 18, 63, 81, 65, 21, -30, -69, -83,
-69, -36, 4, 40, 66, 79, 80, 73, 62, 48, 36, 25, 18, 10, -9, -40, -71, -82, -62,
-16, 37, 73, 79, 53, 8, -37, -70, -82, -74, -53, -24, 5, 30, 49, 63, 71, 76, 78,
79, 80, 79, 64, 28, -20, -64, -82, -66, -24, 27, 66, 80, 68, 36, -3, -40, -66,
-79, -81, -74, -62, -48, -35, -24, -16, -10, 6, 34, 65, 80, 65, 23, -29, -69,
-81, -60, -18, 28, 63, 79, 74, 55, 27, -2, -28, -48, -62, -71, -76, -79, -80,
-80, -79, -68, -37, 8, 53, 78, 70, 35, -14, -57, -79, -75, -49, -13, 24, 54, 72,
79, 76, 67, 55, 44, 33, 25, 19, 7, -19, -52, -77, -75, -45, 5, 52, 77, 71, 38,
-7, -48, -73, -79, -68, -45, -18, 8, 31, 48, 60, 68, 72, 74, 76, 78, 73, 52, 12,
-35, -70, -78, -56, -13, 34, 67, 78, 65, 36, 0, -33, -58, -73, -79, -77, -70,
-62, -53, -46, -41, -32, -11, 23, 59, 77, 66, 28, -22, -63, -79, -65, -29, 14,
51, 72, 76, 66, 45, 21, -2, -23, -39, -50, -58, -62, -65, -72, -78, -72, -45,
-1, 45, 73, 73, 44, 1, -42, -71, -77, -64, -37, -5, 26, 50, 66, 74, 76, 75, 71,
67, 64, 59, 45, 17, -23, -60, -77, -65, -26, 23, 61, 76, 63, 31, -9, -45, -69,
-77, -72, -59, -40, -21, -4, 11, 22, 29, 34, 44, 60, 74, 71, 44, 0, -45, -73,
-73, -47, -6, 36, 65, 75, 68, 48, 21, -7, -31, -50, -62, -70, -74, -76, -76,
-76, -74, -61, -33, 10, 51, 74, 67, 33, -13, -53, -75, -71, -47, -12, 23, 51,
68, 74, 72, 63, 51, 40, 29, 21, 16, 7, -14, -43, -68, -75, -55, -15, 31, 65, 74,
57, 22, -18, -51, -71, -75, -66, -49, -28, -7, 12, 28, 39, 47, 52, 55, 63, 72,
71, 51, 12, -34, -67, -74, -53, -13, 30, 61, 73, 65, 42, 12, -18, -43, -60, -70,
-74, -74, -72, -69, -66, -62, -51, -26, 10, 48, 71, 68, 38, -6, -47, -71, -72,
-51, -18, 18, 47, 65, 73, 70, 62, 50, 37, 26, 16, 10, 5, -5, -26, -53, -72, -70,
-44, -1, 42, 69, 69, 46, 8, -30, -59, -73, -70, -56, -35, -12, 10, 28, 41, 51,
57, 61, 64, 69, 72, 60, 30, -12, -52, -72, -66, -35, 6, 45, 67, 71, 56, 30, 1,
-26, -48, -62, -70, -73, -72, -71, -68, -67, -63, -52, -28, 7, 44, 68, 68, 42,
0, -41, -67, -71, -55, -24, 10, 40, 60, 70, 70, 63, 53, 41, 29, 20, 13, 8, -5,
-28, -54, -71, -67, -39, 3, 44, 68, 67, 43, 7, -29, -57, -70, -70, -58, -40,
-20, 0, 16, 29, 38, 44, 48, 52, 61, 69, 66, 45, 7, -34, -64, -71, -53, -17, 22,
53, 69, 67, 51, 27, 1, -23, -42, -56, -64, -69, -71, -71, -71, -69, -62, -42,
-8, 31, 61, 69, 51, 15, -26, -58, -71, -63, -40, -9, 21, 45, 61, 68, 69, 65, 58,
52, 46, 42, 37, 26, 3, -27, -56, -70, -61, -31, 9, 46, 67, 65, 45, 13, -20, -47,
-64, -70, -66, -56, -43, -29, -17, -6, 1, 6, 15, 32, 53, 67, 64, 39, -1, -40,
-65, -67, -47, -13, 23, 52, 66, 66, 55, 37, 16, -4, -21, -35, -44, -51, -54,
-57, -63, -69, -66, -48, -15, 24, 55, 68, 56, 27, -11, -44, -64, -68, -58, -38,
-14, 10, 31, 46, 56, 62, 66, 67, 67, 67, 64, 53, 28, -8, -44, -66, -65, -41, -3,
34, 60, 67, 56, 32, 3, -24, -46, -60, -67, -68, -65, -61, -56, -52, -49, -42,
-26, 0, 32, 58, 66, 53, 21, -18, -50, -67, -64, -44, -15, 15, 40, 57, 65, 65,
60, 51, 42, 33, 26, 21, 15, 3, -19, -45, -64, -65, -45, -9, 30, 58, 66, 53, 25,
-9, -39, -59, -67, -64, -54, -39, -24, -9, 4, 13, 20, 25, 31, 44, 59, 65, 55,
27, -11, -45, -65, -63, -42, -10, 23, 49, 63, 64, 55, 39, 21, 2, -14, -27, -36,
-43, -47, -50, -57, -64, -65, -52, -23, 15, 47, 64, 58, 33, -2, -35, -58, -66,
-60, -43, -21, 2, 22, 38, 49, 56, 60, 62, 63, 64, 63, 56, 36, 5, -30, -57, -65,
-52, -22, 14, 44, 61, 63, 50, 29, 5, -18, -37, -51, -59, -63, -65, -65, -64,
-63, -61, -52, -34, -5, 29, 55, 63, 50, 21, -16, -46, -63, -62, -47, -22, 5, 29,
47, 58, 63, 63, 60, 56, 51, 48, 45, 35, 17, -10, -39, -60, -63, -45, -13, 23,
51, 63, 57, 37, 10, -17, -40, -55, -63, -64, -60, -54, -47, -41, -36, -33, -27,
-13, 10, 36, 57, 62, 48, 17, -19, -48, -63, -59, -40, -12, 17, 40, 55, 62, 60,
54, 44, 34, 25, 17, 12, 7, -3, -21, -43, -59, -62, -46, -15, 20, 49, 61, 55, 34,
4, -24, -47, -59, -63, -58, -49, -37, -25, -14, -5, 1, 5, 10, 22, 40, 56, 61,
50, 23, -12, -43, -60, -59, -42, -14, 16, 41, 56, 61, 57, 46, 33, 19, 6, -5,
-14, -19, -23, -31, -44, -57, -62, -52, -26, 8, 39, 58, 58, 41, 12, -18, -43,
-58, -62, -56, -44, -28, -13, 1, 13, 22, 28, 32, 35, 43, 53, 60, 55, 35, 4, -29,
-53, -61, -51, -26, 4, 32, 51, 59, 57, 47, 32, 16, 0, -13, -24, -32, -37, -40,
-45, -53, -60, -58, -42, -14, 19, 47, 59, 53, 31, 1, -29, -50, -60, -58, -48,
-32, -15, 1, 16, 27, 35, 41, 44, 46, 51, 57, 58, 48, 25, -6, -36, -56, -59, -45,
-19, 11, 37, 53, 58, 53, 41, 24, 7, -8, -21, -31, -39, -43, -46, -50, -55, -59,
-56, -39, -11, 21, 47, 58, 51, 29, -1, -29, -50, -59, -57, -46, -29, -12, 5, 19,
30, 38, 44, 47, 49, 52, 57, 57, 47, 25, -5, -35, -54, -58, -45, -20, 9, 35, 52,
57, 53, 41, 25, 8, -7, -20, -31, -38, -43, -46, -48, -53, -58, -56, -43, -18,
13, 41, 56, 53, 35, 7, -21, -44, -56, -57, -49, -35, -18, -2, 13, 25, 33, 40,
43, 46, 49, 54, 56, 50, 32, 5, -25, -48, -58, -50, -29, -2, 25, 45, 55, 55, 47,
33, 18, 3, -10, -21, -29, -35, -39, -42, -47, -54, -57, -51, -32, -3, 27, 48,
56, 46, 24, -4, -30, -48, -56, -55, -46, -32, -17, -3, 10, 20, 27, 32, 35, 39,
46, 53, 55, 45, 24, -5, -33, -52, -56, -44, -22, 5, 29, 46, 54, 53, 46, 35, 21,
9, -3, -12, -19, -23, -26, -32, -42, -52, -56, -48, -27, 1, 30, 49, 54, 44, 22,
-4, -28, -46, -54, -55, -49, -39, -27, -15, -4, 4, 11, 15, 19, 27, 39, 50, 54,
45, 23, -5, -33, -51, -55, -44, -24, 1, 24, 41, 51, 54, 50, 43, 33, 24, 15, 8,
3, 0, -6, -17, -32, -47, -55, -49, -31, -3, 25, 45, 53, 47, 29, 6, -17, -36,
-48, -54, -54, -49, -42, -35, -27, -21, -17, -14, -6, 8, 26, 43, 52, 48, 31, 4,
-23, -45, -54, -50, -35, -14, 9, 28, 42, 50, 52, 51, 48, 43, 38, 35, 32, 28, 20,
5, -16, -36, -51, -53, -40, -17, 11, 35, 49, 51, 42, 25, 5, -15, -31, -43, -50,
-53, -53, -51, -49, -47, -45, -41, -32, -17, 5, 28, 46, 51, 43, 22, -4, -29,
-47, -53, -48, -35, -17, 2, 18, 31, 41, 47, 50, 51, 51, 51, 50, 48, 42, 29, 9,
-16, -38, -51, -50, -36, -13, 13, 34, 47, 51, 45, 32, 17, 1, -14, -25, -34, -40,
-45, -47, -48, -50, -52, -50, -41, -23, 1, 26, 44, 50, 42, 23, -1, -24, -42,
-50, -50, -44, -32, -19, -6, 5, 15, 22, 27, 30, 33, 38, 44, 49, 48, 36, 15, -11,
-34, -48, -50, -40, -20, 3, 24, 39, 48, 49, 45, 38, 29, 19, 11, 4, -2, -5, -10,
-19, -31, -44, -50, -47, -32, -8, 18, 38, 48, 46, 33, 14, -7, -26, -40, -48,
-50, -49, -44, -39, -33, -28, -25, -22, -17, -6, 10, 28, 42, 48, 43, 26, 2, -22,
-41, -49, -47, -36, -19, -1, 16, 30, 39, 45, 48, 48, 47, 46, 44, 43, 39, 30, 15,
-6, -27, -43, -49, -42, -25, -1, 22, 39, 47, 46, 37, 23, 7, -8, -21, -31, -38,
-43, -45, -47, -48, -48, -49, -46, -36, -19, 4, 26, 42, 47, 40, 24, 2, -20, -37,
-46, -48, -44, -35, -24, -12, -2, 7, 14, 20, 23, 26, 31, 38, 45, 46, 39, 22, -1,
-25, -42, -48, -43, -28, -8, 12, 29, 40, 46, 46, 42, 36, 29, 22, 16, 11, 8, 4,
-4, -17, -31, -43, -47, -41, -25, -3, 20, 37, 46, 43, 33, 17, -1, -17, -30, -40,
-45, -47, -47, -45, -44, -42, -40, -37, -30, -18, 0, 19, 36, 45, 43, 29, 9, -14,
-32, -44, -47, -41, -30, -16, -2, 11, 22, 30, 36, 39, 42, 43, 44, 45, 44, 39,
27, 9, -13, -33, -44, -45, -35, -18, 3, 22, 36, 43, 44, 40, 32, 23, 13, 4, -3,
-9, -13, -16, -19, -27, -36, -44, -45, -38, -22, 0, 21, 37, 44, 40, 28, 11, -7,
-23, -35, -42, -45, -45, -42, -38, -33, -29, -27, -24, -19, -9, 5, 22, 36, 43,
41, 29, 9, -13, -31, -42, -45, -39, -28, -14, 1, 14, 25, 33, 38, 41, 42, 43, 43,
43, 42, 38, 29, 14, -6, -25, -39, -44, -39, -25, -6, 14, 30, 40, 43, 40, 33, 23,
13, 3, -5, -12, -17, -21, -23, -27, -34, -40, -44, -41, -29, -11, 10, 29, 40,
42, 35, 21, 3, -14, -28, -37, -42, -44, -42, -38, -34, -30, -27, -24, -22, -16,
-6, 8, 23, 36, 42, 38, 26, 7, -13, -30, -41, -43, -38, -27, -14, 0, 12, 22, 30,
35, 38, 40, 41, 41, 41, 41, 37, 28, 14, -5, -23, -37, -43, -38, -26, -8, 11, 26,
37, 41, 40, 35, 27, 18, 10, 2, -4, -9, -12, -14, -19, -27, -35, -41, -41, -33,
-18, 1, 20, 34, 40, 38, 28, 14, -2, -16, -28, -36, -40, -42, -41, -39, -37, -35,
-34, -31, -27, -18, -4, 12, 27, 37, 40, 33, 19, 0, -18, -32, -40, -41, -36, -27,
-16, -4, 6, 15, 22, 26, 30, 32, 33, 35, 38, 40, 37, 28, 13, -5, -23, -36, -41,
-37, -26, -10, 6, 21, 31, 37, 39, 38, 34, 29, 24, 19, 15, 13, 10, 5, -5, -17,
-29, -38, -40, -34, -20, -3, 16, 30, 38, 38, 32, 22, 9, -4, -15, -24, -31, -35,
-38, -39, -40, -40, -40, -39, -36, -28, -15, 1, 18, 32, 38, 36, 26, 11, -6, -21,
-32, -38, -39, -37, -31, -25, -18, -11, -6, -1, 2, 4, 9, 16, 26, 34, 38, 35, 24,
8, -10, -25, -36, -39, -35, -25, -13, 1, 13, 23, 30, 34, 36, 37, 37, 37, 36, 35,
33, 28, 18, 5, -11, -26, -36, -38, -33, -21, -5, 11, 25, 33, 37, 36, 31, 24, 16,
8, 1, -4, -9, -12, -14, -17, -24, -31, -36, -38, -33, -21, -5, 12, 26, 35, 36,
31, 20, 7, -6, -17, -26, -33, -36, -37, -37, -37, -36, -35, -34, -31, -25, -16,
-3, 11, 25, 34, 36, 30, 18, 3, -13, -26, -34, -37, -36, -30, -23, -15, -8, -1,
5, 9, 12, 14, 17, 22, 29, 34, 35, 31, 21, 6, -11, -25, -34, -36, -32, -23, -11,
2, 13, 23, 29, 33, 35, 35, 34, 33, 32, 32, 30, 25, 17, 6, -8, -22, -32, -36,
-33, -23, -9, 6, 19, 29, 34, 34, 31, 25, 18, 11, 4, -2, -6, -10, -12, -14, -19,
-25, -32, -35, -34, -27, -14, 1, 16, 28, 33, 33, 27, 17, 5, -6, -16, -24, -30,
-33, -35, -35, -35, -35, -34, -33, -31, -25, -16, -3, 11, 23, 31, 33, 28, 18, 4,
-10, -22, -30, -34, -34, -31, -27, -21, -15, -10, -5, -2, 1, 3, 7, 14, 22, 29,
33, 31, 23, 11, -4, -18, -29, -34, -33, -28, -19, -9, 2, 11, 18, 24, 27, 30, 31,
32, 32, 32, 32, 30, 25, 16, 4, -10, -23, -31, -34, -30, -20, -8, 5, 16, 25, 30,
32, 31, 29, 25, 21, 18, 15, 12, 11, 7, 1, -8, -18, -27, -32, -32, -26, -15, -2,
12, 23, 30, 32, 29, 23, 15, 6, -2, -9, -15, -19, -22, -24, -26, -27, -29, -32,
-33, -30, -23, -11, 2, 15, 26, 31, 30, 24, 14, 3, -8, -18, -25, -29, -32, -32,
-32, -30, -29, -28, -27, -25, -21, -14, -4, 7, 18, 27, 30, 28, 21, 9, -4, -16,
-25, -30, -32, -30, -26, -20, -14, -9, -4, 1, 4, 6, 8, 11, 17, 23, 28, 30, 27,
19, 7, -6, -18, -27, -31, -30, -25, -17, -8, 1, 9, 16, 21, 25, 27, 28, 29, 29,
29, 29, 28, 24, 16, 6, -7, -18, -27, -31, -29, -22, -12, -1, 10, 19, 25, 28, 29,
28, 26, 23, 21, 19, 17, 15, 13, 7, 0, -10, -19, -27, -30, -28, -22, -11, 1, 13,
22, 27, 29, 27, 22, 16, 10, 4, -2, -6, -10, -13, -14, -16, -19, -24, -28, -30,
-28, -22, -12, 0, 12, 21, 27, 28, 24, 17, 9, 0, -9, -15, -21, -25, -27, -28,
-29, -29, -29, -29, -28, -25, -20, -12, -1, 10, 20, 26, 27, 24, 16, 6, -4, -14,
-21, -26, -28, -29, -27, -25, -22, -20, -18, -16, -15, -12, -6, 1, 10, 18, 24,
27, 25, 18, 8, -3, -14, -22, -27, -28, -26, -22, -17, -12, -6, -1, 3, 6, 8, 10,
12, 15, 20, 24, 26, 25, 20, 11, 0, -11, -20, -26, -28, -25, -20, -13, -5, 3, 9,
15, 19, 22, 23, 24, 25, 25, 26, 26, 24, 20, 14, 4, -6, -16, -24, -27, -26, -21,
-13, -3, 6, 13, 19, 23, 25, 25, 25, 24, 22, 21, 20, 19, 16, 12, 5, -3, -12, -20,
-25, -26, -23, -16, -6, 4, 13, 19, 24, 25, 24, 21, 18, 14, 10, 6, 4, 2, 0, -2,
-6, -12, -18, -23, -26, -25, -20, -12, -2, 8, 17, 22, 24, 23, 20, 14, 8, 2, -3,
-8, -12, -14, -16, -18, -19, -21, -23, -25, -25, -23, -17, -8, 2, 11, 19, 23,
24, 20, 15, 8, 0, -7, -13, -18, -21, -23, -24, -25, -25, -25, -25, -24, -23,
-19, -13, -5, 4, 13, 20, 23, 22, 18, 11, 3, -6, -13, -18, -22, -24, -24, -24,
-23, -21, -20, -19, -18, -16, -13, -7, -1, 7, 15, 20, 23, 21, 16, 9, 0, -9, -16,
-21, -23, -24, -22, -20, -17, -13, -10, -8, -6, -4, -3, 1, 5, 11, 16, 20, 22,
20, 15, 8, -1, -10, -17, -22, -23, -22, -20, -15, -10, -6, -1, 3, 6, 8, 10, 11,
12, 15, 18, 21, 22, 20, 15, 8, -1, -10, -17, -21, -23, -21, -17, -12, -6, 0, 5,
10, 13, 16, 17, 18, 19, 19, 20, 21, 21, 19, 14, 8, 0, -9, -16, -21, -22, -21,
-16, -10, -4, 3, 9, 13, 17, 19, 20, 20, 21, 20, 20, 20, 19, 17, 13, 7, 0, -7,
-14, -19, -22, -21, -16, -10, -3, 4, 10, 15, 18, 20, 20, 20, 19, 17, 16, 15, 15,
13, 10, 6, 0, -6, -13, -18, -21, -21, -17, -12, -4, 3, 10, 15, 18, 19, 19, 18,
16, 14, 11, 9, 8, 7, 5, 3, -1, -6, -12, -16, -20, -20, -18, -14, -7, 1, 8, 13,
17, 19, 19, 17, 14, 11, 7, 4, 2, 0, -2, -3, -5, -8, -11, -15, -18, -20, -19,
-16, -10, -3, 5, 11, 16, 18, 18, 16, 13, 9, 5, 1, -2, -5, -7, -9, -10, -11, -13,
-15, -17, -19, -19, -17, -13, -6, 1, 8, 13, 17, 18, 17, 14, 10, 5, 1, -4, -7,
-10, -12, -14, -15, -15, -16, -17, -18, -19, -18, -15, -10, -4, 3, 9, 14, 17,
17, 15, 11, 7, 2, -3, -7, -11, -13, -15, -16, -17, -17, -18, -18, -18, -18, -16,
-13, -8, -2, 5, 10, 15, 17, 16, 13, 9, 4, -1, -6, -10, -13, -15, -16, -17, -18,
-18, -18, -18, -17, -16, -14, -11, -6, 0, 6, 11, 15, 16, 15, 12, 8, 3, -2, -7,
-11, -14, -16, -17, -17, -17, -17, -17, -16, -16, -15, -13, -9, -5, 0, 6, 11,
14, 15, 15, 12, 7, 2, -3, -8, -12, -14, -16, -17, -17, -16, -16, -15, -15, -14,
-13, -11, -8, -4, 1, 6, 10, 14, 15, 14, 11, 7, 2, -3, -8, -11, -14, -15, -16,
-16, -15, -14, -14, -13, -12, -12, -10, -7, -4, 0, 5, 9, 13, 14, 14, 11, 7, 2,
-3, -7, -11, -13, -15, -15, -15, -14, -13, -12, -11, -11, -10, -9, -7, -4, 0, 4,
8, 12, 13, 13, 12, 8, 4, -1, -6, -10, -13, -14, -15, -15, -14, -13, -12, -10,
-10, -9, -8, -6, -4, -1, 3, 7, 10, 12, 13, 12, 9, 5, 0, -4, -8, -11, -13, -14,
-14, -14, -12, -11, -10, -9, -8, -7, -6, -5, -2, 1, 5, 8, 11, 12, 12, 10, 7, 2,
-2, -6, -10, -12, -13, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -3, 0, 3, 6,
9, 11, 12, 11, 8, 5, 0, -4, -7, -10, -12, -13, -13, -12, -11, -10, -9, -8, -7,
-7, -6, -4, -2, 1, 4, 7, 10, 11, 11, 10, 7, 3, -1, -5, -8, -10, -12, -12, -12,
-12, -11, -10, -9, -8, -7, -7, -6, -4, -2, 1, 4, 7, 10, 11, 10, 9, 6, 2, -2, -5,
-8, -10, -11, -12, -12, -11, -10, -9, -9, -8, -7, -7, -6, -4, -1, 1, 4, 7, 9,
10, 10, 8, 5, 2, -2, -5, -8, -10, -11, -11, -11, -11, -10, -9, -9, -8, -8, -7,
-6, -4, -2, 1, 4, 7, 9, 10, 9, 8, 5, 2, -1, -4, -7, -9, -10, -11, -11, -10, -10,
-10, -9, -9, -8, -8, -6, -5, -2, 0, 3, 6, 8, 9, 9, 7, 5, 2, -1, -3, -6, -8, -9,
-10, -10, -10, -10, -10, -9, -9, -9, -8, -7, -5, -3, 0, 2, 5, 7, 8, 8, 7, 5, 3,
0, -2, -4, -6, -8, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -6, -4, -2, 1, 4, 6,
7, 8, 7, 6, 4, 2, -1, -3, -5, -6, -7, -8, -8, -9, -9, -9, -9, -9, -8, -8, -7,
-5, -3, 0, 2, 5, 6, 7, 7, 6, 5, 3, 1, -1, -3, -4, -5, -6, -7, -7, -7, -7, -8,
-8, -8, -8, -7, -6, -4, -2, 1, 3, 5, 6, 6, 6, 5, 4, 2, 1, -1, -2, -3, -4, -5,
-5, -5, -6, -6, -7, -7, -7, -7, -6, -5, -3, -1, 1, 3, 5, 5, 6, 6, 5, 4, 3, 1, 0,
-1, -2, -2, -3, -3, -3, -4, -5, -6, -6, -7, -7, -6, -5, -3, -1, 1, 3, 4, 5, 5,
5, 5, 4, 3, 2, 1, 1, 0, 0, 0, -1, -2, -3, -4, -5, -6, -6, -6, -5, -4, -3, -1, 1,
2, 3, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -4,
-3, -1, 0, 1, 2, 3, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 1, 0, -1, -2, -3, -4, -5,
-5, -4, -4, -3, -2, -1, 0, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 0, -2,
-3, -3, -4, -4, -4, -4, -3, -2, -1, -1, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 0, -1, -2, -3, -3, -4, -4, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 2, 2, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -2, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, };

#endif /* BASSICEIGHT_H_ */
