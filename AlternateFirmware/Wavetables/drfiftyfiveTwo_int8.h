#ifndef DRFIFTYFIVETWO_H_
#define DRFIFTYFIVETWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DRFIFTYFIVETWO_NUM_CELLS 2114
#define DRFIFTYFIVETWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DRFIFTYFIVETWO_DATA [] =
{0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -3, -5, -7, -9, -12, -16, -19, -23, -26, -29,
-31, -33, -34, -34, -34, -33, -31, -29, -25, -21, -16, -11, -5, 0, 7, 13, 20,
26, 32, 38, 44, 48, 53, 56, 59, 60, 60, 57, 53, 45, 33, 19, -2, -24, -44, -57,
-74, -76, -83, -85, -88, -105, -93, -101, -98, -90, -101, -103, -111, -99, -91,
-109, -90, -92, -96, -81, -88, -84, -79, -78, -72, -60, -52, -47, -46, -35, -33,
-28, -19, -21, -15, -6, 0, 11, 8, 2, 15, 14, 14, 13, 7, 19, 27, 12, -3, 7, -1,
14, 7, -5, -3, -13, -11, -23, -19, -25, -19, -32, -28, -29, -34, -30, -37, -36,
-36, -30, -32, -20, -20, -35, -34, -13, -8, -18, -7, -13, -11, 4, 0, 20, 13, 15,
0, 14, 28, 17, 36, 16, 29, 34, 26, 21, 19, 42, 23, 14, 32, 21, 13, 16, 21, 8, 9,
1, -3, 14, -2, 1, -9, -11, -6, 6, -7, -21, 0, -13, -9, -17, -5, -3, -11, -1, -2,
12, 8, 8, 14, 24, 39, 42, 54, 65, 58, 74, 72, 79, 84, 92, 104, 91, 78, 83, 89,
80, 95, 66, 59, 66, 53, 56, 43, 36, 13, 11, 11, 4, -2, -18, -26, -29, -29, -46,
-38, -45, -56, -32, -54, -59, -44, -47, -40, -40, -49, -35, -24, -18, -19, -13,
-4, 6, 13, 11, 9, 21, 50, 32, 44, 42, 45, 55, 56, 60, 55, 53, 70, 51, 33, 59,
42, 45, 41, 39, 27, 26, 21, 9, 13, 12, -2, 0, -2, -15, -13, -7, -11, -33, -20,
-17, -12, -27, -28, -16, -12, -14, -18, -3, -13, -3, 10, 4, 15, 17, 15, 24, 16,
31, 37, 35, 36, 33, 41, 44, 48, 45, 48, 41, 35, 41, 43, 39, 36, 32, 24, 34, 16,
19, 28, 8, 8, 7, 5, 3, 1, -1, -8, -10, -11, -3, -2, -15, -13, -14, 7, -6, -9,
-9, -11, 4, 6, 8, -3, 19, 10, 15, 16, 16, 26, 31, 25, 19, 29, 23, 34, 31, 35,
28, 32, 32, 24, 34, 34, 17, 23, 28, 22, 8, 21, 21, 1, 17, 1, 6, 7, 5, -7, 2, 3,
-11, 1, -11, -4, 2, -3, -5, -1, -3, -3, -8, 9, 2, 6, 13, 0, 3, 8, 17, 10, 31,
16, 11, 13, 21, 20, 17, 24, 28, 22, 15, 26, 15, 23, 24, 21, 6, 16, 16, 13, 10,
11, 17, 0, 4, 9, 13, 1, -6, 3, -11, -5, 11, 4, -1, -9, -5, -1, -4, 4, 0, -8, 12,
8, -3, 0, 5, 6, 8, 9, 12, 10, 7, 14, 15, 10, 12, 26, 13, 13, 12, 14, 10, 16, 13,
11, 20, 1, 21, 6, 6, 9, 6, 10, 4, 2, -1, 13, -1, 4, 1, 2, 1, -11, -1, 2, -5, 3,
4, -5, 0, 3, 0, -5, 2, 7, 5, -2, 6, -1, 2, 19, 11, 2, 4, 13, 7, 1, 13, 8, 5, 17,
14, 1, 10, 16, 3, 7, 11, 7, -5, 8, 9, 7, 11, -2, 1, 5, -1, -1, 10, -7, 0, 4, -9,
3, -8, -2, 7, -5, 11, -9, -4, 9, -5, 2, 1, 2, -1, -3, 4, 19, -1, -3, 4, 5, 10,
-3, 7, 10, 3, 5, 8, 6, 5, 5, 9, 2, 2, 13, 8, -2, -3, 4, 3, 3, 2, 2, 6, 1, -4, 0,
2, -8, 1, 2, 1, 2, -4, -3, -8, 2, 4, -2, -5, 2, 0, 2, 1, 1, -4, -1, 8, -5, 11,
1, -9, 7, 8, 0, 6, 1, 1, 6, 0, 3, 6, 5, -6, -2, 6, 3, 8, 1, -5, 10, -4, 2, 1,
-10, 7, 1, -5, 0, 1, 0, 0, -9, 1, 3, -7, -2, 3, -4, -4, 5, -1, -5, -2, -3, -1,
3, 0, 5, -2, -3, -4, 2, 8, 1, -4, 0, 3, -2, 2, -5, 6, 3, 3, 0, 0, 2, -5, 1, -5,
-3, 7, 2, -2, -1, -3, -2, -2, 3, -1, -7, 0, 2, -6, 0, -7, -2, -6, 2, 4, -2, -5,
-6, 0, -6, 0, -3, 4, -1, 3, -6, -5, -3, -1, 4, 5, -3, -4, 1, -4, 2, -9, 2, 4, 2,
0, -6, -8, 3, 5, -3, -9, -3, 4, 1, -2, -6, -1, -3, 0, -4, -5, -1, -6, -2, 1, 0,
-3, -7, -6, -5, 4, -2, -6, -8, -3, 1, -1, -1, -8, -4, 0, -2, 2, -3, -8, 3, -4,
-4, -6, -4, 0, -3, -1, -4, -5, 3, -4, -4, -6, 2, -5, -8, -1, -3, 1, -5, -1, -7,
-3, -1, -5, -7, -1, -4, -5, -5, -5, 0, -5, -6, 1, -5, -9, -1, 0, -2, -8, -4, -8,
0, -3, -7, -2, -1, -2, -5, -3, -3, 0, -8, -3, -2, -4, 0, -6, -9, 0, -4, -6, -2,
-2, -3, -3, -4, -3, -4, -7, -2, -8, -2, -3, -3, -2, -1, -6, -7, -5, -5, -1, -5,
0, -5, -7, -6, -4, -2, 2, -5, -9, -1, -5, -3, -3, -8, -1, -6, -4, -4, -6, -1,
-3, -3, -6, -3, -1, -3, -7, 0, -6, -4, -6, -1, -1, -4, -6, -6, -2, -7, -2, -4,
-4, -6, 2, -5, -4, -5, -4, -3, -7, -2, -3, -5, -3, -5, -3, -1, -12, -2, -3, -1,
-4, -3, -6, -9, 0, -2, -5, -3, -2, -8, -4, -4, -4, -2, -4, -5, 0, -4, -5, -2,
-8, -3, -4, -4, 1, -4, -9, -2, -5, -7, 0, -3, -1, -7, -6, -4, -4, -2, -4, -2,
-4, -6, -7, 1, -5, -4, -5, -7, 0, -1, -5, -4, -3, -8, -3, -5, -5, 0, -5, -6, -3,
-6, -2, -3, -2, -8, -4, -1, -8, 0, -4, -4, -2, -7, -3, -2, -7, -4, 0, -1, -4,
-6, -6, -4, -5, 0, -1, -5, -7, -3, -2, -2, -7, -6, -4, -4, -2, -3, -1, -3, -5,
-7, -1, -5, -5, -4, -4, -2, -3, -7, -4, -2, -3, -5, -3, -2, -4, -6, -6, -1, -3,
-6, -3, -3, -4, -4, -3, -3, -7, -3, -2, -3, -5, -5, -1, -5, -4, -7, -2, -2, -5,
-1, -5, -5, -4, -4, -3, -2, -3, -3, -3, -6, -3, -4, -4, -4, -1, -6, -3, -4, -6,
-2, -4, -1, -5, -1, -6, -2, -3, -7, -2, -5, -3, -5, -1, -3, -4, -6, -4, -1, -4,
-5, -1, -2, -4, -6, -5, -3, -5, -2, -2, -4, -7, -2, -3, -4, -4, -4, -2, -4, -6,
-3, -2, -5, -3, -5, -1, -4, -5, -5, -3, -1, -4, -3, -5, -5, -2, -2, -5, -4, -3,
-2, -6, -4, -3, -3, -3, -3, -5, -5, -2, -2, -3, -4, -3, -7, -3, -2, -2, -5, -4,
-4, -3, -3, -4, -2, -5, -3, -2, -5, -4, 0, -4, -4, -5, -3, -2, -3, -4, -4, -3,
-6, -2, 0, -4, -7, 0, -2, -5, -2, -2, -5, -4, -2, -4, -3, -4, -3, -2, -3, -3,
-5, -2, -2, -5, -2, -3, -3, -3, -2, -4, -4, -2, -2, -2, -5, -6, -1, -3, -3, -4,
-2, -3, -6, -1, -3, -3, -3, -2, -3, -3, -3, -3, -4, -5, -2, -2, -4, -6, -3, -1,
-3, -3, -2, -3, -4, -3, -4, -4, -2, -4, -2, -2, -4, -4, -4, -2, -2, -4, -2, -4,
-3, -2, -4, 0, -3, -4, -5, -3, -3, -2, -3, -4, -2, -4, -1, -3, -4, -3, -4, -2,
-2, -3, -2, -3, -2, -4, -4, -3, -2, -3, -3, -4, -2, -2, -3, -3, -4, -2, -3, -4,
-3, -3, -2, -2, -2, -1, -4, -3, -3, -3, -4, -4, -2, -2, -2, -4, -4, -2, -1, -5,
-3, -2, -4, -2, -5, -2, -2, -4, -1, -3, -4, -3, -2, -3, -4, -2, -2, -3, -2, -2,
-3, -2, -3, -3, -3, -3, -3, -1, -2, -4, -3, -2, -2, -4, -3, -2, -3, -1, -2, -4,
-3, -2, -1, -4, -4, -1, -3, -3, -2, -3, -2, -3, -3, -2, -3, -2, -3, -3, -4, -2,
-2, -2, -3, -3, -3, -2, -2, -4, -3, -2, -2, -2, -1, -4, -3, -2, -3, -3, -2, -2,
-3, -2, -3, -2, -2, -3, -2, -3, -3, -2, -2, -2, -3, -2, -2, -2, -2, -3, -2, -2,
-2, -3, -2, -2, -3, -1, -3, -2, -2, -2, -2, -3, -2, -2, -2, -3, -2, -2, -2, -2,
-2, -2, -2, -2, -3, -2, -2, -2, -2, -3, -3, -2, -3, -3, -2, -3, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -3, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -2, -2, -2, -3, -1, -2, -2, -2, -2, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2, -2, -1, -2,
-1, -2, -1, -2, -2, -2, -2, -2, -2, -1, -2, -2, -1, -1, -2, -2, -1, -1, -2, -2,
-1, -2, -1, -1, -2, -2, -1, -2, -2, -1, -1, -1, -1, -2, -2, -1, -2, -1, -1, -1,
-2, -1, -1, -2, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* DRFIFTYFIVETWO_H_ */
