#ifndef MOUTHTHREE_H_
#define MOUTHTHREE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MOUTHTHREE_NUM_CELLS 1913
#define MOUTHTHREE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MOUTHTHREE_DATA [] = {0,
0, -1, 0, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -3, 2, -3, 2, -3,
2, -2, 1, -2, 0, -1, 0, 0, -2, 1, -3, 3, -6, 5, -9, 9, -16, 14, -37, -20, -2,
-7, 40, 30, 71, 31, 36, 11, -19, -87, -113, -90, -21, 23, 31, 63, 62, 74, 35,
-13, -54, -74, -45, -31, -9, 10, 39, 54, 38, 33, -11, -34, -43, -24, -18, -14,
1, 27, 38, 31, 13, -5, -16, -17, -13, -18, -8, 6, 19, 16, 8, -4, -12, -13, -10,
-12, -3, 5, 20, 17, 11, 1, -9, -10, -13, -13, -10, -3, 9, 12, 9, 5, -5, -1, -8,
-3, -5, -3, 3, 4, 5, -2, -3, -3, -1, -2, 0, 1, 4, 3, 1, -2, -6, -4, -5, 1, 0, 5,
4, 4, 1, -3, -6, -8, -6, -3, 3, 2, 7, 2, 5, 0, -3, -4, -7, -3, -2, 0, 1, 0, 1,
2, 0, 1, 0, 3, 1, 1, -2, -4, -6, -6, -4, -1, 2, 5, 7, 5, 4, -2, -4, -9, -6, -5,
0, 2, 5, 8, 6, 4, -3, -4, -8, -8, -7, -3, 2, 4, 6, 5, 4, 0, -2, -7, -5, -3, -1,
0, 2, 4, 2, 3, 0, -3, -4, -5, -4, -3, -3, 1, 1, 4, 3, 1, 2, -2, -1, -3, -3, 0,
1, 2, 3, 1, -1, -4, -5, -4, -4, 0, 0, 4, 3, 3, 1, -2, -2, -4, -2, -2, 0, 0, 3,
2, 2, 1, -3, -3, -5, -3, -4, -1, 1, 4, 4, 5, 1, -1, -3, -6, -6, -8, -3, 0, 6, 7,
6, 4, 1, -1, -7, -7, -8, -3, -2, 2, 3, 4, 5, 2, 2, -1, -2, -4, -2, -2, -1, -2,
0, 1, 1, 1, 0, 0, 1, -1, -2, -3, -4, -1, -4, 0, -2, 2, 2, 3, 2, 2, -1, -2, -2,
-4, -3, -4, 1, -1, 1, 1, 1, 0, -2, -1, -1, 1, 0, 1, 0, 0, 0, -2, -1, -2, -1, 2,
0, 2, -1, -1, -2, -2, -3, -4, -1, -2, 1, 0, 2, 1, 3, 1, 1, 0, -2, -1, -4, 0, -5,
-3, -3, -1, 0, -1, 1, 3, 4, 4, 1, -1, -1, -2, -2, -3, -1, -1, -1, -2, 0, -2, 0,
-3, 0, -2, 2, 1, 4, 4, 1, 0, -4, -3, -6, -3, -4, -1, 1, 3, 3, 2, 1, 1, -1, -1,
-4, -2, -1, 1, 0, -2, 0, -2, 0, -4, 0, 0, 3, 2, 2, 1, -2, -1, -4, -3, -3, -1, 0,
1, 2, 2, 0, -1, 0, -2, -2, -3, 0, 1, 2, 2, 1, -1, -1, -2, -5, -3, -3, 1, 2, 3,
2, 1, 1, -1, -2, -3, -3, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 1, 0, 1, -3, -2,
-3, -2, -1, -1, 1, 2, 2, 0, 0, -2, -2, -4, -3, -3, -1, 1, 2, 3, 2, 2, 0, 0, -2,
-1, -1, -1, -1, -1, -1, -2, -1, -1, 0, 0, 1, 1, 1, 1, -1, -1, -2, -2, -2, -2,
-1, -1, 0, -1, 0, 0, -1, 1, 0, 1, 1, 2, 0, -1, -2, -3, -3, -4, -2, -3, 1, 1, 4,
3, 1, 0, -1, -2, -4, -3, -4, 0, 1, 2, 2, 3, 1, -1, -2, -4, -3, -5, -3, -2, 0, 2,
2, 3, 2, 1, 0, -2, -3, -3, -2, -2, 1, 1, 2, 1, 1, 0, -2, -3, -3, -2, -1, -1, 0,
1, 1, 2, 0, -2, -2, -2, -2, -2, -2, 0, 1, 1, 1, 0, -1, 0, -2, -2, -2, -1, 1, 0,
1, 0, 1, -1, 0, -2, -2, -1, 0, 2, 0, 1, 0, 1, -2, -2, -3, -2, -1, -1, 1, 1, 2,
1, 0, 0, 0, -1, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 0, 1, 1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, -1, -1, -2, -3, -1, -2, -1, -2, 0, 1, 1,
1, 0, 0, -1, -1, -2, -2, -1, 0, 0, 0, 0, 1, 1, 1, -1, -1, -3, -2, -2, -1, -1, 1,
1, 1, 2, 0, 0, -2, -1, -2, -1, -2, 0, 0, 1, 0, -1, -1, -2, -1, -1, 0, 0, 1, 1,
1, 0, 0, -1, -2, -2, -1, -1, 0, 0, 1, 0, -1, -1, -2, -2, -2, 0, 0, 2, 1, 2, 1,
0, -2, -2, -3, -2, -1, -1, 1, 0, 1, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -2, 0,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0,
0, 1, 1, 0, 0, -2, -2, -2, -1, -1, -1, 0, 0, 1, 0, 0, -1, 0, 0, -1, -1, -2, 0,
-1, -1, -1, -2, 0, -1, 0, 0, 0, 1, 0, 0, -1, -2, -2, -1, -1, 1, 1, 2, 1, 1, 0,
-3, -3, -4, -3, -2, -1, 1, 3, 3, 3, 0, -2, -3, -5, -4, -4, -1, 1, 3, 3, 3, 2, 0,
-2, -3, -3, -3, -2, 0, 1, 1, 1, 0, 0, -1, -2, -1, -1, 0, 1, 1, 1, 0, -1, -2, -2,
-1, -2, -1, -1, 1, 1, 1, 1, 0, 0, -2, -3, -3, -2, -1, 1, 1, 2, 1, 1, 0, -1, -3,
-3, -3, -1, -1, 0, 1, 1, 1, 0, 0, -1, -1, -2, -2, -1, 0, 0, 1, -1, 0, 0, 0, -2,
-1, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, -1, -2, -2, -2, -1, -1, 0, 1, 1, 1, 0,
0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -2, -2, -2, -1, -1, 1, 1, 1, 1, 1, -1, -2,
-3, -2, -2, -1, -1, 1, 2, 2, 1, 0, -1, -2, -1, -2, -1, -1, 1, 1, 0, 0, -1, -1,
-2, -1, -1, 0, 0, 1, 0, 0, -1, -1, -2, -2, -1, -1, 0, 1, 1, 1, 0, -1, -2, -2,
-2, -2, -1, 0, 0, 1, 1, 0, 0, -1, -1, -2, -2, -2, -1, 0, 1, 0, 0, 1, 0, 0, -1,
-2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -2, -1, -1, 0, 1, 2, 2, 1, 0, -1, -2,
-2, -3, -2, -2, 0, 1, 2, 1, 1, 0, -1, -2, -2, -2, -1, -1, 1, 1, 1, 1, 0, -1, -2,
-2, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0,
0, 0, -2, -2, -2, -2, -2, -1, 0, 1, 2, 1, 1, 0, 0, -1, -2, -2, -2, -1, -1, 0, 0,
1, 0, -1, -1, -1, -1, -1, 0, 0, 2, 1, 1, 0, -1, -1, -3, -2, -2, -1, 0, 0, 1, 0,
0, -1, -1, -2, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, -1,
-1, -1, -1, 0, 1, 0, 0, 0, 0, -1, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, -1, -2, -2,
-1, 0, 0, 0, 0, 1, 0, 0, -1, -1, -2, -1, -1, -1, -1, -1, 0, 0, 1, 0, -1, 0, -1,
-1, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1, -2, -1, -1, -1, 0, 0, 1, 0, 1, 0, 0, -1,
-2, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, -2, -2, -1, -1, 0, 1, 1, 1, 1, 0, 0,
-1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -2, -1, -1, 0, 1, 1, 1, 0, 0, -1, -1, -2,
-2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -2, -2,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-2, -1, -1, 0, 1, 1, 1, 1, 1, -1, -1, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0,
1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
-1, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, };

#endif /* MOUTHTHREE_H_ */
