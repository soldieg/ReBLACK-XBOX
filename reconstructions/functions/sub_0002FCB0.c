/*
 * Static manual reconstruction from XboxRecomp split of black/default.xbe.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * Source split: split-full-DF2739C3-20261013/asm/text/sub_0002FCB0.s
 * Address range: 0x0002FCB0-0x0002FCBA (10 bytes)
 */

#include <stdint.h>

#define GUEST32(address) (*(volatile uint32_t *)(uintptr_t)(uint32_t)(address))

uint32_t sub_0002FCB0(uint32_t mode)
{
    GUEST32(0x002977D8u) = mode;
    return mode;
}
