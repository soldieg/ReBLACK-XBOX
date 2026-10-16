/* Static reconstruction of sub_0002F420.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * XboxRecomp split SHA-256: 2F1935B82CC4F6089DEBA8158B0190F22CB34DA09455C15511FCC4502A5CC384
 * Original range: 0x0002F420-0x0002F426 (6 bytes / 2 instructions).
 */
#include <stdint.h>

#define GUEST32(address) (*(volatile uint32_t *)(uintptr_t)(uint32_t)(address))

uint32_t sub_0002F420(void)
{
    return GUEST32(0x002B2A90u);
}
