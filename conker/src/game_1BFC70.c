#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_151927C0(struct114 *arg0) {
    s16 tmp = (u8)arg0->unk14 >> 1;
    arg0->unk38 = 300;
    arg0->unk3A = 10;
    arg0->unk14 = tmp * 0x10001;
    arg0->unk3B = 0;
}
