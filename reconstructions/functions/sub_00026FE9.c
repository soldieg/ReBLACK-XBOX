/* Static reconstruction of sub_00026FE9.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * XboxRecomp split SHA-256: 0FC839BCB7DB7A41F3F60C4B2322A33141BA7015F4C21BE4713EDDD9B7B30107
 * Original range: 0x00026FE9-0x00026FEF (6 bytes / 2 instructions).
 */
#include <stdint.h>

#define GUEST32(address) (*(volatile uint32_t *)(uintptr_t)(uint32_t)(address))

uint32_t sub_00026FE9(void)
{
    return GUEST32(0x00566154u);
}
