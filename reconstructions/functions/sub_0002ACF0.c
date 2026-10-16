/*
 * Manual reconstruction from the XboxRecomp split of black/default.xbe.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * Source split SHA-256: 3D860BA55F4DD1362E24C5BA4C76C1B74BE19334F2761A5FF90DC4A5B4E80F49
 * Address range: 0x0002ACF0-0x0002ACF6 (6 bytes)
 * Static reconstruction: return the dword stored at 0x2B29D0.
 */

#include <stdint.h>

#define GUEST32(address) (*(volatile uint32_t *)(uintptr_t)(uint32_t)(address))

uint32_t sub_0002ACF0(void)
{
    return GUEST32(0x002B29D0u);
}
