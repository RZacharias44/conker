#include <ultra64.h>
#include "functions.h"
#include "variables.h"


// setting W values in identity matrix
void func_150A7DA0(f32 mf[4][4], f32 tx, f32 ty, f32 tz) {
    f32 one = 1.0f;
    *(s32 *)&mf[0][1] = 0;
    mf[0][0] = one;
    *(s32 *)&mf[0][2] = 0;
    *(s32 *)&mf[0][3] = 0;
    *(s32 *)&mf[1][0] = 0;
    mf[1][1] = one;
    *(s32 *)&mf[1][2] = 0;
    *(s32 *)&mf[1][3] = 0;
    *(s32 *)&mf[2][0] = 0;
    *(s32 *)&mf[2][1] = 0;
    mf[2][2] = one;
    *(s32 *)&mf[2][3] = 0;
    *(s32 *)&mf[3][0] = *(s32 *)&tx;
    *(s32 *)&mf[3][1] = *(s32 *)&ty;
    *(s32 *)&mf[3][2] = *(s32 *)&tz;
    mf[3][3] = one;
}
