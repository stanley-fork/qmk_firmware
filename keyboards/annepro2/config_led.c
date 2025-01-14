#ifdef RGB_MATRIX_ENABLE

#    include "rgb_matrix.h"
#    include "config_led.h"

#define NA NO_LED

led_config_t g_led_config = { {
  { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13 },
  { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 },
  { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, NA },
  { 41, NA, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, NA }, 
  { 53, NA, 54, 55, NA, NA, 56, NA, NA, 57, 58, 59, 60, NA }
}, {
    { 0.00,  0.00 }, { 17.23,  0.00 }, { 34.46,  0.00 }, { 51.69,  0.00 }, { 68.92,  0.00 }, { 86.15,  0.00 }, { 103.38,  0.00 }, { 120.62,  0.00 }, { 137.85,  0.00 }, { 155.08,  0.00 }, { 172.31,  0.00 }, { 189.54,  0.00 }, { 206.77,  0.00 }, { 224.00,  0.00 },
    { 0.00, 16.00 }, { 17.23, 16.00 }, { 34.46, 16.00 }, { 51.69, 16.00 }, { 68.92, 16.00 }, { 86.15, 16.00 }, { 103.38, 16.00 }, { 120.62, 16.00 }, { 137.85, 16.00 }, { 155.08, 16.00 }, { 172.31, 16.00 }, { 189.54, 16.00 }, { 206.77, 16.00 }, { 224.00, 16.00 },
    { 0.00, 32.00 }, { 17.23, 32.00 }, { 34.46, 32.00 }, { 51.69, 32.00 }, { 68.92, 32.00 }, { 86.15, 32.00 }, { 103.38, 32.00 }, { 120.62, 32.00 }, { 137.85, 32.00 }, { 155.08, 32.00 }, { 172.31, 32.00 }, { 189.54, 32.00 },                    { 224.00, 32.00 },
    { 0.00, 48.00 },                   { 34.46, 48.00 }, { 51.69, 48.00 }, { 68.92, 48.00 }, { 86.15, 48.00 }, { 103.38, 48.00 }, { 120.62, 48.00 }, { 137.85, 48.00 }, { 155.08, 48.00 }, { 172.31, 48.00 }, { 189.54, 48.00 },                    { 224.00, 48.00 },
    { 0.00, 64.00 }, { 17.23, 64.00 }, { 34.46, 64.00 },                                                       { 103.38, 64.00 },                                                          { 172.31, 64.00 }, { 189.54, 64.00 }, { 206.77, 64.00 }, { 224.00, 64.00 },    
}, {
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
   1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
   1, 1, 1,          4,          1, 1, 1, 1,
} };

#endif