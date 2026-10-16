/*
 * Manual reconstruction from XboxRecomp split of black/default.xbe.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * Source split: split-full-DF2739C3-20261013/asm/text/sub_00043050.s
 * Address range: 0x00043050-0x00043060
 * Static reconstruction only; child initializers are not executed here.
 */

#include <stdint.h>

extern void sub_00046750(void);
extern void sub_00046560(void);

uint32_t sub_00043050(void)
{
    sub_00046750();
    sub_00046560();
    return 1u;
}
