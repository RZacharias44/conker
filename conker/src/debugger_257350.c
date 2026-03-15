#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// whats wrong with bcopy?
u8* func_16001AD0(u8 *arg0, u8 *arg1, u32 arg2) {
    u8 *tmp0 = arg0;
    u8 *tmp1 = arg1;

    while (arg2 > 0) {
        *tmp0++ = *tmp1++;
        arg2 -= 1;
    }

    return arg0;
}

s32 func_16001B00(u8 *arg0) {
    u8 *p = arg0;
    s32 len = 0;
    if (*p != 0) {
        do {
            len++;
            p++;
        } while (*p != 0);
    }
    return len;
}

s32 func_16001B34(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;

    ret = func_16001BB4(func_16001B8C, arg0, arg1, &arg2);
    if (ret >= 0) {
        arg0[ret] = 0;
    }
    return ret;
}

s32 func_16001B8C(u8 *arg0, u8 *arg1, u32 arg2) {
    return func_16001AD0(arg0, arg1, arg2) + arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_16001BB4.s")
// uses jump table
#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_160021FC.s")
// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_1600288C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_16002D2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_16002DE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_160033A8.s")
