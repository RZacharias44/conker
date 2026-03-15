#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void guMtxIdentF(f32 mf[4][4]) {
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
    *(s32 *)&mf[3][0] = 0;
    *(s32 *)&mf[3][1] = 0;
    *(s32 *)&mf[3][2] = 0;
    mf[3][3] = one;
}
